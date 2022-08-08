// Name: Manav Gupta
// University of Illinois Chicago
// Project 4: Labyrinth Escape 2
//

#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>
#include <algorithm>

using namespace std;

template<typename T>
class Grid {
private:
  struct CELL {
    CELL* Next;
    T Val;
    size_t NumCols;  // total # of columns (0..NumCols-1)
    CELL(CELL* _Next = nullptr, T _Val = T(), size_t _NumCols = 0) {
      Next = _Next;
      Val = _Val;
      NumCols = _NumCols;
    }
  };

  size_t NumRows;  // total # of rows (0..NumRows-1)
  CELL** Rows;     // C array of linked lists
public:
  //
  // default constructor:
  //
  // Called automatically by C++ to construct a 4x4 Grid.  All
  // elements are initialized to the default value of T.
  //
  Grid() {
    // initialize 4 rows
    Rows = new CELL*[4];
    NumRows = 4;

    // allocate the first cell of the linked list with default value:
    for (size_t r = 0; r < NumRows; ++r) {
        Rows[r] = new CELL(nullptr, T(), 4);
		CELL* cur = Rows[r];

        // create the linked list for this row.
        for(size_t c = 1; c < Rows[r]->NumCols; ++c) {
            cur->Next = new CELL(nullptr, T());
			cur = cur->Next;
        }
    }

  }

  //
  // parameterized constructor:
  //
  // Constructs a Grid with R rows,
  // where each row has C columns. All elements are initialized to 
  // the default value of T.
  //
  Grid(size_t R, size_t C) {
      Rows = new CELL*[R];
      NumRows = R;
      // R rows created
      for (size_t r = 0; r < NumRows; ++r) {
          Rows[r] = new CELL(nullptr, T(), C);
          CELL* cur = Rows[r];
          // cur goes to cur next C testBarChartAnimateConstructor
          // new CELL is created each time - linked list
          for (size_t c = 1; c < Rows[r]->NumCols; ++c) {
              cur->Next = new CELL(nullptr, T());
              cur = cur->Next;
          }
      }
  }
    
  //
  // destructor:
  //
  // Called automatically by C++ to free the memory associated by the vector.
  //
  virtual ~Grid() {
      // for each row...
      for (size_t r = 0; r < NumRows; ++r) {
          // pointer to the particular row's head
          CELL* node = Rows[r];
          CELL* next = nullptr;
          // while not empty
          while (node != nullptr) {
              // assign next to node next
              next = node->Next;
              // delete current node
              delete node;
              // assign node to next
              node = next;
          }
      }
      // NumRows is 0 now
      NumRows = 0;
      // delete the rows
      delete[] Rows;
  }


  //
  // copy constructor:
  //
  // Constructs a Grid that contains a
  // copy of an existing Grid.  Example: this occurs when passing
  // Grid as a parameter by value
  //
  Grid(const Grid<T>& other) {
      // number of this rows and columns = others'
      this->NumRows = other.NumRows;
      this->Rows = new CELL*[NumRows];
      
      for (size_t r = 0; r < NumRows; ++r) {
          // othercur points to others' row's head
          CELL* otherCur = other.Rows[r];
          // assign variable for numCols per row, in othercur
          size_t C = otherCur->NumCols;
          // get value of head for other's row/othercur
          T val = otherCur->Val;
          // this row = new cell
          this->Rows[r] = new CELL(nullptr, val, C);
          // cur points to this rows head
          CELL* cur = this->Rows[r];
          // while other next is not nullptr
          while (otherCur->Next != nullptr) {
              // othercur = othercur next (already got head value)
              // no need to get it again
              otherCur = otherCur->Next;
              // get value of othernext/othercure
              val = otherCur->Val;
              // cur->next points to another cell that gets val
              cur->Next = new CELL(nullptr, val);
              // iterate cur
              cur = cur->Next;
          }
      }
  }
    
  //
  // copy operator=
  //
  // Called when you assign one vector into another, i.e. this = other;
  // pretty much deleting then creating a copy constructed grid
  // then returning *this
  //
  Grid& operator=(const Grid& other) {
      for (size_t r = 0; r < NumRows; ++r) {
          CELL* node = Rows[r];
          CELL* next = nullptr;
          while (node != nullptr) {
              next = node->Next;
              delete node;
              node = next;
          }
      }
      delete[] Rows;
      this->NumRows = other.NumRows;
      this->Rows = new CELL*[NumRows];
      
      for (size_t r = 0; r < NumRows; ++r) {
          CELL* otherCur = other.Rows[r];
          size_t C = otherCur->NumCols;
          T val = otherCur->Val;
          this->Rows[r] = new CELL(nullptr, val, C);
          CELL* cur = this->Rows[r];
          while (otherCur->Next != nullptr) {
              otherCur = otherCur->Next;
              val = otherCur->Val;
              cur->Next = new CELL(nullptr, val);
              cur = cur->Next;
          }
      }
      return *this;
  }

  //
  // numrows
  //
  // Returns the # of rows in the Grid.  The indices for these rows
  // are 0..numrows-1.
  //
  size_t numrows() const {
    return NumRows;
  }
  

  //
  // numcols
  //
  // Returns the # of columns in row r.  The indices for these columns
  // are 0..numcols-1.  For now, each row will have the same number of columns.
  //
  size_t numcols(size_t r) const {
      if (r >= NumRows) {
          throw out_of_range("Error: r out of range");
      } else if (r < 0) {
          throw out_of_range("Error: r out of range");
      }
      return Rows[r]->NumCols;
  }


  //
  // size
  //
  // Returns the total # of elements in the grid.
  //
  size_t size() const {
      size_t size = NumRows * Rows[0]->NumCols;
      return size;
  }


  //
  // ()
  //
  // Returns a reference to the element at location (r, c); this
  // allows you to access the element or change it:
  //
  //    grid(r, c) = ...
  //    cout << grid(r, c) << endl;
  //
  T& operator()(size_t r, size_t c) {
        if (r >= NumRows) {
            throw out_of_range("Error: r out of range");
        } else if (c >= Rows[0]->NumCols) {
            throw out_of_range("Error: c out of range");
        } else if (c < 0) {
            throw out_of_range("Error: c out of range");
        } else if (r < 0) {
            throw out_of_range("Error: r out of range");
        }
        // cur = the row asked for in parameter
        CELL* cur = Rows[r];
        // iterate cur c times to get to column asked for in parameter
        for (size_t x = 0; x < c; ++x) {
            cur = cur->Next;
        }
        // returns current value (value asked for in parameter)
        return cur->Val;
    }

  //
  // _output
  //
  // Outputs the contents of the grid; for debugging purposes.  This is not
  // tested.
  //
  void _output() {
      cout << "*** OUTPUT START ***" << endl;
      cout << " ## Size of grid: " << NumRows << " x " << Rows[0]->NumCols << endl;
      cout << "   ";
      for (size_t c = 0; c < Rows[0]->NumCols; ++c) {
          cout << " <" << c << ">";
      }
      cout << endl;
      for (size_t r = 0; r < NumRows; ++r) {
          cout << "    <" << r << ">"; 
          CELL* node = Rows[r];
          while (node != nullptr) {
              cout << " " << node->Val;
          }
          cout << endl;
      }
      cout << "*** OUTPUT END ***" << endl;
  }

};

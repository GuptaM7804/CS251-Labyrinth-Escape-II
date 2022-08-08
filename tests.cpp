// Name: Manav Gupta
// University of Illinois Chicago
// Project 4: Labyrinth Escape 2
//

#include <gtest/gtest.h>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include "maze.h"
#include "grid.h"
#include "EscapeTheLabyrinth.h"


TEST(gridchar, defaultConstructor){
    Grid<char> g1;
    EXPECT_EQ(g1.size(), 16);
    EXPECT_EQ(g1.numcols(0), 4);
    EXPECT_EQ(g1.numcols(1), 4);
    EXPECT_EQ(g1.numcols(2), 4);
    EXPECT_EQ(g1.numcols(3), 4);
    EXPECT_EQ(g1.numrows(), 4);
 }
 
 TEST(gridstring, defaultConstructor){
    Grid<string> g1;
    EXPECT_EQ(g1.size(), 16);
    EXPECT_EQ(g1.numcols(0), 4);
    EXPECT_EQ(g1.numcols(1), 4);
    EXPECT_EQ(g1.numcols(2), 4);
    EXPECT_EQ(g1.numcols(3), 4);
    EXPECT_EQ(g1.numrows(), 4);
 }
 
 TEST(gridint, defaultConstructor){
    Grid<int> g1;
    EXPECT_EQ(g1.size(), 16);
    EXPECT_EQ(g1.numcols(0), 4);
    EXPECT_EQ(g1.numcols(1), 4);
    EXPECT_EQ(g1.numcols(2), 4);
    EXPECT_EQ(g1.numcols(3), 4);
    EXPECT_EQ(g1.numrows(), 4);
 }
 
 TEST(gridbool, defaultConstructor){
    Grid<bool> g1;
    EXPECT_EQ(g1.size(), 16);
    EXPECT_EQ(g1.numcols(0), 4);
    EXPECT_EQ(g1.numcols(1), 4);
    EXPECT_EQ(g1.numcols(2), 4);
    EXPECT_EQ(g1.numcols(3), 4);
    EXPECT_EQ(g1.numrows(), 4);
 }
 
 TEST(griddouble, defaultConstructor){
    Grid<double> g1;
    EXPECT_EQ(g1.size(), 16);
    EXPECT_EQ(g1.numcols(0), 4);
    EXPECT_EQ(g1.numcols(1), 4);
    EXPECT_EQ(g1.numcols(2), 4);
    EXPECT_EQ(g1.numcols(3), 4);
    EXPECT_EQ(g1.numrows(), 4);
 }
 
 TEST(gridfloat, defaultConstructor){
    Grid<float> g1;
    EXPECT_EQ(g1.size(), 16);
    EXPECT_EQ(g1.numcols(0), 4);
    EXPECT_EQ(g1.numcols(1), 4);
    EXPECT_EQ(g1.numcols(2), 4);
    EXPECT_EQ(g1.numcols(3), 4);
    EXPECT_EQ(g1.numrows(), 4);
 }

TEST(gridstring, parameterisedConstructor) {
    Grid<string> g1(15, 5);
    EXPECT_EQ(g1.size(), 75);
    EXPECT_EQ(g1.numcols(0), 5);
    EXPECT_EQ(g1.numcols(1), 5);
    EXPECT_EQ(g1.numcols(2), 5);
    EXPECT_EQ(g1.numcols(3), 5);
    EXPECT_EQ(g1.numrows(), 15);
}

TEST(gridchar, parameterisedConstructor) {
    Grid<char> g1(15, 5);
    EXPECT_EQ(g1.size(), 75);
    EXPECT_EQ(g1.numcols(0), 5);
    EXPECT_EQ(g1.numcols(1), 5);
    EXPECT_EQ(g1.numcols(2), 5);
    EXPECT_EQ(g1.numcols(3), 5);
    EXPECT_EQ(g1.numrows(), 15);
}

TEST(gridint, parameterisedConstructor) {
    Grid<int> g1(15, 5);
    EXPECT_EQ(g1.size(), 75);
    EXPECT_EQ(g1.numcols(0), 5);
    EXPECT_EQ(g1.numcols(1), 5);
    EXPECT_EQ(g1.numcols(2), 5);
    EXPECT_EQ(g1.numcols(3), 5);
    EXPECT_EQ(g1.numrows(), 15);
}

TEST(gridbool, parameterisedConstructor) {
    Grid<bool> g1(15, 5);
    EXPECT_EQ(g1.size(), 75);
    EXPECT_EQ(g1.numcols(0), 5);
    EXPECT_EQ(g1.numcols(1), 5);
    EXPECT_EQ(g1.numcols(2), 5);
    EXPECT_EQ(g1.numcols(3), 5);
    EXPECT_EQ(g1.numrows(), 15);
}

TEST(griddouble, parameterisedConstructor) {
    Grid<double> g1(15, 5);
    EXPECT_EQ(g1.size(), 75);
    EXPECT_EQ(g1.numcols(0), 5);
    EXPECT_EQ(g1.numcols(1), 5);
    EXPECT_EQ(g1.numcols(2), 5);
    EXPECT_EQ(g1.numcols(3), 5);
    EXPECT_EQ(g1.numrows(), 15);
}

TEST(gridfloat, parameterisedConstructor) {
    Grid<float> g1(15, 5);
    EXPECT_EQ(g1.size(), 75);
    EXPECT_EQ(g1.numcols(0), 5);
    EXPECT_EQ(g1.numcols(1), 5);
    EXPECT_EQ(g1.numcols(2), 5);
    EXPECT_EQ(g1.numcols(3), 5);
    EXPECT_EQ(g1.numrows(), 15);
}

TEST(grids, parameterisedConstructor1x1) {
    Grid<string> g1(1, 1);
    EXPECT_EQ(g1.size(), 1);
    EXPECT_EQ(g1.numcols(0), 1);
    EXPECT_EQ(g1.numrows(), 1);
}

TEST(grid, parameterisedConstructor1x10) {
    Grid<string> g1(1, 10);
    EXPECT_EQ(g1.size(), 10);
    EXPECT_EQ(g1.numcols(0), 10);
    EXPECT_EQ(g1.numrows(), 1);
}

TEST(grid, parameterisedConstructor10x1) {
    Grid<string> g1(10, 1);
    EXPECT_EQ(g1.size(), 10);
    EXPECT_EQ(g1.numcols(0), 1);
    EXPECT_EQ(g1.numcols(1), 1);
    EXPECT_EQ(g1.numcols(2), 1);
    EXPECT_EQ(g1.numcols(3), 1);
    EXPECT_EQ(g1.numrows(), 10);
}

TEST(gridstring, copyconstructor) {
    Grid<string> g1;
    Grid<string> g2(g1);
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}

TEST(gridint, copyconstructor) {
    Grid<int> g1;
    Grid<int> g2(g1);
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}

TEST(gridchar, copyconstructor) {
    Grid<char> g1;
    Grid<char> g2(g1);
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}
TEST(griddouble, copyconstructor) {
    Grid<double> g1;
    Grid<double> g2(g1);
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}

TEST(gridbool, copyconstructor) {
    Grid<bool> g1;
    Grid<bool> g2(g1);
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}

TEST(gridfloat, copyconstructor) {
    Grid<float> g1;
    Grid<float> g2(g1);
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}

TEST(grid, copyconstructorfromparmetrizedconstructor) {
    Grid<string> g1(15, 5);
    Grid<string> g2(g1);
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(gridint, copyconstructorfromparmetrizedconstructor) {
    Grid<int> g1(15, 5);
    Grid<int> g2(g1);
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(gridchar, copyconstructorfromparmetrizedconstructor) {
    Grid<char> g1(15, 5);
    Grid<char> g2(g1);
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(griddouble, copyconstructorfromparmetrizedconstructor) {
    Grid<double> g1(15, 5);
    Grid<double> g2(g1);
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(gridbool, copyconstructorfromparmetrizedconstructor) {
    Grid<bool> g1(15, 5);
    Grid<bool> g2(g1);
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(gridfloat, copyconstructorfromparmetrizedconstructor) {
    Grid<float> g1(15, 5);
    Grid<float> g2(g1);
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(grid, copyconstructor1x1) {
    Grid<string> g1(1,1);
    Grid<string> g2(g1);
    EXPECT_EQ(g2.size(), 1);
    EXPECT_EQ(g2.numcols(0), 1);
    EXPECT_EQ(g2.numrows(), 1);
}

TEST(grid, copyconstructor1x10) {
    Grid<string> g1(1,10);
    Grid<string> g2(g1);
    EXPECT_EQ(g2.size(), 10);
    EXPECT_EQ(g2.numcols(0), 10);
    EXPECT_EQ(g2.numrows(), 1);
}

TEST(grid, copyconstructor10x1) {
    Grid<string> g1(10,1);
    Grid<string> g2(g1);
    EXPECT_EQ(g2.size(), 10);
    EXPECT_EQ(g2.numcols(0), 1);
    EXPECT_EQ(g2.numcols(1), 1);
    EXPECT_EQ(g2.numcols(2), 1);
    EXPECT_EQ(g2.numcols(3), 1);
    EXPECT_EQ(g2.numrows(), 10);
}

TEST(grid, copyoperator) {
    Grid<string> g1;
    Grid<string> g2;
    g2 = g1;
    EXPECT_EQ(g2.size(), 16);
    EXPECT_EQ(g2.numcols(0), 4);
    EXPECT_EQ(g2.numcols(1), 4);
    EXPECT_EQ(g2.numcols(2), 4);
    EXPECT_EQ(g2.numcols(3), 4);
    EXPECT_EQ(g2.numrows(), 4);
}

TEST(grid, copyoperatorfromparmetrizedconstructor) {
    Grid<string> g1(15, 5);
    Grid<string> g2;
    g2 = g1;
    EXPECT_EQ(g2.size(), 75);
    EXPECT_EQ(g2.numcols(0), 5);
    EXPECT_EQ(g2.numcols(1), 5);
    EXPECT_EQ(g2.numcols(2), 5);
    EXPECT_EQ(g2.numcols(3), 5);
    EXPECT_EQ(g2.numrows(), 15);
}

TEST(grid, copyoperator1x1) {
    Grid<string> g1(1,1);
    Grid<string> g2;
    g2 = g1;
    EXPECT_EQ(g2.size(), 1);
    EXPECT_EQ(g2.numcols(0), 1);
    EXPECT_EQ(g2.numrows(), 1);
}

TEST(grid, copyoperator1x10) {
    Grid<string> g1(1,10);
    Grid<string> g2;
    g2 = g1;
    EXPECT_EQ(g2.size(), 10);
    EXPECT_EQ(g2.numcols(0), 10);
    EXPECT_EQ(g2.numrows(), 1);
}

TEST(grid, copyoperator10x1) {
    Grid<string> g1(10,1);
    Grid<string> g2;
    g2 = g1;
    EXPECT_EQ(g2.size(), 10);
    EXPECT_EQ(g2.numcols(0), 1);
    EXPECT_EQ(g2.numcols(1), 1);
    EXPECT_EQ(g2.numcols(2), 1);
    EXPECT_EQ(g2.numcols(3), 1);
    EXPECT_EQ(g2.numrows(), 10);
}

TEST(grid, copycopy) {
    Grid<string> g1(15, 5);
    Grid<string> g2(g1);
    Grid<string> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 75);
    EXPECT_EQ(g3.numcols(0), 5);
    EXPECT_EQ(g3.numcols(1), 5);
    EXPECT_EQ(g3.numcols(2), 5);
    EXPECT_EQ(g3.numcols(3), 5);
    EXPECT_EQ(g3.numrows(), 15);
}

TEST(gridchar, copycopy) {
    Grid<char> g1(15, 5);
    Grid<char> g2(g1);
    Grid<char> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 75);
    EXPECT_EQ(g3.numcols(0), 5);
    EXPECT_EQ(g3.numcols(1), 5);
    EXPECT_EQ(g3.numcols(2), 5);
    EXPECT_EQ(g3.numcols(3), 5);
    EXPECT_EQ(g3.numrows(), 15);
}

TEST(griddouble, copycopy) {
    Grid<double> g1(15, 5);
    Grid<double> g2(g1);
    Grid<double> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 75);
    EXPECT_EQ(g3.numcols(0), 5);
    EXPECT_EQ(g3.numcols(1), 5);
    EXPECT_EQ(g3.numcols(2), 5);
    EXPECT_EQ(g3.numcols(3), 5);
    EXPECT_EQ(g3.numrows(), 15);
}

TEST(gridint, copycopy) {
    Grid<int> g1(15, 5);
    Grid<int> g2(g1);
    Grid<int> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 75);
    EXPECT_EQ(g3.numcols(0), 5);
    EXPECT_EQ(g3.numcols(1), 5);
    EXPECT_EQ(g3.numcols(2), 5);
    EXPECT_EQ(g3.numcols(3), 5);
    EXPECT_EQ(g3.numrows(), 15);
}

TEST(gridfloat, copycopy) {
    Grid<float> g1(15, 5);
    Grid<float> g2(g1);
    Grid<float> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 75);
    EXPECT_EQ(g3.numcols(0), 5);
    EXPECT_EQ(g3.numcols(1), 5);
    EXPECT_EQ(g3.numcols(2), 5);
    EXPECT_EQ(g3.numcols(3), 5);
    EXPECT_EQ(g3.numrows(), 15);
}

TEST(gridbool, copycopy) {
    Grid<bool> g1(15, 5);
    Grid<bool> g2(g1);
    Grid<bool> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 75);
    EXPECT_EQ(g3.numcols(0), 5);
    EXPECT_EQ(g3.numcols(1), 5);
    EXPECT_EQ(g3.numcols(2), 5);
    EXPECT_EQ(g3.numcols(3), 5);
    EXPECT_EQ(g3.numrows(), 15);
}

TEST(grid, copycopy1x1) {
    Grid<string> g1(1,1);
    Grid<string> g2(g1);
    Grid<string> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 1);
    EXPECT_EQ(g3.numcols(0), 1);
    EXPECT_EQ(g3.numrows(), 1);
}

TEST(grid, copycopy1x10) {
    Grid<string> g1(1,10);
    Grid<string> g2(g1);
    Grid<string> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 10);
    EXPECT_EQ(g3.numcols(0), 10);
    EXPECT_EQ(g3.numrows(), 1);
}

TEST(grid, copycopy10x1) {
    Grid<string> g1(10,1);
    Grid<string> g2(g1);
    Grid<string> g3;
    g3 = g2;
    EXPECT_EQ(g3.size(), 10);
    EXPECT_EQ(g3.numcols(0), 1);
    EXPECT_EQ(g3.numcols(1), 1);
    EXPECT_EQ(g3.numcols(2), 1);
    EXPECT_EQ(g3.numcols(3), 1);
    EXPECT_EQ(g3.numrows(), 10);
}

TEST(grid, Toperator) {
    Grid<string> g1;
    g1(1,1) = "x";
    EXPECT_EQ(g1(1,1), "x");
}

TEST(gridbool, Toperator) {
    Grid<bool> g1;
    g1(1,1) = true;
    EXPECT_EQ(g1(1,1), true);
}

TEST(gridint, Toperator) {
    Grid<int> g1;
    g1(1,1) = 5;
    EXPECT_EQ(g1(1,1), 5);
}

TEST(gridfloat, Toperator) {
    Grid<float> g1;
    g1(1,1) = 1.1;
    EXPECT_FLOAT_EQ(g1(1,1), 1.1);
}

TEST(griddouble, Toperator) {
    Grid<double> g1;
    g1(1,1) = 1.1;
    EXPECT_DOUBLE_EQ(g1(1,1), 1.1);
}

TEST(gridchar, Toperator) {
    Grid<char> g1;
    g1(1,1) = 'x';
    EXPECT_EQ(g1(1,1), 'x');
}

TEST(grid, copyconstructToperator) {
    Grid<string> g1;
    g1(1,1) = "x";
    Grid<string> g2(g1);
    EXPECT_EQ(g2(1,1), "x");
}

TEST(gridbool, copyconstructToperator) {
    Grid<bool> g1;
    g1(1,1) = true;
    Grid<bool> g2(g1);
    EXPECT_EQ(g2(1,1), true);
}

TEST(gridint, copyconstructToperator) {
    Grid<int> g1;
    g1(1,1) = 5;
    Grid<int> g2(g1);
    EXPECT_EQ(g2(1,1), 5);
}

TEST(gridfloat, copyconstructToperator) {
    Grid<float> g1;
    g1(1,1) = 1.1;
    Grid<float> g2(g1);
    EXPECT_FLOAT_EQ(g2(1,1), 1.1);
}

TEST(griddouble, copyconstructToperator) {
    Grid<double> g1;
    g1(1,1) = 1.1;
    Grid<double> g2(g1);
    EXPECT_DOUBLE_EQ(g2(1,1), 1.1);
}

TEST(gridchar, copyconstructToperator) {
    Grid<char> g1;
    g1(1,1) = 'x';
    Grid<char> g2(g1);
    EXPECT_EQ(g2(1,1), 'x');
}

TEST(gridchar, copyconstructToperatornotequal) {
    Grid<char> g1;
    g1(1,1) = 'x';
    Grid<char> g2(g1);
    g1(1,1) = 'y';
    ASSERT_NE(g2(1,1), g1(1,1));
}

TEST(grid, copyopToperator) {
    Grid<string> g1;
    g1(1,1) = "x";
    Grid<string> g2 = g1;
    EXPECT_EQ(g2(1,1), "x");
}

TEST(gridbool, copyopToperator) {
    Grid<bool> g1;
    g1(1,1) = true;
    Grid<bool> g2 = g1;
    EXPECT_EQ(g2(1,1), true);
}

TEST(gridint, copyopToperator) {
    Grid<int> g1;
    g1(1,1) = 5;
    Grid<int> g2 = g1;
    EXPECT_EQ(g2(1,1), 5);
}

TEST(gridfloat, copyopToperator) {
    Grid<float> g1;
    g1(1,1) = 1.1;
    Grid<float> g2 = g1;
    EXPECT_FLOAT_EQ(g2(1,1), 1.1);
}

TEST(griddouble, copyopToperator) {
    Grid<double> g1;
    g1(1,1) = 1.1;
    Grid<double> g2 = g1;
    EXPECT_DOUBLE_EQ(g2(1,1), 1.1);
}

TEST(gridchar, copyopToperator) {
    Grid<char> g1;
    g1(1,1) = 'x';
    Grid<char> g2 = g1;
    EXPECT_EQ(g2(1,1), 'x');
}

TEST(gridchar, copyopToperatornotequal) {
    Grid<char> g1;
    g1(1,1) = 'x';
    Grid<char> g2 = g1;
    g1(1,1) = 'y';
    ASSERT_NE(g2(1,1), g1(1,1));
}

TEST(grid, edgeToperator) {
    Grid<string> g1;
    g1(0,0) = "x";
    EXPECT_EQ(g1(0,0), "x");
}

TEST(gridstring, out_of_rangeToperator) {
    Grid<string> g1;
    EXPECT_THROW(g1(-1,-1), out_of_range);
}

TEST(gridstring, out_of_rangetoperatortop) {
    Grid<string> g1;
    EXPECT_THROW(g1(4,4), out_of_range);
}

TEST(gridstring, out_of_rangecolumns) {
    Grid<string> g1;
    EXPECT_THROW(g1.numcols(-1), out_of_range);
}

TEST(gridstring, out_of_rangecolumnstop) {
    Grid<string> g1;
    EXPECT_THROW(g1.numcols(4), out_of_range);
}

TEST(gridbool, out_of_rangeToperator) {
    Grid<bool> g1;
    EXPECT_THROW(g1(-1,-1), out_of_range);
}

TEST(gridbool, out_of_rangetoperatortop) {
    Grid<bool> g1;
    EXPECT_THROW(g1(4,4), out_of_range);
}

TEST(gridbool, out_of_rangecolumns) {
    Grid<bool> g1;
    EXPECT_THROW(g1.numcols(-1), out_of_range);
}

TEST(gridbool, out_of_rangecolumnstop) {
    Grid<bool> g1;
    EXPECT_THROW(g1.numcols(4), out_of_range);
}

TEST(gridfloat, out_of_rangeToperator) {
    Grid<float> g1;
    EXPECT_THROW(g1(-1,-1), out_of_range);
}

TEST(gridfloat, out_of_rangetoperatortop) {
    Grid<float> g1;
    EXPECT_THROW(g1(4,4), out_of_range);
}

TEST(gridfloat, out_of_rangecolumns) {
    Grid<float> g1;
    EXPECT_THROW(g1.numcols(-1), out_of_range);
}

TEST(gridfloat, out_of_rangecolumnstop) {
    Grid<float> g1;
    EXPECT_THROW(g1.numcols(4), out_of_range);
}

TEST(griddouble, out_of_rangeToperator) {
    Grid<double> g1;
    EXPECT_THROW(g1(-1,-1), out_of_range);
}

TEST(griddouble, out_of_rangetoperatortop) {
    Grid<double> g1;
    EXPECT_THROW(g1(4,4), out_of_range);
}

TEST(griddouble, out_of_rangecolumns) {
    Grid<double> g1;
    EXPECT_THROW(g1.numcols(-1), out_of_range);
}

TEST(griddouble, out_of_rangecolumnstop) {
    Grid<double> g1;
    EXPECT_THROW(g1.numcols(4), out_of_range);
}

TEST(gridint, out_of_rangeToperator) {
    Grid<int> g1;
    EXPECT_THROW(g1(-1,-1), out_of_range);
}

TEST(gridint, out_of_rangetoperatortop) {
    Grid<int> g1;
    EXPECT_THROW(g1(4,4), out_of_range);
}

TEST(gridint, out_of_rangecolumns) {
    Grid<int> g1;
    EXPECT_THROW(g1.numcols(-1), out_of_range);
}

TEST(gridint, out_of_rangecolumnstop) {
    Grid<int> g1;
    EXPECT_THROW(g1.numcols(4), out_of_range);
}

TEST(gridchar, out_of_rangeToperator) {
    Grid<char> g1;
    EXPECT_THROW(g1(-1,-1), out_of_range);
}

TEST(gridchar, out_of_rangetoperatortop) {
    Grid<char> g1;
    EXPECT_THROW(g1(4,4), out_of_range);
}

TEST(gridchar, out_of_rangecolumns) {
    Grid<char> g1;
    EXPECT_THROW(g1.numcols(-1), out_of_range);
}

TEST(gridchar, out_of_rangecolumnstop) {
    Grid<char> g1;
    EXPECT_THROW(g1.numcols(4), out_of_range);
}

TEST(grid, copyconstvalue) {
    Grid<int> g1(10, 10);
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            int z = x * y;
            g1(x,y) = z;
        }
    }
    Grid<int> g2(g1);
    for (int x = 0; x < g2.numrows(); ++x) {
        for (int y = 0; y < g2.numcols(x); ++y) {
            ASSERT_EQ(g2(x,y), g1(x,y));
        }
    }
}

TEST(grid, copyopvalue) {
    Grid<int> g1(10, 10);
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            int z = x * y;
            g1(x,y) = z;
        }
    }
    Grid<int> g2 = g1;
    for (int x = 0; x < g2.numrows(); ++x) {
        for (int y = 0; y < g2.numcols(x); ++y) {
            ASSERT_EQ(g2(x,y), g1(x,y));
        }
    }
}

TEST(grid, copyconstvalueNE) {
    Grid<int> g1(10, 10);
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            int z = x * y;
            g1(x,y) = z;
        }
    }
    Grid<int> g2(g1);
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            g1(x,y) = -1;
        }
    }
    for (int x = 0; x < g2.numrows(); ++x) {
        for (int y = 0; y < g2.numcols(x); ++y) {
            ASSERT_NE(g2(x,y), g1(x,y));
        }
    }
}

TEST(grid, copyopvalueNE) {
    Grid<int> g1(10, 10);
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            int z = x * y;
            g1(x,y) = z;
        }
    }
    Grid<int> g2 = g1;
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            g1(x,y) = -1;
        }
    }
    for (int x = 0; x < g2.numrows(); ++x) {
        for (int y = 0; y < g2.numcols(x); ++y) {
            ASSERT_NE(g2(x,y), g1(x,y));
        }
    }
}

TEST(grid, copyoperatorchanges) {
    Grid<int> g1;
    Grid<int> g2 = g1;
    Grid<int> g3(10, 10);
    g1 = g3;
    ASSERT_EQ(g1.size(), g3.size());
    ASSERT_NE(g2.size(), g1.size());
}

TEST(grid, extrachanges) {
    Grid<int> g1;
    for (int x = 0; x < g1.numrows(); ++x) {
        for (int y = 0; y < g1.numcols(x); ++y) {
            int z = x * y;
            g1(x,y) = z;
        }
    }
    Grid<int> g2 = g1;
    Grid<int> g3;
    for (int x = 0; x < g3.numrows(); ++x) {
        for (int y = 0; y < g3.numcols(x); ++y) {
            g3(x,y) = -10;
        }
    }
    g1 = g3;
    for (int x = 0; x < g3.numrows(); ++x) {
        for (int y = 0; y < g3.numcols(x); ++y) {
            ASSERT_EQ(g3(x,y), g1(x,y));
        }
    }
    for (int x = 0; x < g2.numrows(); ++x) {
        for (int y = 0; y < g2.numcols(x); ++y) {
            ASSERT_NE(g2(x,y), g1(x,y));
        }
    }
}

// Provided Test: sample maze from handout, make lots more yourself!
TEST(maze, basic) {
    vector<string> textMaze;

    textMaze.push_back("* *-W *");
    textMaze.push_back("| |   |");
    textMaze.push_back("*-* * *");
    textMaze.push_back("  | | |");
    textMaze.push_back("S *-*-*");
    textMaze.push_back("|   | |");
    textMaze.push_back("*-*-* P");

    Maze m(textMaze);

    MazeCell* start = m.getStart(2, 2);

    /* These paths are the ones in the handout. They all work. */
    EXPECT_TRUE(isPathToFreedom(start, "ESNWWNNEWSSESWWN"));
    EXPECT_TRUE(isPathToFreedom(start, "SWWNSEENWNNEWSSEES"));
    EXPECT_TRUE(isPathToFreedom(start, "WNNEWSSESWWNSEENES"));

    /* These paths don't work, since they don't pick up all items. */
    EXPECT_FALSE(isPathToFreedom(start, "ESNW"));
    EXPECT_FALSE(isPathToFreedom(start, "SWWN"));
    EXPECT_FALSE(isPathToFreedom(start, "WNNE"));

    /* These paths don't work, since they aren't legal paths. */
    EXPECT_FALSE(isPathToFreedom(start, "WW"));
    EXPECT_FALSE(isPathToFreedom(start, "NN"));
    EXPECT_FALSE(isPathToFreedom(start, "EE"));
    EXPECT_FALSE(isPathToFreedom(start, "SS"));
}

TEST(maze, mine) {
    vector<string> textMaze;

    textMaze.push_back("*-* *-S");
    textMaze.push_back("| | | |");
    textMaze.push_back("*-*-* *");
    textMaze.push_back("| |   |");
    textMaze.push_back("*-* *-*");
    textMaze.push_back("  |    ");
    textMaze.push_back("W-*-*-P");

    Maze m(textMaze);

    MazeCell* start = m.getStart(1, 1);

    EXPECT_TRUE(isPathToFreedom(start, "ENEWSWSSWEEE"));
    EXPECT_TRUE(isPathToFreedom(start, "SSWEEEWWNNENE"));
    EXPECT_TRUE(isPathToFreedom(start, "SSEEWWNNENEWSWSSW"));

    EXPECT_FALSE(isPathToFreedom(start, "SWEN"));
    EXPECT_FALSE(isPathToFreedom(start, "NEES"));
    EXPECT_FALSE(isPathToFreedom(start, "ESSW"));

    EXPECT_FALSE(isPathToFreedom(start, "NNN"));
    EXPECT_FALSE(isPathToFreedom(start, "WWW"));
    EXPECT_FALSE(isPathToFreedom(start, "SSS"));
    EXPECT_FALSE(isPathToFreedom(start, "EEE"));
}

TEST(maze, minev2) {
    vector<string> textMaze;

    textMaze.push_back("W-*-*-*");
    textMaze.push_back("  | | |");
    textMaze.push_back("*-*-*-P");
    textMaze.push_back("  | | |");
    textMaze.push_back("S-*-*-*");
    textMaze.push_back("  | | |");
    textMaze.push_back("*-*-* *");

    Maze m(textMaze);

    MazeCell* start = m.getStart(1, 3);

    EXPECT_TRUE(isPathToFreedom(start, "WWNWESSW"));
    EXPECT_TRUE(isPathToFreedom(start, "WWSWENNW"));
    EXPECT_TRUE(isPathToFreedom(start, "NWWWESSW"));

    EXPECT_FALSE(isPathToFreedom(start, "SWEN"));
    EXPECT_FALSE(isPathToFreedom(start, "NEES"));
    EXPECT_FALSE(isPathToFreedom(start, "ESSW"));

    EXPECT_FALSE(isPathToFreedom(start, "NNN"));
    EXPECT_FALSE(isPathToFreedom(start, "WWW"));
    EXPECT_FALSE(isPathToFreedom(start, "SSS"));
    EXPECT_FALSE(isPathToFreedom(start, "EEE"));
}

// Provided Test: don't allow going through walls
TEST(maze, tryingToGoThroughWalls) {
    vector<string> textMaze;

    textMaze.push_back("* S *");
    textMaze.push_back("     ");
    textMaze.push_back("W * P");
    textMaze.push_back( "     ");
    textMaze.push_back( "* * *");

    Maze m(textMaze);

    MazeCell* start = m.getStart(1, 1);

    EXPECT_FALSE(isPathToFreedom(start, "WNEES"));
    EXPECT_FALSE(isPathToFreedom(start, "NWSEE"));
    EXPECT_FALSE(isPathToFreedom(start, "ENWWS"));
    EXPECT_FALSE(isPathToFreedom(start, "SWNNEES"));
}

// Provided Test: Works when starting on an item
TEST(maze, startOnItem) {
    vector<string> textMaze;

    textMaze.push_back("P-S-W");

    Maze m(textMaze);
    MazeCell* start = m.getStart(0, 0);

    EXPECT_TRUE(isPathToFreedom(start, "EE"));
    start = m.getStart(0, 1);
    EXPECT_TRUE(isPathToFreedom(start, "WEE"));
    start = m.getStart(0, 2);
    EXPECT_TRUE(isPathToFreedom(start, "WW"));

}

// Provided Test: Reports errors if given illegal characters.
TEST(maze, invalidChar) {
    vector<string> textMaze;

    textMaze.push_back("* *-W *");
    textMaze.push_back("| |   |");
    textMaze.push_back("*-* * *");
    textMaze.push_back("  | | |");
    textMaze.push_back("S *-*-*");
    textMaze.push_back("|   | |");
    textMaze.push_back("*-*-* P");

    Maze m(textMaze);
    MazeCell* start = m.getStart(0, 0);

    /* These paths contain characters that aren't even close to permissible. */
    EXPECT_FALSE(isPathToFreedom(start, "Q"));
    EXPECT_FALSE(isPathToFreedom(start, "X"));
    EXPECT_FALSE(isPathToFreedom(start, "!"));
    EXPECT_FALSE(isPathToFreedom(start, "?"));

    EXPECT_FALSE(isPathToFreedom(start, "n"));
    EXPECT_FALSE(isPathToFreedom(start, "s"));
    EXPECT_FALSE(isPathToFreedom(start, "e"));
    EXPECT_FALSE(isPathToFreedom(start, "w"));

    ///* These are tricky - they're legal paths that happen to have an unexpected
    // * character at the end.
    start = m.getStart(2, 2);
    EXPECT_FALSE(isPathToFreedom(start, "ESNWWNNEWSSESWWNQ"));
    EXPECT_FALSE(isPathToFreedom(start, "SWWNSEENWNNEWSSEES!!!"));
    EXPECT_FALSE(isPathToFreedom(start, "WNNEWSSESWWNSEENES??"));

}

// Provided Test: This tests your personalized regular maze to see if you were
// able to escape.
TEST(maze, escapeRegularMaze) {
    Maze m(4, 4);
    MazeCell* start = m.mazeFor(kYourName);
    EXPECT_TRUE(isPathToFreedom(start, kPathOutOfRegularMaze));
}

// Provided Test: This tests your personalized twisty maze to see if you were
// able to escape.
TEST(maze, escapeTwistyMaze) {
    Maze m(4, 4);
    MazeCell* start = m.twistyMazeFor(kYourName);
    EXPECT_TRUE(isPathToFreedom(start, kPathOutOfTwistyMaze));
}

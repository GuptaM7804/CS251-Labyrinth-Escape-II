// Name: Manav Gupta
// University of Illinois Chicago
// Project 4: Labyrinth Escape 2
//

#include <utility>
#include <random>
#include <set>
#include "grid.h"
#include "maze.h"
using namespace std;

/* Change this constant to contain your full first and last name (middle is ok too).
 *
 * WARNING: Once you've set set this constant and started exploring your maze,
 * do NOT edit the value of kYourName. Changing kYourName will change which
 * maze you get back, which might invalidate all your hard work!
 */
const string kYourName = "Manav Gupta";

/* Change these constants to contain the paths out of your mazes. */
const string kPathOutOfRegularMaze = "EESEWNWSSSWNSEEN";
const string kPathOutOfTwistyMaze = "WNWSNESS";

// Check if cell has one of the items needed to complete the maze
void check(MazeCell *start, bool &spellbook, bool &potion, bool &wand) {
    if (start->whatsHere == "Potion") {
        potion = true;
    } else if (start->whatsHere == "Spellbook") {
        spellbook = true;
    } else if (start->whatsHere == "Wand") {
        wand = true;
    }
}

// checks if path is valid or not:
// if wrong character entered
// if it goes to nullptr somewhere...
bool checkifvalid(MazeCell *start, const string& moves) {
    // check if start is not nullptr
    if (start != nullptr) {
    // loop through each character
        for (size_t i = 0; i < moves.length(); i++) {
            // check char for direction
            if (moves[i] == 'N') {
                // move in that direction
                start = start->north;
                // checks if move is invalid
                if (start == nullptr) {
                    return false;
                }
            } else if (moves[i] == 'E') {
                start = start->east;
                if (start == nullptr) {
                    return false;
                }
            } else if (moves[i] == 'S') {
                    start = start->south;
                if (start == nullptr) {
                    return false;
                }
            } else if (moves[i] == 'W') {
                start = start->west;
                if (start == nullptr) {
                    return false;
                }
            } else {
                // if letter is not a direction...
                return false;
            }
        }
    }
    return true;
}

//actual function for the game/winning losing is decided by this
bool isPathToFreedom(MazeCell *start, const string& moves) {
    // initialize all variables to false
    bool spellbook = false;
    bool potion = false;
    bool wand = false;
    // check if start position holds item
    check(start, spellbook, potion, wand);
    if (checkifvalid(start, moves) == false) {
        return false;
    }
    for (size_t i = 0; i < moves.length(); i++) {
        if (moves[i] == 'N') {
            start = start->north;
            check(start, spellbook, potion, wand);
        } else if (moves[i] == 'E') {
            start = start->east;
            check(start, spellbook, potion, wand);
        } else if (moves[i] == 'S') {
                start = start->south;
            check(start, spellbook, potion, wand);
        } else if (moves[i] == 'W') {
            start = start->west;
            check(start, spellbook, potion, wand);
        }
    }
    // checks if all items were found
    if (spellbook == true && potion == true && wand == true) {
        return true;
    }
    return false;
}

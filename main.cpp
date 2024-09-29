/****************************************************************************
 * TOWER OF HANOI PUZZLE SOLVER ******************************************** 

    Based on the famous puzzle Tower of Hanoi (https://en.wikipedia.org/wiki/Tower_of_Hanoi):
        - A player has 3 pegs A, B and C.
        - Peg A initially has n disks sorted in a stack in increasing size from top to bottom.
        - The goal is to move all disks from peg A to peg C, with the following rules:
            - Only one disk can be moved at a time.
            - Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
            - No disk may be placed on top of a disk that is smaller than it.

    The solution is found recursively by noticing:
        - To move k disks from one peg to another, we first need to move (k-1) disks to the spare peg. 
        - Once the (k-1) disks have been moved to the spare, move disk k to the empty target peg, and proceed to move the remaining (k-1) from the spare to the target.
        - The trivial base case is for k = 1, where the disk is moved directly to the target.
*/

#include <iostream>
#include <list>
#include "TowerHanoi.hpp"

int main(int argc, char* argv[])
{
    int n_disks;

    std::cout << "Tower of Hanoi Solver!\n\n" << "How many disks do you want to solve for? ";
    std::cin >> n_disks;
    std::cout << "\n";

    while (n_disks <= 0)
    {
        std::cout << "Please provide a positive integer for the number of disks: ";
        std::cin >> n_disks;
        std::cout << "\n";
    }
    
    TowerHanoi tower(n_disks);

    solve(tower);

    std::cout << "\nThe minimal number of moves is 2^n-1 for n disks!\n\n";

    return EXIT_SUCCESS;
}
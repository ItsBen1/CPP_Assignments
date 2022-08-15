// skynetHkArial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Author: Donald Christensen
    Email: donchris@uat.edu
    Assignment Name: Skynet - HK - Arial
*/

#include <stdio.h> // Used for std I/O.
#include <stdlib.h> // Used for calloc (allocates memory for an array).
#include <iostream> // Used for cin at the end for endChoice. 
#include <ctime> // Used for getting the system time for random numbers.

#define searchGrid 64  // Creates the grid being used that is 64 spaces, and is 8x8

int mySearch(int* ary, int search, int death) { // This is used for the ary, search, and the led variables that are used later for outputting where the enemy was found

    int rat = -1; // Definition for if the enemy was found or not

    int searchHighNum = 63; // Definition for the highest search variable, 63.
    int searchLowNum = 0; // Definition for the lowest search variable, 0.
    int locationPrediction = ((searchHighNum - searchLowNum) / 2) + searchLowNum; // Defines the prediction by takeing the difference of the high and low varriables and divides them by 2; finally  adds the low variable to that.

    // Below is the search pattern, it will go through the spaces until it finds the enemy.
    for (int i = 0; i < death; ++i) {
        if (ary[i] == search) {
            return i;
        }
    }
    return rat;
}

int main()
{
    char endChoice; // Defines the end choice for the player to be able to restart or quit the simulation 
    int x, y; // Defines x and y for coordinate readouts.
    srand(time(0)); // Generates time for the random number

gameStart:
    int randNum = rand() % 64; // Used for creating the random number and then finding the modules
    printf("\n------------------------------------\n\n");
    printf("Welcome to Skynet, the HK-Aerial Division.\n\n");
    printf("The simulation will start shortly.\n");
    printf("Once you press any button, the enemy will randomly hide and the Aerial Drone will begin to search for them.\n");
    printf("\n------------------------------------\n");
    system("pause"); // Pause to make sure the player is ready to play, similar to press start in a game

    //calloc routine allocates n amount of items of size s, and sets each
    //item to zero

    int* ary = (int*)calloc(searchGrid, sizeof(int)); // Defines the array
    ary[randNum] = 1; // Assigns the enemy location to a one dimensional space using the random number

    int _1dPosition = mySearch(ary, 1, searchGrid);
    x = _1dPosition / 8;
    y = _1dPosition % 8;

    if (_1dPosition != -1) {
        printf("\nThe enemy was at %d in 1 Dimension\n", mySearch(ary, 1, searchGrid)); // Prints out where the enemy was located
        printf("or at %d, %d in two Dimensions.", x, y); // Pints out where the enemy is at with the x and y coordinate
    }
    else {
        printf("\nThe enemy was not found, outside of Range\n");
    }

endChoice:
    printf("\nTo restart the simulation type R, to leave the simulation type Q.\n\n");
    std::cin >> endChoice;
    if (endChoice == 'r' || endChoice == 'R') {
        goto gameStart;
    }
    if (endChoice == 'q' || endChoice == 'Q') {
        return 0;
    }
    else {
        goto endChoice;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
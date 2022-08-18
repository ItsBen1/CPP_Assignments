// simulationMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Author: Virgilian Lacy
    Email: virlacy@uat.edu
    Assignment Name: Simulation Map
*/

//These headers bring in premade code from other files.
#include <iostream>
#include <string>
#include <stdio.h>

//Simulation Variables
std::string endChoice = "";

int main() {
mapStart: // Anchor point for restarting the game.
    printf("\n------------------------------------\n\n");
    printf("Welcome to my Simulaton Map - The House\n\n");
    printf("Here is a link to the original picture I used: https://www.artstation.com/artwork/dOR361\n");
    printf("The purpose of this simulation is to accurately recreate an image.\n");
    printf("The simulation below is a replication of the image that is linked above.\n");
    printf("The viewing field is 50 units by 50 units.\n");
    printf("Your job is to spot the above image in the integers below. Good luck!\n\n");
    printf("------------------------------------\n");
    system("pause"); // Pause to make sure the player is ready to play.
    printf("\n");
    printf("Here is a legend for you to use to find the image:\n\n"); // This is for outputting the legend into the console for the player to view.
    printf("0 = Trees/Bushes, non-passible\n");
    printf("1 = House/Bricks, non-passible\n");
    printf("2 = Path, passible\n");
    printf("3 = Grass, passible\n\n");
    system("pause"); // Pause to make sure the player has read the legend and understands what they are looking for in the image.

    printf("\n");
    for (int k = 0; k < 1; k++) { // This defines how man times the map repeats being printed out. Currently I have it being printed out once. 

        for (int i = 0; i < 1; i++) { // This piece defines the top of the map. In this state it is being defined as a row of trees.
            for (int j = 0; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 1; i < 20; i++) { // This defines the open space above the top of the house. So in terms of layout this would be the field behind the house.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 20; i < 21; i++) { // This defines the start of the house roof.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 25; j++) {
                printf("%d", 3);
            }
            for (int j = 25; j < 27; j++) {
                printf("%d", 1);
            }
            for (int j = 27; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 21; i < 22; i++) { // This defines the roof of the house. This time it is the second line from the top of the roof. 
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 24; j++) {
                printf("%d", 3);
            }
            for (int j = 24; j < 28; j++) {
                printf("%d", 1);
            }
            for (int j = 28; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 22; i < 23; i++) { // This defines the roof of the house. This time it is the third line from the top of the roof. 
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 22; j++) {
                printf("%d", 3);
            }
            for (int j = 22; j < 30; j++) {
                printf("%d", 1);
            }
            for (int j = 30; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 23; i < 24; i++) { // This defines the roof of the house. This time it is the last line of the roof. 
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 20; j++) {
                printf("%d", 3);
            }
            for (int j = 20; j < 32; j++) {
                printf("%d", 1);
            }
            for (int j = 32; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 24; i < 28; i++) { // This defines the walls of the house. This walls of the house are 4 units high.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 22; j++) {
                printf("%d", 3);
            }
            for (int j = 22; j < 30; j++) {
                printf("%d", 1);
            }
            for (int j = 30; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 28; i < 36; i++) { // This defines the path coming from the house door. The path is two units wide and moves towards the bottom of the map.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 25; j++) {
                printf("%d", 3);
            }
            for (int j = 25; j < 27; j++) {
                printf("%d", 2);
            }
            for (int j = 27; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 36; i < 37; i++) { // This defines the path coming from the house. This is where the path moves towards the left.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 17; j++) {
                printf("%d", 3);
            }
            for (int j = 17; j < 27; j++) {
                printf("%d", 2);
            }
            for (int j = 27; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 37; i < 38; i++) { /// This defines the path coming from the house. This is where the path moves towards the left.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 17; j++) {
                printf("%d", 3);
            }
            for (int j = 17; j < 27; j++) {
                printf("%d", 2);
            }
            for (int j = 27; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        for (int i = 38; i < 50; i++) { /// This defines the path coming from the house. This is where the path comes from the left down to the bottom of the map.
            for (int j = 0; j < 1; j++) {
                printf("%d", 0);
            }
            for (int j = 1; j < 17; j++) {
                printf("%d", 3);
            }
            for (int j = 17; j < 19; j++) {
                printf("%d", 2);
            }
            for (int j = 19; j < 49; j++) {
                printf("%d", 3);
            }
            for (int j = 49; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        /*
        This code was for closing off the bottom of the map with trees. I instead made it so the bottom was open excluding a part for the path.
        for (int i = 49; i < 50; i++) {
            for (int j = 0; j < 50; j++) {
                printf("%d", 0);
            }
            printf("\n");
        }
        */
        printf("\nIf you've found the image, press a key to continue.\n");
        system("pause");
        printf("\n\n\n");
    }
    // Ending of simulation.
    printf("Thank you for viewing my simulation!\n");
endChoice:
    printf("\nType restart to restart the simulation. Type quit to quit.\n\n");
    std::cin >> endChoice;
    if (endChoice == "restart" || endChoice == "Restart") { // Player won. If they type restart, game restarts.
        goto mapStart;
    }
    if (endChoice == "quit" || endChoice == "Quit") { //  If they type quit, game closes out.
        return 0;
    }
    else {
        printf("\nSorry, your input wasn't understood. Please try again\n");
        goto endChoice;
    }
}
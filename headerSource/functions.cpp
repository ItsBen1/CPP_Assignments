#include <iostream>
#include <string>
#include "functions.h"

// Function for "speed" measurement
int currSpeed(int x) {
    int speed = 100 + x;
    return speed;
}

// Void functions for text readout

void opening() {
    cout << "\n------------------------------------\n\n";
    cout << "Welcome to Night Racer by Virgilian Lacy\n\n";
    cout << "This game will change depending on your choices throughout.\n";
    cout << "You will start at 100% speed. The actions you make will either speed you up or slow you down.\n";
    cout << "Have fun and good luck!\n\n";
    cout << "------------------------------------";
}

void raceStart() {
    cout << "\nWelcome all to todays great race!\n";
    cout << "We have some tough challengers tonight, so lets not waste any time!\n";
    cout << "On the left, we have " << racer << ", next to him we have " << rival << ", followed by " << rival2 << " lastly we have the current Champion! " << champion << " whom hopes to remain the champ!\n";
    cout << "Todays race will put each of the racer's skills to the test. All racers will compete head-to-head in a race from the North end of town, through the beach ending on the West side of town.\n";
    cout << "Without further ado, lets burn some rubber and start racing!\n\n";
}

void bikeLanesceen() {
    cout << "\nAfter some time racing through the North side of town, you pass " << rival2 << ", and can see the other drivers.\n";
    cout << "But as soon as you are neck-and-neck with " << rival << ", they drive down the bike lane forcing all the bikers into your path.\n";
    cout << "You see a shortcut down an alley, but its risky as you cannot see where it will take you.\n";
    cout << "\nDo you take the shortcut and try and speed up, or do you drive straight through the bikers?\n";
}

void crowdStreetScene() {
    cout << "\nApproaching the beach, roads seem to be busier than expected. " << rival << " takes a sharp right and turns down an alley way to get around all of the other cars and street vendors.\n";
    cout << "You, however, do not see any other alley ways to drive down and have two options to move forward, but make them quick as you still have ground to make up!\n";
    cout << "You can either drive through the crowded streets and hope to make it out without crashing, or you can take the alley way and hope it doesn't lead you astray.\n";
    cout << "\nWhich path do you choose?\n";
}

void sandyBeachScene() {
    cout << "\nYou are nearing the Beach - and with that, the finish line.\n";
    cout << "You see " << rival << ", and " << champion << " take to the sands of the beach in order to get to the West side of town faster.\n";
    cout << "As you race up behind them, a group of distracted surfers run across the sand infront of you, to avoid driving into them you are forced to slow down.\n";
    cout << "As you watch " << rival << ", and " << champion << " drive off, nearing closer to the finish line every second, you feel the pressure building up.\n\n";
    cout << "You shift your car into first and begin to try to catch back up.\n";
    cout << "It looks like your only chance to make it to the West end in time is to drive along the coast.\n";
    cout << "You need to make a decision now or you won't have enough time to make up all of your lost speed.\n";
    cout << "\nDo you decide to take the coast and risk everything to get the title of Champion, or do you give up now and drive back home, forfeiting your chance at the title of Driving King?\n";
}

void coast() {
    cout << "\nYou turn your car towards the water. Crossing your fingers that you'll make it. You put your foot on the gas and gun it towards the west end of the beach.\n";
    cout << "As your car soars through the shallow water, you feel weightless as you and your car flies across the beach.\n";
    cout << "You feel your stomach churn as your car flies the ground, sand spewing behind my wheels. As you aproach the end of the beach you see an opertunity to win.\n";
    cout << "You made it across the beach in one piece! You waste no time celebrating and continue speeding onto the street towards the finish line.\n";
    cout << "The jump back on the the main street gave you a big boost in speed! You now have " << currSpeed(50) << "% speed!\n";
}

// Functions for winning and losing endings.
string endingWin() {
    cout << "\nWith enough speed, you passed " << rival << ", and end up neck and neck with " << champion << " .\n";
    cout << "\nAs you pass " << rival << " you approach the last turn with hi hopes making it through the finish line first!You gain the title as The Steets Champion!";
    cout << "\nYou Won! Type restart to restart the game and play again to see different outcomes. Type quit to quit playing.\n\n";
    cin >> winChoice;
    if (winChoice == "restart" || winChoice == "Restart") {
        playGame();
    }
    if (winChoice == "quit" || winChoice == "Quit") {
        return winChoice;
    }
    else {
        // Needed return value at the end of all non-void functions as it was throwing a warning about control reaches the end of a non-void function. Does not impact gameplay.
        return winChoice;
    }
}

string endingLost() {
    cout << "\nYou lost! Type restart to restart the game and get another chance to keep your title as Champion! Type quit to quit playing.\n\n";
    cin >> lostChoice;
    if (lostChoice == "restart" || lostChoice == "Restart") {
        playGame();
    }
    if (lostChoice == "quit" || lostChoice == "Quit") {
        return lostChoice;
    }
    else {
        // Needed return value at the end of all non-void functions as it was throwing a warning about control reaches the end of a non-void function. Does not impact gameplay.
        return lostChoice;
    }
}

// Actual game function
string playGame() {
    opening();

    // Getting racer and rival names.
    cout << "\n\nPlease enter the following information to get started on your racing adventure!\n";
    cout << "Enter your Racer's Name: ";
    cin >> racer;
    cout << "Enter the first Rival's Name: ";
    cin >> rival;
    cout << "Enter your seconde Rival's Name: ";
    cin >> rival2;
    cout << "Enter the name of the current champion";
    cin >> champion;

    raceStart();
    (void)getchar();

    // First game challenge. Starting the engine.
    start = "";
    cout << "Racers, start your engines!\n";
    cout << "\nTo ready your engine, type start.\n\n";
    // If the player types "start" or "Start", then the game will continue. If they do not, then it will loop until they do so. 
    while (start != "start") {
        cin >> start;
        if (start == "start" || start == "Start") {
            cout << "\nGood work!\n";
            break;
        }
        else {
            cout << "\nNot quite. Try typing start, again.\n\n";
        }
    }

    // Second game challenge. Engine stall and restart. Possible losing ending.
    restart = "";
    cout << "\n3...2...1...GO!\n";
    cout << "The 4 racers release the clutch and slam on the gas; their cars shoot out from the starting line. All is going well until... your car stalls!\n\n";
    cout << "Quick! Type restart to restart your engine!\n\n";
    // If the player types "restart" or "Restart", then the game will continue and they only recieve a small penalty. Otherwise, if they do not type it correctly, they lose a large amount of speed.
    cin >> restart;
    if (restart == "restart" || restart == "Restart") {
        cout << "\nGreat work! We can get you back to racing. You only lost 10% speed. You now have " << currSpeed(-10) << "% speed.\n";
    }
    else {
        cout << "\nOh no! You didn't type start. You were able to start your car, but you lost 25% of your speed! You now have " << currSpeed(-25) << "% speed.\n";
    }

    // Third game challenge. Make a decision where you want to go. Possible losing ending.
    bikeLane = "";
    bikeLanesceen();
    cout << "Type alley to take the alley. Type straight to drive through the bikers.\n\n";
    // If the player types "shortcut" or "Shortcut", they go down one path. If they type "straight" or "Straight", then they go down the other path. If they do not type either, then they lose.
    while (bikeLane != "alley" || bikeLane != "straight") {
        cin >> bikeLane;
        if (bikeLane == "alley" || bikeLane == "Alley") {
            cout << "\nYou took the shortcut. Down the alley you drove and to your surprise, it sped you up! You come out just in front of " << rival2 << ". You now have " << currSpeed(10) << "% speed.\n";
            break;
        }
        if (bikeLane == "straight" || bikeLane == "Straight") {
            cout << "\nYou went straight through the bikers. You wind up slightly behind " << rival2 << ". You didn't lose any speed, but you didn't gain any either. You now have " << currSpeed(0) << "% speed.\n";
            break;
        }
        else {
            cout << "\nIt looks like you didn't go anywhere. You wound up sitting in your car doing nothing. You forfiet your chance to become Champion; and leave to get a burrito. " << rival << ".\n";
            endingLost();
            return lostChoice;
        }
    }

    // Fourth game challenge. Make a decision where you want to go. Possible losing ending.
    crowdedStreet = "";
    crowdedStreetScene();
    cout << "Type street to take the crowded streets or type beach to turn towards the beach.\n\n"; \
        // If the player types "street" or "Street", they go down one path. If they type "highway" or "Highway", then they go down the other path. If they do not type either, then they lose.
        while (crowdedStreet != "street" || crowdedStreet != "beach") {
            cin >> crowdedStreet;
            if (crowdedStreet == "street" || crowdedStreet == "Street") {
                cout << "\nYou decide to take your chances on the crowded streets. You weave your way in and out of drivers and street vendors but luckily did not crash into any of them.\n";
                cout << "Because you took your time to not crash into any of the street vendors, you lost a lot of speed. You now have " << currSpeed(-35) << "% speed.\n";
                break;
            }
            if (crowdedStreet == "beach" || crowdedStreet == "Beach") {
                cout << "\nYou drive straight through the empty parking lot and onto the beach. You aren't getting slowed down by anyone and by only luck you see " << rival << " knowing you are heading towards the finish.\n";
                cout << "You've gained some speed and should now right behind " << rival << ". You now have " << currSpeed(15) << "% speed.\n";
                break;
            }
            else {
                cout << "\nIt looks like you didn't go anywhere. You wound up sitting in your car doing nothing. You forfiet your chance to become champion and leave to get a burrito " << rival << ".\n";
                endingLost();
                return lostChoice;
            }
        }

    // Fourth game challenge. Make a decision where you want to go. Possible losing ending.
    sandyBeach = "";
    sandyBeachScene();
    cout << "Type coast to drive toards the coast and have a chance to win the race or type home to drive back home, winning nothing.\n\n";
    // If the player types "coast" or "Coast", then they continue and have a chance to win. If they type "home" or "Home", they lose. If they do not type either, it will loop until they type one or the other.
    while (sandyBeach != "coast" || sandyBeach != "home") {
        cin >> sandyBeach;
        if (sandyBeach == "coast" || sandyBeach == "Coast") {
            coast();
            break;
        }
        if (sandyBeach == "home" || sandyBeach == "Home") {
            cout << "\nYou decide to cut your losses and turn towards home. Defeated, you know you'll be able to try again next time; with the embarrasement of loss you leave to find a burrito knowing you will live to drive another day.\n";
            endingLost();
            return lostChoice;
        }
        else {
            cout << "\nYou didn't make a decision, try again.\n\n";
        }
    }

    // Finishing line challenge. Player needs to speed up in order to pass rival.
    speedUp = "";
    cout << "\nDriving along the coast of the beach seems to have payed off  neck-and-neck with " << champion << ".\n";
    cout << "You both see the finish line in sight. It's less than a mile away. If you want to win, you need to speed up!\n";
    cout << "\nType speed to speed up!\n\n";
    // If the player types "speed" or "Speed", then they advance. If they don't type that, then it loops.
    while (speedUp != "speed") {
        cin >> speedUp;
        if (speedUp == "speed" || speedUp == "Speed") {
            cout << "\nGreat, keep speeding up!";
            break;
        }
        else {
            cout << "\nOh no, you missed speeding up. Try again.\n\n";
        }
    }

    // Reset speedUp variable to empty as it was causing issues with reusing the variable.
    speedUp = currSpeedUp;

    // Finishing line challenge. Player needs to speed up in order to pass rival.
    cout << "\nType speed to speed up!\n\n";
    // If the player types "speed" or "Speed", then they advance. If they don't type that, then it loops.
    while (speedUp != "speed") {
        cin >> speedUp;
        if (speedUp == "speed" || speedUp == "Speed") {
            cout << "\nGood job, keep speeding up! You're almost there.";
            break;
        }
        else {
            cout << "\nOh no, you missed speeding up. Try again.\n\n";
        }
    }

    // Reset speedUp variable to empty as it was causing issues with reusing the variable.
    speedUp = currSpeedUp;

    // Finishing line challenge. Player needs to speed up in order to pass rival. Possible winning and losing endings.
    cout << "\nOne last time, type speed to speed up!\n\n";
    // If the player types "speed" or "Speed", then they win. If they don't type that, then they lose.
    while (speedUp != "speed") {
        cin >> speedUp;
        if (speedUp == "speed" || speedUp == "Speed") {
            cout << "\nExcellent! You should be past " << champion << " by now!\n";
            endingWin();
            return winChoice;
        }
        else {
            cout << "\nOh no, you missed speeding up!\n";
            cout << champion << " is still ahead of you. They reached the finish line before you and claimed the title as The Streets Champion.\n";
            endingLost();
            return lostChoice;
        }
    }
    // Needed return value at the end of all non-void functions as it was throwing a warning about control reaches the end of a non-void function. Does not impact gameplay.
    return playGame();
}
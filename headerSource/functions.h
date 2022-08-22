#pragma once
#include <string>

using namespace std;

// External Variables Defined
extern string start;
extern string restart;
extern string bikeLane;
extern string crowdedStreet;
extern string sandyBeach;
extern string racer;
extern string rival;
extern string rival2;
extern string champion;
extern string speedUp;
extern string currSpeedUp;
extern string winChoice;
extern string lostChoice;

// Function Prototypes Defined
int currSpeed(int x);
string playGame();
void opening();
void raceStart();
void bikeLanesceen();
void crowdedStreetScene();
void sandyBeachScene();
void coast();
string endingWin();
string endingLost();
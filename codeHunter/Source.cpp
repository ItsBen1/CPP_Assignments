/*
Author: Virgilian Lacy
Email: virlacy@uat.edu
Assignment: Learning new C++ Debugging skills
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    //this is the string of text the user types in to be analyzed
    string textToAnalyze;

    //foo not used
    int foo = 0;

    //used as a counter to hold the count of vowels in texttoanalyze
    int vowels = 0;

    //used as a counter to hold the count of consonants in texttoanalyze
    int consonants = 0;

    //used as a counter to hold the count of digits in texttoanalyze
    int digits = 0;

    //used as a counter to hold the count of spaces in texttoanalyze
    int spaces = 0;

    //used as a counter to hold the length of texttoanalyze
    int lengthOfStringSubmittedForAnalysis = 0;

    //used as a counter to hold the count of unknownCharacters in texttoanalyze
    int unknownCharacters = 0;

    //used as a counter to hold the count of vowels in texttoanalyze
    int checkSum = 0;

    //not used
    int bar = 0;

    //title for user
    cout << "Welcome to the CIA code Hunter Program!" << endl;

    //directions
    cout << "Please type in text to analyze: " << endl;

    //this would collect a frase from the user to analyze
    getline(cin, textToAnalyze);
    
    //this starts the analysis of each character
    //it loops once per character
    //remember a string is just an aray of character
    int lengthOfText = textToAnalyze.length();

    for (int i = 0; i < lengthOfText; i++)
    {
        char currentCharacter = textToAnalyze[i];

        //checking current carectors for vowels
        if (currentCharacter == 'a' || currentCharacter == 'e' || currentCharacter == 'i' ||
            currentCharacter == 'o' || currentCharacter == 'u' || currentCharacter == 'A' ||
            currentCharacter == 'E' || currentCharacter == 'I' || currentCharacter == 'O' ||
            currentCharacter == 'U')
        {
            //wass -- insted of ++
            ++vowels;
        }
        //checking current carectors for consonants
        else if ((currentCharacter >= 'a' && currentCharacter <= 'z') || (currentCharacter >= 'A' && currentCharacter <= 'Z'))
        {
            // was comented out
            consonants = consonants + 1;
        }
        //checking current carectors for digits
        else if (currentCharacter >= '0' && currentCharacter <= '9')
        {
            digits++;
        }
        //checking current carectors for spaces
        else if (currentCharacter == ' ')
        {
            ++spaces;
        }
        //checking current carectors for unknownCharacters
        else
        {
            ++unknownCharacters;
        }
    }

    lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
    
    //adding up totle spaces used
    checkSum = unknownCharacters + vowels + consonants + digits + spaces;

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;
    cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
    cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
    cout << "Checksum: " << checkSum << endl;

    if (checkSum == lengthOfStringSubmittedForAnalysis)
    {
        cout << "This program self checking has found this Analysis to be valid." << endl;
    }
    else
    {
        cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
    }

    //Pauses the program to prevent instant closure upon completion
    system("pause");

    // Ends the program
    return 0;

}
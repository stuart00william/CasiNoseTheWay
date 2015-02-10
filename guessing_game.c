//
//  guessing_game.c
//  CasiNoseTheWay
//
//  Created by Stuart Healey on 2/10/15.
//  Copyright (c) 2015 Stuart Healey. All rights reserved.
//

#include "guessing_game.h"

void guessingWelcomeScreen(void) {
    /*
     This function prints a generic welcome screen
     with directions
     */
    printf("***********************************************\n");
    printf("** Welcome to a game of chance               **\n");
    printf("**                                           **\n");
    printf("** You have ten attempts to guess the        **\n");
    printf("** number I am thinking of. Use the key      **\n");
    printf("** below to calibrate your guesses. Oh,      **\n");
    printf("** the number I am thinking of is between    **\n");
    printf("** 1 and 100, inclusively. Good Luck !       **\n");
    printf("**                                           **\n");
    printf("** - Within 5 : Hot                          **\n");
    printf("** - Within 12 : Warm                        **\n");
    printf("** - Within 30 : Cold                        **\n");
    printf("** - Outside 30 : Frigid                     **\n");
    printf("***********************************************\n\n");
    
}

int numberGuesser(void) {
    /*
     This function controls the number guessing game.
     The if statements below are pretty nasty to look at,
     mainly because of the length of variable names.
     */
    int usersGuess; // init integers to hold guesses
    int nrOfGuesses; // number of guesses
    bool guessedCorrectly = false; // and a boolean to check later
    int correctAnswer=CORRECT_ANSWER;
    for (nrOfGuesses = 1; nrOfGuesses <= 10; nrOfGuesses++) { // loop through 10 times
        printf("Guess #%d: ", nrOfGuesses);
        scanf("%d", &usersGuess); // gather guesses
        if (usersGuess == correctAnswer) { // if the guess is correct
            printf("%d is correct!\n",usersGuess);
            printf("It only took you %d tries!\n", nrOfGuesses);// congratulate them
            guessedCorrectly = true; // set guessed correctly to true
            break; // and break (sorry, purists)
        }
        if ((usersGuess >= (correctAnswer - HOT)) && // if you're within 5
            (usersGuess <= (correctAnswer + HOT))){
            printf("Your guess is Hot!\n"); // print hot
        }
        else if ((usersGuess >= (correctAnswer - WARM)) && // else if within 12
                 (usersGuess <= (correctAnswer + WARM))){
            printf("Your guess is Warm!\n"); // print warm
        }
        else if ((usersGuess >= (correctAnswer - COLD)) && // else if within 30
                 (usersGuess <= (correctAnswer + COLD))){
            printf("Your guess is Cold.\n"); // print cold
        }
        else { // otherwise
            printf("Your guess is Frigid.\n"); // print frigid
        }
    }
    if (!guessedCorrectly) { // if they exhausted their ten tries
        printf("Everyone has their strengths...\n");
        printf("The correct answer was %d\n",correctAnswer);
        printf("Sorry about your luck.\n"); // send them on their way
        return 0;
    }
    return 1;
}

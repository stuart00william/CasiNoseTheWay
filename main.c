//
//  main.c
//  CasiNoseTheWay
//
//  Created by Stuart Healey on 2/10/15.
//  Copyright (c) 2015 Stuart Healey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "player.h"
#include "guessing_game.h"


int main(int argc, const char * argv[]) {

    int choice=0;
    PLAYER currentPlayer=createNewPlayer();

    //srand(time(NULL));
    
    while (choice != 5) {
        printf("\n\n");
        printf("-= Casino Knows The Way =-\n");
        printf("-*#^^^^^^^^^^^^^^^^^^^^#*-\n");
        printf("1 - Display Player Data\n");
        printf("2 - Reset Player\n");
        printf("3 - Guessing Game\n");
        printf("4 - \n");
        printf("5 - Exit\n\n");

        printf("[UserName: %s]\n",currentPlayer.userName);
        printf("[Chips   : %d]\n\n",currentPlayer.chips);
        
        printf("Selection: ");
        scanf("%d",&choice);
        printf("\n\n");
               
        if ((choice < 1) || (choice > 5)) {
            printf("Bad Selection");
        }
        else if (choice == 1) {
            displayUserData(currentPlayer);
        }
        else if (choice == 2) {
            currentPlayer=resetPlayer(currentPlayer);
        }
        else if (choice == 3) {
            guessingWelcomeScreen();
            if (numberGuesser())
                currentPlayer.record[0]++;
            else
                currentPlayer.record[1]++;
        }
        else if (choice == 4) {
            displayUserData(currentPlayer);
        }
    }
    return 0;
}

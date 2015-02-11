//
//  craps.c
//  CasiNoseTheWay
//
//  Created by Stuart H on 2/10/15.
//  Copyright (c) 2015 Stuart H. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "craps.h"
#include "player.h"



void crapsWelcome(void) {
    system("cls");
    printf("***********************************************\n");
    printf("** Welcome to a game of craps                **\n");
    printf("**                                           **\n");
    printf("** Come out loss: 2, 3, 12 \"CRAPS!\"          **\n");
    printf("** Come out win: 7 or 11 \"NATURAL!\"          **\n");
    printf("**                                           **\n");
    printf("** Point loss: 7                             **\n");
    printf("** Point win: the point                      **\n");
    printf("**                                           **\n");
    printf("** Min \"Pass Line\" bet: 5                    **\n");
    printf("** Max \"Behind Line\" bet: 5X pass line bet   **\n");
    printf("**                                           **\n");
    printf("** Good Luck!                                **\n");
    printf("***********************************************\n\n");
}

int crapsGame(PLAYER currentPlayer) {
    int comeOutBet=0;
    int dice1=1;
    int dice2=1;
    bool validRoll1=false;
    bool validRoll2=false;
    bool playAgain=true;
    int answer;
    srand(10);
        while (playAgain) {


        printf("What is your Come out bet: ");
        scanf("%d",&comeOutBet);
        printf("Ready to roll?\n");
        system("PAUSE");
        while (validRoll1!=true) {
            dice1=rand()%10;
            if (dice1 >0 && dice1<7) validRoll1=true;
        }
        while (validRoll2!=true) {
            dice2=rand()%10;
            if (dice2 >0 && dice2<7) validRoll2=true;
        }
        int roll=dice1+dice2;
        printf("You rolled a %d and a %d\n",dice1,dice2);
        if (roll==7 || roll==11) {
            printf("%d...Natural!\n",dice1+dice2);
            currentPlayer.chips+=comeOutBet;
            currentPlayer.record[0]++;
        }
        else if (roll==2 || roll==3 || roll==12) {
            printf("%d...Craps!\n",dice1+dice2);
            currentPlayer.chips-=comeOutBet;
            currentPlayer.record[1]++;
        }
        else
            currentPlayer.record[0]++;

        printf("Play again? ");
        scanf("%d",&answer);
        if (!answer) playAgain=false;

        }
    return 0;

}

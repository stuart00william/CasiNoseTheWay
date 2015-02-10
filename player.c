//
//  player.c
//  CasiNoseTheWay
//
//  Created by Stuart Healey on 2/10/15.
//  Copyright (c) 2015 Stuart Healey. All rights reserved.
//

#include <string.h>
#include "player.h"

PLAYER createNewPlayer() {
    PLAYER newPlayer;
    printf("Enter desired username: ");
    scanf("%s",newPlayer.userName);
    newPlayer.chips=100;
    newPlayer.record[0]=0;
    newPlayer.record[1]=0;
    

    return newPlayer;
}

void deleteExistingPlayer(PLAYER player) {
    memset(&player,0,sizeof(PLAYER));
}

void displayUserData(PLAYER player) {
    printf("Username : %s\n",player.userName);
    printf("Chips    : %d\n",player.chips);
    printf("Wins     : %d\n",player.record[0]);
    printf("Losses   : %d\n",player.record[1]);
}

PLAYER resetPlayer(PLAYER player) {
    player.chips=100;
    player.record[0]=0;
    player.record[1]=0;
    return player;
}


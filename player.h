//
//  player.h
//  CasiNoseTheWay
//
//  Created by Stuart Healey on 2/10/15.
//  Copyright (c) 2015 Stuart Healey. All rights reserved.
//

#ifndef __CasiNoseTheWay__player__
#define __CasiNoseTheWay__player__


#include <stdio.h>

typedef struct player {
    int chips;
    int record[2]; // record[0]=wins,record[1]=losses //
    char userName[24];
} PLAYER;

// Function prototypes //

PLAYER createNewPlayer();
void deleteExistingPlayer(PLAYER player);
void displayUserData(PLAYER player);
PLAYER resetPlayer(PLAYER player);





#endif /* defined(__CasiNoseTheWay__player__) */

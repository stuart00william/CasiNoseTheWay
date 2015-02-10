//
//  guessing_game.h
//  CasiNoseTheWay
//
//  Created by Stuart Healey on 2/10/15.
//  Copyright (c) 2015 Stuart Healey. All rights reserved.
//

#ifndef __CasiNoseTheWay__guessing_game__
#define __CasiNoseTheWay__guessing_game__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CORRECT_ANSWER rand()/1000
#define HOT 5
#define WARM 12
#define COLD 30

void guessingWelcomeScreen(void);
int numberGuesser(void);


#endif /* defined(__CasiNoseTheWay__guessing_game__) */

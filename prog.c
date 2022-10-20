// PROJECT M (Beta Ver.) by Sungmin Cho & Jeremy Lau
// 10. 19. 2022

/*
* Project M, or "Man On!" for the release title, is a text-based soccer
* management game, where the user is able to play as the manager of a soccer team.
* Some of the main features of beta version of the game include:
*   - Fully Customizable Team
*   - Simulated Matches
*   - Player Auction Market
*   - Future Event Calendar
*
* To be considered as Version 1.0 of the project, we aim to include 
* the following extended features:
*   - Random Events (weather, injuries)
*   - More Teams, Leagues and Players
*   - More Tactics
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "prog.h"


// Prints title page; delays for a second; 
// 
void title_page(){
    printf("_________________________________________________________\n\n\n");

    Sleep(800);

    printf("\n\n                        Man On!\n\n");
    
    Sleep(1000);
    
    printf("\n");


    printf("                        CsqrV \n\n\n\n");

    Sleep(1000);

    printf("_________________________________________________________\n\n");

    Sleep(800);
}


// Prints main menu of the game

void main_page(){
    printf("<MAIN PAGE>\n");
    printf("You can press the following buttons to navigate around:\n");
    printf("T - Team\nS - Schedule\nM - Market\nQ - Quit\n\n");
}

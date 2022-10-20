#include <stdio.h>
#include "prog.h"


/* 
* This is the main code for the Project M.
* It calls the prog.c, which contians sets of functions. 
*/

int main(){
    char action;
    //int asset = 0;          // player starting money

    title_page();           // title page

    main_page();            // main menu    
    printf("What would you like to do? ");
    scanf("%c", &action);

    // Quits
    if (action == 'q' || action == 'Q') return 0;      


    return 0;
}
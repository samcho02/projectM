#include <stdio.h>
#include "prog.h"


/* 
* This is the main code for the Project M.
* It calls the prog.c, which contians sets of functions. 
*/

int main(){
    char action;
    int check = 1;            // while check is true, the game runs
    //int asset = 0;          // player starting money

    title_page();             // title page

    main_page();              // main menu    
    
    while (check){
        printf("What would you like to do? ");
        scanf("%c", &action);

        if (action == 'q' || action == 'Q') check = 0;


    }

    return 0;
}

// navigate function 
// checks what screen user is on, asks for user's action
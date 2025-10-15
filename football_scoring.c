#include <stdio.h>
#include <stdbool.h>

void football_scoring(){
    int score;
    bool done = false;

    while (done == false){

        printf("Enter the NFL score (Enter 1 to stop): ");
        scanf("%d", &score);

        if (score == 1){
            done == true;
        }
        
        else if (score < 1){
            printf("Invalid entry. Please try again.\n");
        }
        else{
            
        }
    }

}
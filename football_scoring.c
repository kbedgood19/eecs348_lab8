
#include "football_scoring.h"
#include <stdio.h>
#include <stdbool.h>

void football_scoring(){
    int score;
    bool done = false;

    while (done == false){

        printf("Enter the NFL score (Enter 1 to stop): ");
        if (scanf("%d", &score) != 1){
            printf("Invalid entry. Please try again.\n");
            while (getchar() != '\n');
            continue;
        }

        if (score == 1){
            printf("Thank you\n");
            done = true;
        }
        
        else if (score < 1){
            printf("Invalid entry. Please try again.\n");
        }
        else{
                printf("Possible combinations of scoring plays if a team's score is %d\n", score);
              for (int td2 = 0; td2 * 8 <= score; td2++) { // TD + 2pt
            for (int td1 = 0; td1 * 7 + td2 * 8 <= score; td1++) { // TD + FG
                for (int td = 0; td * 6 + td1 * 7 + td2 * 8 <= score; td++) { // TD
                    for (int fg = 0; fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= score; fg++) { // FG
                        for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= score; safety++) { // Safety
                            if (td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2 == score) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                       td2, td1, td, fg, safety);
                            }
                        }
                    }
                }
            }
        }
            
        }
        printf("\n");
    }

}
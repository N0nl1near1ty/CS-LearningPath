//Program name: SimpleSimon
//Function: a memory-test game.
//Programmer: 26531375 李语舟
//Date: 2026/10/24
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int play;
	printf("Play? (1Yes/2No)");
	scanf("%d",&play);
	if (play==1){
		int sequence[20];
	    int input[20];
	    int sequence_length = 3;
	    int counter = 0;
	    int seed = time(NULL);
	    int again;
	    srand((unsigned int)seed);
	    time_t startTime = clock();
	    while (1) {
	        for (int i = 0; i < sequence_length; i++) {
	            sequence[i] = rand() % 10;
	            printf("%2d", sequence[i]);
	        }
	        int now = clock();
	        for (;clock()-now<CLOCKS_PER_SEC; )
	        	printf("\r");
	        for (int i = 0; i < sequence_length * 2; i++)
	            printf(" ");
	        printf("\n");
	        printf("Please input your answer separated by 1 space:");
	        for (int i = 0; i < sequence_length; i++) {
	            scanf("%d", &input[i]);
	        }
	        int correct = 1;
	        for (int i = 0; i < sequence_length; i++) {
	            if (input[i] != sequence[i]) {
	                correct = 0;
	                break;
	            }
	        }
	        if (!correct) {
	            printf("Wrong! Game over.\n");
	            break;
	        }
	        printf("Correct! Next game:\n");
	        counter++;
	        if (counter % 3 == 0) {
	            sequence_length++;
	        }
	    }
	    int time_taken = (clock() - startTime) / CLOCKS_PER_SEC;
	    int scores = counter * 100 / time_taken;
	    printf("Score: %d; Successful tries: %d; Time taken: %ds\n", scores, counter, time_taken);
	    printf("Play again? (1Yes/2No): ");
	    scanf(" %d", &again);
	    if (again == 1) {
	        counter = 0;
	        sequence_length = 3;
	        main();
	    } else if (again == 2) {
	    	printf("Thanks for playing!");
		}
	} else {
		return 0;
	}
    return 0;
}
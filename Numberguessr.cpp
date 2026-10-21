#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a;
	srand(time(NULL));
	loop:
	int num = rand() % 100 + 1; 
	printf("This is a number-guessing game, please input a number between 1 and 100:(input 101 to quit)\n");
	while (1){
		scanf("%d",&a);
		if (a>num && a<=100){
			printf("%d is larger than the answer!\nGuess again:",a);
			
		}
		else if (a>0 && a<num){
			printf("%d is smaller than the answer!\nGuess again:",a);
		}
		else if(a==101){
			printf("Thank you for playing!");
			return 0;
		}
		else if (a==num){
			printf("Correct!\n");
			printf("Welcome back. ");
			goto loop;
		}
		else {
			printf("Invalid value!\n");
			goto loop;
		}
	}
	return 0;
}
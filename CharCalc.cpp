//Program name: CharCalc
//Function: a program that calculates how many characters there are in a designated sentence
//Programmer: 26531375 李语舟
//Date: 2026/10/19
#include <stdio.h>
int main(){
	char ch;
	int caps=0;
	int lowers=0;
	int spaces=0;
	int others=0;
	printf("Input a sentence that ended with a line break:\n");
	while ((ch = getchar()) != '\n'){
		if ('a'<=ch && ch <='z'){
			lowers=lowers+1;
		} else if ('A'<=ch && ch <='Z'){
			caps=caps+1;
		} else if (ch == ' '){
			spaces=spaces+1;
		} else {
		    others=others+1;
		}
	}
	printf("Numbers of capital letters:%d\n",caps);
	printf("Numbers of lowercase letters:%d\n",lowers);
	printf("Numbers of spaces:%d\n",spaces);
	printf("Numbers of other characters:%d\n",others);
	return 0;
}
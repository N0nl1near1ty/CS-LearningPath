//Program name: WordCalc
//Function: a program that calculates how many words are there in designated sentences
//Programmer: 26531375 李语舟
//Date: 2026/11/21
#include <stdio.h>
int main(){
	printf("Enter sentences that ended with a space and a line shift, and ensure this sentence is in standard form.\n");
	printf("WARNING: THE SPACE IN THE END IS NECESSARY!\n");
	char ch;
	int count[26]={0};
	int letters=0;
	int spaces=0;
	while ((ch = getchar()) != EOF) {
		if (('a'<=ch && ch <='z')||('A'<=ch && ch <='Z')) {
			letters=letters+1;
		} else if (ch == ' ' || ch == '\n') {
			count[letters]++;
			letters=0;
			spaces=spaces+1;
		}
	}
	for (int i=1;i<26;i++){
		printf("length %d: %d occurences\n",i,count[i]);
	}
	return 0;
}
//Testing text
//A barren, empty land rested in silence; newly cold, and newly empty, under a sky 
//leaden with dense clouds. The green leaves and red flowers had turned gray, and 
//only the footsteps of the living remained to tell that they all had once been 
//there. White now fell from the heavens and covered up their steps. No snow fell; only ash. 
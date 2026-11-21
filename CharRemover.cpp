//Program name: CharRemover
//Function: a program that removes designated characters from sentences
//Programmer: 26531375 李语舟
//Date: 2026/11/21
#include <stdio.h>
void removeChar(char* string, char ch) {
    for (int i=0; string[i]!='\0';i++) {
        if (string[i]==ch) {
            for (int j=i; string[j]!='\0';j++) {
                string[j]=string[j+1];
            }
            i--; //return to the same place and check again to avoid situations like "Hello!"
        }
    }
}

int main(){
	char string[1000]={0};
	char ch;
	printf("Input a character you want to remove:\n");
	scanf("%c",&ch);
	getchar();
	printf("Input a sentence WITHOUT spaces:\n");
	for (int i=0;string[i]!='\n';i++){
		scanf("%c",&string[i]);
		if (string[i]=='\n'){
			string[i]='\0';
			break;
		}
	}
	removeChar(string, ch);
	printf("%s\n", string);
	return 0;
}
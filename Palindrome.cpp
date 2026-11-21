//Program name: Palindrome
//Function: a program that tests if a string is palindrome
//Programmer: 26531375 李语舟
//Date: 2026/11/21
#include <stdio.h>
#include <string.h> //AI assisted; I don't know how to define j as real length of a string
void lowertransfer(char* string){
	for (int i=0;string[i]!='\0';i++){
		if ('A'<=string[i] && string[i]<='Z'){
			string[i]=string[i]+32;
		}
	}
}
int testpalindrome(char* string){
	int i=0;
	int j=strlen(string)-1; //AI assisted; I don't know how to define j as real length of a string
	lowertransfer(string);
	while (i<j){
		if (!((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))){
			i++;
		}
		if (!((string[j] >= 'A' && string[j] <= 'Z') || (string[j] >= 'a' && string[j] <= 'z'))){
			j--;
		}
		if (string[i]==string[j]){
			i++;
			j--;
		} else {
			return 0;
		}
	}
	return 1;
}
int main(){
	printf("Enter a word or a sentence to test if it's a palindrome, if returned 1 then it is:\n");
	char string[1000];
	for (int i=0;i<1000;i++){
		scanf("%c",&string[i]);
		if (string[i]=='\n'){
			string[i]='\0';
			break;
		}
	}
	printf("%d\n", testpalindrome(string));
}
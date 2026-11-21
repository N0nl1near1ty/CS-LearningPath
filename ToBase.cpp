//Program name: ToBase
//Function: convert a decimal integer to other bases
//Programmer: 26531375 李语舟
//Date: 2026/11/4

#include <stdio.h>
#include <math.h>
int to_base_n(int intNumber, int theBase) {
	char digits[]="0123456789ABCDEF";
	int power=0;
	for(;pow(theBase,power+1)<=intNumber;){
		power++;
	}
	int digit;
	int b;
	while(power >= 0){
    int b=pow(theBase, power);
    int digit=intNumber/b;
    printf("%c", digits[digit]);
    intNumber=intNumber-digit*b;
    power--;
	}	
}

//To avoid inverted output, I searched for another mathematical way to complete converting.

int main(){
	int intNumber,theBase;
	scanf("%d %d",&intNumber,&theBase);
	to_base_n(intNumber, theBase);
	return 0;
}
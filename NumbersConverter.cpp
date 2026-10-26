//Program name: NumbersConverter
//Function: convert an integer into separated words, and transform it into readable versions.
//Programmer: 26531375 李语舟
//Date: 2026/10/21

#include <stdio.h>

void wordprinter(int value){
	switch (value){
		case 1:printf("one ");
		break;
		case 2:printf("two ");
		break;
		case 3:printf("three ");
		break;
		case 4:printf("four ");
		break;
		case 5:printf("five ");
		break;
		case 6:printf("six ");
		break;
		case 7:printf("seven ");
		break;
		case 8:printf("eight ");
		break;
		case 9:printf("nine ");
		break;
		case 0:printf("zero ");
		break;
	}
}
//to transform numbers into words.
void commontenprinter(int value){
	switch (value){
		case 2:printf("twenty ");
		break;
		case 3:printf("thirty ");
		break;
		case 4:printf("forty ");
		break;
		case 5:printf("fifty ");
		break;
		case 6:printf("sixty ");
		break;
		case 7:printf("seventy ");
		break;
		case 8:printf("eighty ");
		break;
		case 9:printf("ninety ");
		break;
	}
}
//to transform normal tenth digit.
void convertIntToWords(int value){
	int a,b,c,d;
	a=value/1000;
	b=(value%1000)/100;
	c=(value%100)/10;
	d=value%10;
	if(a>0){
		wordprinter(a);
	}
	if(b>0){
		wordprinter(b);
	}
	if(c>0){
		wordprinter(c);
	}
	if(c==0 && b!=0){
		printf("zero ");
	}
	if(d>0){
		wordprinter(d);
	}
	if((d==0 && b!=0) || (d==0 && b==0 && c!=0)){
		printf("zero ");
	}
} //required function #1.

void convertIntToRealWords(int value){
	int a,b,c,d;
	a=value/1000;
	b=(value%1000)/100;
	c=(value%100)/10;
	d=value%10;
	if(a>0){
		wordprinter(a);
		printf("thousand ");
	}
	if(b>0){
		wordprinter(b);
		printf("hundred ");
	}
	if(c>0){
		if (c>=2){
			commontenprinter(c);
		} else if (c==1){
			if (d==1){
				printf("eleven ");
				return;
			}
			if (d==2){
				printf("twelve ");
				return;
			}
			if (d==3){
				printf("thirteen ");
				return;
			}
			if (d==4){
				printf("fourteen ");
				return;
			}
			if (d==5){
				printf("fifteen ");
				return;
			}
			if (d==6){
				printf("sixteen ");
				return;
			}
			if (d==7){
				printf("seventeen ");
				return;
			}
			if (d==8){
				printf("eighteen ");
				return;
			}
			if (d==9){
				printf("nineteen ");
				return;
			} //to convert these weird words when tenth digit = 1.
		}
	}
	if(d>0){
		wordprinter(d);
	}
} //required function #2.
//I finally realized that counting system of English is a pile of garbage.
int main(){
	while (1){
		int input;
		printf("Input an integer in (0,1000):");
		scanf("%d",&input);
		convertIntToWords(input);
		printf("\n");
		convertIntToRealWords(input);
		printf("\n");
	}
		return 0;
}
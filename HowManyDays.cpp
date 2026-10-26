//Program name: HowManyDays
//Function: a program that calculates how many days there are in a designated month
//Programmer: 26531375 李语舟
//Date: 2026/10/19
#include <stdio.h>
int main(){
	int year,month;
	printf("Input a year and a month in numbers, 1<=month<=12,");
	printf("and a space between:\n");
	scanf("%d %d",&year,&month);
	if (month <= 0 || month >= 13){
		printf("Invalid value!");
		return 0;
	}
	else if (( year%4==0 && year%100!=0 ) || ( year%400==0 )) {  //Leap year
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			int day = 31;
			printf("There are %d days in this month.",day);
		} else if (month == 4 || month == 6 || month == 9 || month == 11) {
			int day = 30;
			printf("There are %d days in this month.",day);
		} else {
			int day = 29;
			printf("There are %d days in this month.",day);
		}
	} else {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			int day = 31;
			printf("There are %d days in this month.",day);
		} else if (month == 4 || month == 6 || month == 9 || month == 11) {
			int day = 30;
			printf("There are %d days in this month.",day);
		} else {
			int day = 28;
			printf("There are %d days in this month.",day);
		}
	}
	return 0;
}
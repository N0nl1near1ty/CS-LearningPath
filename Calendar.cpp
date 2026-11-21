//Program name: Calendar
//Function: generate the calendar of a year after 1900
//Programmer: 26531375 李语舟
//Date: 2026/11/8
#include <stdio.h>
#define Sunday 0
#define Monday 1
#define Tuesday 2
#define Wednesday 3
#define Thursday 4
#define Friday 5
#define Saturday 6
int IsLeapYear(int year){
	if (( year%4==0 && year%100!=0 ) || ( year%400==0 )){
		return 1;
	} else {
		return 0;
	}
}
//completed.
void GiveInstructions(){
	printf("Enter a year after 1900:");
	return;
}
//completed.
int GetYearFromUser(){
	int year;
	while(1){
		scanf("%d",&year);
		printf("\n");
	if(year<1900){
		printf("Invalid value, please try again:");
	} else {
		return year;
    }
	}
}
//completed.
int PrintCalendar(int year){
	int weekday=1;
	int month,daysinamonth,day;
	for (int k=1900;k<year;k++){
		int ndays=IsLeapYear(k)?366:365;
		weekday=(weekday + ndays) % 7;
	}
	for (month=1;month<=12;month++){
		switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			daysinamonth=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			daysinamonth=30;
			break;
		case 2:
			if (IsLeapYear(year)){
				daysinamonth=29;
				break;
			} else {
				daysinamonth=28;
				break;
			}
		}
		switch(month){
			case 1:
			printf("January         %d\n",year);
			break;
			case 2:
			printf("February        %d\n",year);
			break;
			case 3:
			printf("March           %d\n",year);
			break;
			case 4:
			printf("April           %d\n",year);
			break;
			case 5:
			printf("May             %d\n",year);
			break;
			case 6:
			printf("June            %d\n",year);
			break;
			case 7:
			printf("July            %d\n",year);
			break;
			case 8:
			printf("August          %d\n",year);
			break;
			case 9:
			printf("September       %d\n",year);
			break;
			case 10:
			printf("October         %d\n",year);
			break;
			case 11:
			printf("November        %d\n",year);
			break;
			case 12:
			printf("December        %d\n",year);
			break;
		}
		printf("Su Mo Tu We Th Fr Sa \n");
		for (int i=0;i<weekday;i++){
			printf("   ");
		}
		for (int day=1;day<=daysinamonth;day++){
			printf("%2d ",day);
			weekday++;
			if (weekday==7){
				printf("\n");
				weekday=0;
			}
		}
		printf("\n\n");
	}	
	return 0;
}
//completed.
int main() {
    int year;
    GiveInstructions();
    year = GetYearFromUser();
	PrintCalendar(year);
    return 0;
}

//somehow Chinese can't be printed in my compiler.
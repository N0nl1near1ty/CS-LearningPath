//Program name: Amount
//Function: a program that calculates amounts of stuffs based on units and prices
//Programmer: 26531375 李语舟
//Date: 2026/11/18
#include <stdio.h>
void getUnits(double units[], int members){
	for (int i=0;i<5;i++){
		scanf("%lf",&units[i]);
	}
}
void calcAmount(double* prices, double* units, double* amts, int elms){
	for (int i=0;i<elms;i++){
		amts[i] = prices[i] * units[i];
	}
}
int main(){
	printf("Enter 5 integers as units:");
	double price[5]={9.92, 6.32, 12.63, 5.95, 10.29};
	double units[5],amounts[5];
	double sum1=0;
	double sum2=0;
	getUnits(units,5);
	calcAmount(price,units,amounts,5);
	printf(" Price     Units      Amount  \n");
	printf("-------   -------   ----------\n");
	for (int i=0;i<5;i++){
		sum1+=units[i];
		sum2+=amounts[i];
		printf("%7.2lf  %7.2lf  %10.2lf\n",price[i],units[i],amounts[i]);
	}
	printf("-------   -------   ----------\n");
	printf("Total:   %7.2lf   %10.2lf\n",sum1,sum2);
}
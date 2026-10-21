#include <stdio.h>
int main(){
	double m,h;
	scanf("%lf %lf",&m,&h);
	double bmi=m/h/h;
	if (bmi<18.5){
		printf("Underweight");
	}
	if (bmi>=18.5 && bmi<24){
		printf("Normal");
	}
	if (bmi>24){
		printf("%.6g\nOverweight",bmi);
	}
	return 0;
}
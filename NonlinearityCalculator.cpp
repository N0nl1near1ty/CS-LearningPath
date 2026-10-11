//As the first program I've ever made.//
#include <stdio.h>
#include <math.h>
int main(){
	printf("Thank you for choosing Nonlinearity Calculator!\n");
	printf("choose mode:1=sum,2=minus,3=multiply,4=division,5=power\n");
	int start;
	scanf("%d",&start);
		if (start == 1){
			float x,y;
			printf("input 1st number:");
			scanf("%f",&x);
			printf("input 2nd number:");
			scanf("%f",&y);
			float ans = x+y;
			printf("answer=%f\n",ans);
			printf("Thank you for choosing Nonlinearity Calculator!\n");
		}
		if (start == 2){
		    float z,w;
			printf("input 1st number:");
			scanf("%f",&z);
			printf("input 2nd number:");
			scanf("%f",&w);
			float answ = z-w;
			printf("answer=%f\n",answ);
			printf("Thank you for choosing Nonlinearity Calculator!\n");
		}
		if (start == 3){
		    float a,b;
			printf("input 1st number:");
			scanf("%f",&a);
			printf("input 2nd number:");
			scanf("%f",&b);
			float answe = a*b;
			printf("answer=%f\n",answe);
			printf("Thank you for choosing Nonlinearity Calculator!\n");
		}
		if (start == 4){
		    float c,d;
			printf("input 1st number:");
			scanf("%f",&c);
			printf("input 2nd number:");
			scanf("%f",&d);
			if (d == 0){
				printf("Who told you to use 0 as the divisor?\n");
			}
			float answer = c/d;
			printf("answer=%f\n",answer);
			printf("Thank you for choosing Nonlinearity Calculator!\n");
		}
		if (start == 5){
		    float e,f;
			printf("input antilogarithm:");
			scanf("%f",&e);
			printf("input exponent:");
			scanf("%f",&f);
			if (e==0 && f==0){
				printf("0^0 is undefined!");
		    } else {
				double result = pow(e,f);
				printf("answer=%f\n",result);
				printf("Thank you for choosing Nonlinearity Calculator!\n");
			}
		}
	if (start != 1 && start != 2 && start != 3 && start != 4 && start != 5){
		printf("Undefined input, please try again!");
	}
	return 0;
}
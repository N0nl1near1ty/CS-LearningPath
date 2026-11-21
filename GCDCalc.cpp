//Program name: GCDCalc
//Function: find the GCD of two positive integers
//Programmer: 26531375 李语舟
//Date: 2026/11/3
#include <stdio.h>

int gcd(int a,int b){
    int r;
    for (int i=0;;i++){
        r=a%b;
        a=b;
        b=r;
        if (b==0){
            return a;
        }
    }
}

int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;

}
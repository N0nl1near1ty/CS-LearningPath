//Program name: Sort
//Function: a program that sorts numbers in an array
//Programmer: 26531375 李语舟
//Date: 2026/11/21
#include <stdio.h>
void copy_arr(double* source, double* target, int length){
	for (int i=0;i<length;i++){
		target[i]=source[i];
	}
}
void sort(double* array, int length){	//Constructing.
	double temp;
	for (int i=0;i<length;i++){
		for (int j=0;j<length-1;j++){
			if(array[j]<array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void display_array(double* target,int length){
	for (int k=0;k<length;k++){
		printf("%.1lf ",target[k]);
	}
	printf("\n");
}
int main(){
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target[5];     
    copy_arr(source, target, 5);
    display_array(target, 5);
    sort(target, 5);
    display_array(source, 5);
    display_array(target, 5);
    return 0;
}
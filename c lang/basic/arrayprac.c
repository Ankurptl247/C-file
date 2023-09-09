#include<stdio.h>
int main(){
	int age[]={4,5,6,8,2,1,9,3,7,10};
	printf("%d" , age[5]);
	printf("%d" , age[4]);
	printf("%d" , age[7]);
	printf("%d" , age[0]);
	printf("%d" , age[1]);
	printf("%d" , age[2]);
	printf("%d" , age[8]);
	printf("%d" , age[3]);
	printf("%d" , age[6]);
	printf("%d" , age[9]);
	
	
//2d array
	
	int data[3][4]={ {8,5,6,3},{9,1,2,4},{7,12,10,11}};
	
	printf("\n%d",data[2][2]);
	printf("\n%d",data[1][3]);
	printf("\n%d",data[0][2]);
}


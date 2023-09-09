#include<stdio.h>
int main(){
	
	int a=1,b;
	
	while (a<6){
		for(b=1;b<=a;b++){
			printf("*");
		}printf("\n");
		a++;
	}
}

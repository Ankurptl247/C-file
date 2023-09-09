#include<stdio.h>
int main(){
	char city;
	printf("enter first letter: " );
	scanf("%s" , &city);
	
	switch(city){
	
	case 'a':
		printf("ahmedabad");
		break;
		
	case 'b':
		printf("baroda");
		break;
		
	case 'c':
		printf("chennai");
		break;
		
	case 'd':
		printf("dehli");
		break;
	
	case 'e':
		printf("etanagar");
		break;
	
	case 'f':
		printf("fjbnf");
		break;
		
		default:
		printf("enter your correct charachter");
		
		}
		
}

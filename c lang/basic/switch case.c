#include<stdio.h>
int main(){
	int colour;
	printf("Enter no:");
	scanf("%d" , &colour);
	
	switch(colour){
		
		case 1:
			printf("red");
			break;
			
		case 2:
			printf("pink");
			break;
				
		case 3:
			printf("white");
			break;
		case 4:
			printf("yellow");
			break;
		case 5:
			printf("black");
			break;
		case 6:
			printf("orange");
			break;
		case 7:
			printf("maroon");
			break;
		case 8:
			printf("violet");
			break;
		case 9:
			printf("green");
			break;
		case 10:
			printf("blue");
			break;
		
		default:
			printf("enter correct number");
		
	}
}

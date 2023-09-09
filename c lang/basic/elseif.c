//elseif

#include<stdio.h>
int main(){
	
	int mark;
	printf("enter your mark :");
	scanf("%d",&mark);
	
	if(mark <=15){
	
		printf("you are pass");
	}
	else if(mark <= 35){
	    printf("yor are fail");
	}
	else{
		printf("yor are good student");
	}


}


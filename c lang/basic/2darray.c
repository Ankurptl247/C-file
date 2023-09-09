#include<stdio.h>
int main(){
	
//	int no[3][4]={ {1,4,7,8},{3,2,23,12},{14,16,18,32} };
//	
//	printf("%d" , no[1][0]);
//	printf("\n%d" , no[2][2]);
	
	char name[3][4]= { {'t','p','h','n'},{'c','u','b','g'},{'a','i','r','e'}};
	
	printf("%c" , name[0][2]);
	printf("%c" , name[2][1]);
	printf("\n%c" , name[0][0]);
	printf("%c" , name[2][3]);
	printf("%c" , name[1][0]);
	printf("%c" , name[0][2]);
	printf("\n%c" , name[1][2]);
	printf("%c" , name[2][0]);
	printf("%c" , name[0][1]);
	printf("%c" , name[1][1]);
	printf("%c" , name[0][3]);
	printf("%c" , name[2][0]);
	printf("%c" , name[1][3]);
	printf("%c" , name[2][0]);
	printf("%c" , name[2][2]);
	
}

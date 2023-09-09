#include<stdio.h>
int main(){
int i,j ;
int metrix1[2][2];
int metrix2[2][2];
int metrix3[2][2];

printf("Enter value of matrix 1 :");
scanf("%d %d %d %d", &metrix1[0][0],&metrix1[0][1],&metrix1[1][0],&metrix1[1][1]);


printf("Enter value of matrix 2 :");
scanf("%d %d %d %d", &metrix2[0][0],&metrix2[0][1],&metrix2[1][0],&metrix2[1][1]);

for (int i=0;i<=1;i++){
    
    for(int j=0;j<=1;j++){
        metrix3[i][j]=0;
        

        for(int k=0;k<=1;k++){
            metrix3[i][j] += metrix1[i][k] * metrix2[k][j];
        }

    }
}
printf("Matrix Product:\n");
for (int i=0;i<=1;i++){
    for(int j=0;j<=1;j++){
        printf("%d\t",metrix3[i][j]);
    }
    printf("\n");
}
}
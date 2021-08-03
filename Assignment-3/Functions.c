#include<stdio.h>

//Global Variables
int num_1,num_2;

//function prototype
void swap(int,int);

int main(){
    printf("Enter first number \n");
    scanf("%d",&num_1);

    printf("Enter second number \n");
    scanf("%d",&num_2);

    swap(num_1,num_2);

    return 0;
}

//function definition
void swap(int x,int y){
    printf("Before swapping \nx = %d    y = %d \n",x,y);

    x = num_2;
    y = num_1;

    printf("After swapping \nx = %d    y = %d \n",x,y);
}
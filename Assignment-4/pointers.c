/*
Write a program that ask you to enter a value of a variable int x.
Pass the address of x to a function called edit.
Increment the value of x by 1 inside the function.
Print the value of x in the main function before and after calling the function edit.
$$$$Store these numbers [5,20,80] inside x without overwriting. then print them.$$$$
*/

#include<stdio.h>
int x;

//function prototype
void edit(int* x);
void bonus(int* x);

int main(){
    printf("Enter the value of x : \n");
    scanf("%d",&x);

    printf("Before calling edit x = %d\n",x);

    edit(&x);

    printf("After calling edit x = %d\n",x);

    //BONUS
    bonus(&x);

    int* ptr = &x;
    printf("%d\t",*ptr);
    ptr++;
    printf("%d\t",*ptr);
    ptr++;
    printf("%d\t",*ptr);

    return 0;
}

//function definetion
void edit(int* x){
    (*x)++;
}

void bonus(int* x){
    *x = 5;
    x++;
    *x = 20;
    x++;
    *x = 80;
}
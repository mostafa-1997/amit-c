#include<stdio.h>

int main(){
    int num_1,num_2;
    char op;

    printf("Enter Number_1 \n");
    scanf("%d",&num_1);

    printf("Enter the operator \n");
    scanf(" %c",&op);

    printf("Enter Number_2\n");
    scanf("%d",&num_2);

    switch(op){
        case '+': printf("The result : %d",(num_1+num_2)); break;
        case '-': printf("The result : %d",(num_1-num_2)); break;
        case '*': printf("The result : %d",(num_1*num_2)); break;
        case '/': printf("The result : %d",(num_1/num_2)); break;
        default : printf("Unkown Operator"); break;
    }

    return 0;
}
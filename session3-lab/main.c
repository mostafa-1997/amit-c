#include<stdio.h>
unsigned char Math_Add(unsigned char,unsigned char);
int main(){
    char ret = 5;
    printf(" hello %d",ret);
    return 0;
}
unsigned char Math_Add(unsigned char param_1,unsigned char param_2)
{
    return (param_1+param_2);
}
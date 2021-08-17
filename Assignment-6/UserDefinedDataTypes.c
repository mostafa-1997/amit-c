#include<stdio.h>

typedef struct student
{
    char* name;
    int age;
    float degree;
    int section;
}student;

//function prototype
void print(struct student array[]);

int main(){
    student std[5];

    std[0].name="Mostafa";
    std[0].age=24;
    std[0].degree=100;
    std[0].section=5;

    std[1].name="Sara";
    std[1].age=30;
    std[1].degree=88;
    std[1].section=5;

    std[2].name="Itachi";
    std[2].age=17;
    std[2].degree=100;
    std[2].section=1;

    std[3].name="Madara";
    std[3].age=50;
    std[3].degree=99;
    std[3].section=3;

    std[4].name="Ahmed";
    std[4].age=45;
    std[4].degree=50;
    std[4].section=4;

    for(int i =0;i<5;i++){
        printf("Student %d\n\n",i+1);
        printf("Name\t: %s\n",std[i].name);
        printf("Age\t: %d\n",std[i].age);
        printf("Degree\t: %.2f\n",std[i].degree);
        printf("Section\t: %d\n\n",std[i].section);
    }

    //BONUS
    print(std);

    return 0;
}

//function definetion
void print(struct student std[]){
    printf("------BONUS--------\n");
    for(int i =0;i<5;i++){
        printf("Student %d\n\n",i+1);
        printf("Name\t: %s\n",std[i].name);
        printf("Age\t: %d\n",std[i].age);
        printf("Degree\t: %.2f\n",std[i].degree);
        printf("Section\t: %d\n\n",std[i].section);
    }
}

/*
Write a program that ask the user to enter 5 numbers and store it in array called arr_1
using for loop
Then print the following :
-
Print the 5 elements of arr_1
-
The maximum number in arr_1 and its position in array
-
The minimum number in arr_1 and its position in array

$$$Sort elements of array in ascending order$$$
*/
#include<stdio.h>
//Function Prototypes
void scanArrayValues(int arr[],int);
void printArray(int arr[],int);
void arrayMax(int arr[],int);
void arrayMin(int arr[],int);
void sortArrayAscending(int arr[],int);

int main(){
    int arr_1[5] = {}; //All values will be initialized wih 0.

    //get the size of the array
    int size = sizeof(arr_1)/sizeof(arr_1[0]);
    //scan the array values
    scanArrayValues(arr_1,size);
    //print the 5 elements of the array
    printArray(arr_1,size);
    //get the maximum number in array and its position
    arrayMax(arr_1,size);
    //get the minimum number in array and its position
    arrayMin(arr_1,size);
    //Sort elements of array in ascending order
    sortArrayAscending(arr_1,size);
    //print the array
    printArray(arr_1,size);
    return 0;
}
//Function Definitions
void scanArrayValues(int arr[],int size){
    int x;
    printf("Enter 5 numbers : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&x);
        arr[i] = x;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

void arrayMax(int arr[],int size){
    int max = arr[0];
    int pos = 0;
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
            pos = i;
        }
    }
    printf("The maximum Number is %d in position %d \n",max,pos);
}

void arrayMin(int arr[],int size){
    int min = arr[0];
    int pos = 0;
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
            pos = i;
        }
    }
    printf("The minimum Number is %d in position %d \n",min,pos);
}

void sortArrayAscending(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array is sorted in Ascending order.\n");
} 
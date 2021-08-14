#include <stdio.h>

//function prototype
void fillArrayElements(int arr[],int size);
void swap(int *e1,int *e2);
void selectionSort(int arr[],int size);
int binarySearchTree(int arr[],int low,int high,int element);
void printArray(int arr[], int size);

int main()
{
    int arr[4] = {};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element;
    
    fillArrayElements(arr,size);
    
    printf("-------Array Before Sorting\n---");
    printArray(arr,size);
    
    selectionSort(arr,size);
    
    printf("----Array After Sorting\n-------");
    printArray(arr,size);
    
    printf("Enter the element you are searching for : \n");
    scanf("%d",&element);
    int ret = binarySearchTree(arr,0,size-1,element);
    
    (ret == -1)
        ? printf("Element is not found")
        : printf("Element is found");


    return 0;
}
void fillArrayElements(int arr[],int size){
    printf("Enter the elements of the array : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]); 
    }
}

void swap(int *e1,int *e2){
    int temp;
    temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}

void selectionSort(int arr[],int size){
    int min;
    int flag = 0;
    for(int i=0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[i]){
                min = j;
                flag = 1;
            }
        }
        if(flag)
            swap(&arr[i],&arr[min]);
    }
}

int binarySearchTree(int arr[],int low,int high,int element){
    int mid;
    while(low<=high){
        mid = (low + high)/2;
        
        if(arr[mid] == element){
            return element;
        }
        else if(element>arr[mid]){
            low = mid +1;
        }
        else{
            high = mid-1;
        }
        
    }
    return -1;
}

void printArray(int arr[], int size){
    for(int i =0;i<size;i++){
        printf("array[%d] = %d\n",i,arr[i]);
    }
}
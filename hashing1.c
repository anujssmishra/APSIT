//Write a program to take an array as input and find whether
// a particular element is present in it with constant time complexity.
//Consider that there will be no collision.

#include<stdio.h>

#define MAX 10
int hash_table[MAX];

void input(int *arr) {
    printf("Enter the elements of the array:\n");
    for(int i=0;i<10;i++)
        scanf("%d", &arr[i]);
        
    //Initializing all elements of hash table to -1 indicating that all are empty.
    for(int i=0;i<MAX;i++) 
        hash_table[i] = -1;
}

void hash_function(int *arr) {
    //The modulo hash function.
    for(int i=0;i<MAX;i++) {
        int value = arr[i]%10;
        if(hash_table[value]==-1)   //if the index is -1, i.e. empty, then store the array element
            hash_table[value] = arr[i];
        else    //if there is already a value present, collision occurs and we keep the previous value. We are not dealing with collision yet.
            printf("\nCollision. Previous value retained.\n");
    }
}

int main(void) {
    int arr[10];
    
    input(arr);
    
    hash_function(arr);
    
    printf("Enter the value to be searched : ");
    int n;
    scanf("%d", &n);
    
    if(hash_table[n%10]==n)
        printf("Found!\n");
    else
        printf("Not found!\n");
    return 0;
}
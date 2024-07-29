#include<stdio.h>
void main() {

    // Q.1 Negative Elements in 1D Array
    // Develop a program that finds all the negative elements from a given 1D array.

    int n, x = 0;
    printf("Enter the size of array : ");

    scanf("%d", &n);

    int arr[n];

    for(int a = 0; a < n; a++){
        printf("Enter a number at arr[%d] : ", a);
        scanf("%d", &arr[a]);
    }

    for(int b = 0; b < n; b++){

        if(arr[b] < 0){
            printf("%d at arr[%d] is negative.\n", arr[b], b);

            x++;
        }
    }

    if(x == 0){
        printf("All the entered integers are positive.\n");
    }

}
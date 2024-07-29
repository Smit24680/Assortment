// Q.2 Largest Element in 2D Array
// Develop a Program to find the largest element from a given 2D array.

#include<stdio.h>
void main() {

    int m, n, x = 0;
    
    printf("Enter the number of columns of array : ");
    scanf("%d", &m);

    printf("Enter the number of rows of array : ");
    scanf("%d", &n);


    int arr[m][n];

    for(int a = 0; a < m; a++){
        for(int b = 0; b < n; b++) {
            printf("Enter a number at arr[%d][%d] : ", a, b);
        scanf("%d", &arr[a][b]);
        }
    }

    for(int a = 0; a < m; a++){
        for(int b = 0; b < n; b++) {
            
            if(arr[a][b] > x){
                x = arr[a][b];
            }
        }
    }

    printf("The largest number is : %d", x);

}
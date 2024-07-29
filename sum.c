// Q.4 Sum of Elements in Row & Column of 2D Array
// Develop a Program to print and find the sum of all elements of a given row & column from a 2D
// array.

#include<stdio.h>
void main() {

    int m, n, result = 0;
    
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
            
            
            result = result + arr[a][b];
            
        }
    }
    printf("The sum of all the elements of the array is : %d", result);

}
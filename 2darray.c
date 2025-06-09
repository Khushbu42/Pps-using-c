#include <stdio.h>

int main() {
    int arr[3][4]; 
    int i, j;

    printf("Enter 12 elements (3x4 matrix):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("\nThe 3x4 matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
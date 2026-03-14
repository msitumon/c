#include <stdio.h>

int main() {
    int n, i, j;
    int max;

    printf("Enter number of n: ");
    scanf("%d", &n);
    int arr[n+10][n+10];

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Maximum value = %d\n", max);

    return 0;
}
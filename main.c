#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

void combination(int arr[], int n){
    int i, j, sum, a, b, result;
    for (i=0; i<n; i++){
        a = arr[i];
        for (j=0; j<n; j++){
            if (i != j){
                b = arr[j];
                sum = a + b;
                result = search(arr, n, sum);

                if (result != -1){
                    printf("Array Positions :\tarray[%d]\t+\tarray[%d]\t=\tarray[%d]\n", i, j, result);
                    printf("Array Elements : \t%d\t\t+\t%d\t\t=\t%d\n\n", a, b, sum);
                }
            }
        }
    }
}

int main()
{
    int array[20], l, i;

    printf("Enter the length of the array : ");
    scanf("%d", &l);

    printf("Enter the %d element : ", l);
    for (i=0; i<l; i++){
        scanf("%d", &array[i]);
    }

    printf("\n\nArray Positions : ");
    for (i=0; i<l; i++){
        printf("\t[%d]", array[i]-1);
    }

    printf("\nArray Elements :");
    for (i=0; i<l; i++){
        printf("\t%d", array[i]);
    }
    printf("\n\n");

    combination(array, l);

    return 0;
}

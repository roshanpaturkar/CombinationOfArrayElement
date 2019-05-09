#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i+1;
    return -1;
}

void combination(int arr[], int n){
    int i, j, sum, a, b, result;
    for (i=0; i<n; i++){
        a = arr[i];
        for (j=0; j<n; j++){
            if (i == j)
                continue;

            b = arr[j];
            sum = a + b;
            result = search(arr, n, sum);

            printf("%d\n", result);
        }
    }
}

int main()
{
    int array[20], l;
    int i, j, resut;

    printf("Enter the length of the array : ");
    scanf("%d", &l);

    printf("Enter the %d element : ", l);
    for (i=0; i<l; i++){
        scanf("%d", &array[i]);
    }

    combination(array, l);

    return 0;
}

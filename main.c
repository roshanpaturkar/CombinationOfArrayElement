#include <stdio.h>
#include <stdlib.h>

int array[20], l;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i+1;
    return -1;
}

int main()
{
    int i, j, resut;

    printf("Enter the length of the array : ");
    scanf("%d", &l);

    printf("Enter the %d element : ", l);
    for(i=0; i<l; i++){
        scanf("%d", &array[i]);
    }

    resut = search(array, l, 6);

    printf("%d", resut);

    return 0;
}

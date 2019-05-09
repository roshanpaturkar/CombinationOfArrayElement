#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int n, int x){  //Linear search algorithm to search sum in array
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;                 //Return position of the element if element is found
    return -1;                        //Return -1 if element is not found
}

void combination(int arr[], int n){  //Select two element from the array except itself, add that element and search in the array
    int i, j, sum, a, b, result;
    for (i=0; i<n; i++){
        a = arr[i];                  //Select first element
        for (j=0; j<n; j++){
            if (i != j){             //Skiping itself
                b = arr[j];          //Selecting second element
                sum = a + b;         //Adding
                result = search(arr, n, sum); //Search sum in array and stored result

                if (result != -1){   //Only run when sum is found
                    printf("Array Positions :\tarray[%d]\t+\tarray[%d]\t=\tarray[%d]\n", i, j, result); //Printing positions of that two elements and sum
                    printf("Array Elements : \t%d\t\t+\t%d\t\t=\t%d\n\n", a, b, sum); //Printing that two elements and sum
                }
            }
        }
    }
}

int main()
{
    int array[20], l, i;

    printf("Enter the length of the array : ");
    scanf("%d", &l);                             //Scanning length of the array

    printf("Enter the %d element : ", l);
    for (i=0; i<l; i++){
        scanf("%d", &array[i]);                  //Scanning array elements
    }

    printf("\n\nArray Positions : ");
    for (i=0; i<l; i++){
        printf("\t[%d]", i);                    //Printing array positions
    }

    printf("\nArray Elements :");
    for (i=0; i<l; i++){
        printf("\t%d", array[i]);               //Printing array elements
    }
    printf("\n\n");

    combination(array, l);                      //combination() function call

    return 0;
}

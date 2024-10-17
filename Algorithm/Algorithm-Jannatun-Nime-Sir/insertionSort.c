#include <stdio.h>

void insert(int a[], int n) /* function to sort an aay with insertion sort */
{
    int i, j, temp;
    for (j = 1; j < n; j++) {
        temp = a[j];
        i = j - 1;

        while(i>=0 && temp <= a[i])  /* Move the elements greater than temp to one position ahead from their current position*/
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = temp;
    }
}

void printArr(int a[], int n) /* function to print the array */
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[] = { 12, 31, 25, 8, 32, 17 };
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array elements are - \n");
    printArr(a, n);
    insert(a, n);
    printf("\nAfter sorting array elements are - \n");
    printArr(a, n);

    return 0;
}

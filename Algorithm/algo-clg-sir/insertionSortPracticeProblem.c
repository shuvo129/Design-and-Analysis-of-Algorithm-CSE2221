#include <stdio.h>

void print(int ar_size, int* ar) {
    int i;
    for(i=0; i<ar_size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void insertionSort(int ar_size, int *  ar) {
    int j = ar_size-1; //last element index
    int v = ar[j]; // value of last element
    while(v < ar[j-1]) {
        ar[j] = ar[j-1];
        j--;
        print(ar_size, ar);
    }
    ar[j] = v;
    print(ar_size, ar);
}

/* Tail starts here */
int main() {

   int ar_size;
   //printf("Enter the number of elements: ");
    scanf("%d", &ar_size);
    int ar[ar_size], ar_i;

    for(ar_i = 0; ar_i < ar_size; ar_i++) {
        scanf("%d", &ar[ar_i]);
    }

    insertionSort(ar_size, ar);

   return 0;
}

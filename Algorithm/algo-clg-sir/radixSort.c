#include<stdio.h>
int getMax(int a[], int n){
int max,i ;
max= a[0];
for( i=1;i<n;i++){
if(a[i]>max)
max =a[i];
}
return max;
}
void countingsort(int a[],int n, int place)
{
    int i;
    int output[n+1];
    int count[10]={0};

    for( i=0;i<n;i++)
    count[(a[i]/place)%10]++;
    for( i=1;i<10;i++)
    count[i] +=count[i-1];
    for( i=n-1;i>=0;i--){
    output[count[(a[i]/place)%10]-1]=a[i];
    count[(a[i]/place)%10]--;
    }
    for( i=0;i<n;i++)
    a[i]=output[i];

}
int i,place;
void radixsort(int a[],int n){
int max = getMax(a,n);
for(place =1;max/place>0; place *=10)
countingsort(a,n,place);
}
void printArray(int a[],int n){
    int i;
for( i=0;i<n; ++i){
printf("%d ",a[i]);


}
printf("\n");
}
int main(){
int a[]={97,57,208,699,125,734};
int n = sizeof(a)/ sizeof(a[0]);
printf("Before sorting array elements are - \n");
printArray(a,n);
radixsort(a,n);
printf("After applying radix sort the array elements are - \n");


printArray(a,n);
}


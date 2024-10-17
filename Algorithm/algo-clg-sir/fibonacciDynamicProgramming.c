#include<stdio.h>
int fib(int n){
    int fibArray[n],i;
    fibArray[0] = 0, fibArray[1] = 1;
    for(i=2; i<n; i++){
        fibArray[i] = fibArray[i-1]+fibArray[i-2];
    }

    //return fibArray[n-1];

    for(i=0;i<n;i++)
    {
        printf("%d\t",fibArray[i]);
    }
}

//The parameters in bracket may be ignored
//They are used to input command line arguments and are not necessary
int main(){
    int n=5;
    printf("%d",fib(n));
    return 0;
}

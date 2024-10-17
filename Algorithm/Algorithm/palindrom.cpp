#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int a[5005],t,n,ans=0;


int main(){
	scanf("%d",&t);
	while(t--){
		int n,ans=0;
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
			scanf("%d",&a[i]);
		for (int i=0;i<n;i++){
			for(int j = i+2;j<n;j++){
				if(a[i]==a[j]){
					ans = 1;
					break;
				}
			}
			if(ans)
			break;//Just find one
		}
		if(ans)
		printf("YES\n");
		else
		printf("NO\n");


	}

}

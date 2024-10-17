#include<stdio.h>
//#include<stdlib.h>

int a[5005],t,n,j, i,ans=0;


int main(){
	scanf("%d",&t);
	while(t--){
		int n,ans=0;
		scanf("%d",&n);
		for(i = 0;i<n;i++)
			scanf("%d",&a[i]);
		for (i=0;i<n;i++){
			for(j = i+2;j<n;j++){
				if(a[i]==a[j]){
					ans = 1;
					break;
				}
			}
			if(ans)
			break;
		}
		if(ans)
		printf("YES\n");
		else
		printf("NO\n");


	}


}

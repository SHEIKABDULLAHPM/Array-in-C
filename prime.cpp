#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	
	int prime[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		int count=0;
		
		for(j=1;j<=num[i];j++){
		
		if(num[i]%j==0){
		count++;
		}
	}
	if(count==2){
		prime[k++]=num[i];
	}
}
	for(i=0;i<k;i++){
		printf("%d ",prime[i]);
	}
}

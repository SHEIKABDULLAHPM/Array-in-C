#include<stdio.h>
int main(){
	int num[50];
	int num1[50];
	int n;
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		if(num[i]>0)
		num1[k++]=num[i];
		
	}
	for(i=k;i<n;i++){
		num1[i]=0;
	}
	for(i=0;i<n;i++){
		printf("%d ",num1[i]);
	}
}

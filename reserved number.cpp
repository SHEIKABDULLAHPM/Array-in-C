#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",num[i]);
	}
}

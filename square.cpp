#include<stdio.h>
#include<math.h>
int main(){
	int num[50];
	int n;
	int square[50];
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		square[i]=pow(num[i],2);
	}
	for(i=0;i<n;i++){
		printf("%d ",square[i]);
	}
	}

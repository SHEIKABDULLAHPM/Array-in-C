#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(num[i]==k){
			for(j=i;j<n;j++){
				num[j]=num[j+1];
			}
			
			
		}
	}
	for(i=0;i<n-1;i++){
		printf("%d ",num[i]);
	}
}

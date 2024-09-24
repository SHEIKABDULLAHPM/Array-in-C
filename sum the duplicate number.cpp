#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int sum[50];
	int sums=0;
	int seen[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
	
		if(seen[i]==0){
		
		for(j=i+1;j<n;j++){
			if(num[i]==num[j]){
				sum[k++]=num[j];
				seen[j]=1;
			}
		}
	}
}
	for(i=0;i<k;i++){
		sums+=sum[i];
	}
	printf("%d",sums);
	
}

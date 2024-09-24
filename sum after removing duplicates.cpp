#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int sum[10];
	int sums;
	int seen[10]={0};
	scanf("%d",&n);
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
	 
		
		if(seen[i]==0){
		for(j=i+1;j<n;j++){
			if(num[i]==num[j]){
				count++;
				
				seen[j]=1;
					
			}
			
		}
		sum[k++]=num[i];
}
	}
	for(i=0;i<k;i++){
		sums+=sum[i];
		
		}
		printf("%d ",sums);
		printf("%d ",count);
		}

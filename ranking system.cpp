#include<stdio.h>
int main(){
	int num[50];
	int n;
	int rank[50];
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		rank[i]=1;
	}
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
			if(num[i]<num[j]){
				rank[i]++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
		
	}
	printf("rank : \n");
	for(i=0;i<n;i++){
		printf("%d ",rank[i]);
		
	}
}

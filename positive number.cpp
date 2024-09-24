#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int positive[50]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		if(num[i]>0){
			positive[j++]=num[i];
			
		}
	}
	for(i=0;i<j;i++){
		printf("%d ",positive[i]);
	}
}

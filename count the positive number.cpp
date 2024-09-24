#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int pos[50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(num[i]>-1){
			pos[j++]=num[i];
			k++;
			
			
		}
	}
	printf("%d",k);
}

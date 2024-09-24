#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int first=-1,last=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(num[i]==k){
			if(first==-1){
				first=i;
				
			}
			last=i;
		}
	}
	printf("%d %d",first ,last);
}

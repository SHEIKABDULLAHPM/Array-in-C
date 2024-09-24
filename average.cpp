#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i;
	float j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		j+=num[i];
	}O
	
	printf("%.1f",j/n);
}

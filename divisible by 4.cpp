#include<stdio.h>
int main()
{
	int num[50];
	int n;
	int i,j,k=0;
	scanf("%d",&n);
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]%4+num[j]%4==4||num[i]%4+num[j]%4==0){
				count++;
				
			}
		}
	}
	printf("%d",count);
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	int num[50];
	int n;
	int closest=__INT_MAX__;
	int i,j,k,l=0;
	int element1,element2;
	int sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			sum=num[i]+num[j];
			if(abs(sum)<abs(closest)){
				closest=sum;
				element1=num[i];
				k=i;
				element2=num[j];
				l=j;
				
			}
			
		}
	}
	printf("closest sum elements [%d , %d]",element1,element2);
}

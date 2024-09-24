#include<stdio.h>
int main(){
	int num[50];
	int n;
	int seen[10]={0};
	int i,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		int count=1;
		int found=1;
		if(seen[i]==0){
		 
		for(j=i+1;j<n;j++){
			if(num[i]==num[j]){
				count++;
				
				
				seen[j]=1;
				found=0;
				
			}
		}
		if(found==0||found==1)
	printf("%d occurs %d\n",num[i],count);
	
	}
	
			
		}
	}


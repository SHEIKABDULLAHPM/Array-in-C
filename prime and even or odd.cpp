#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k;
	scanf("%[^\n]s",str);
	int n=strlen(str);
	int prime=1;
	if(n==0||n==1){
		prime=0;
	}
	for(i=2;i<=n;i++){
		if(n%i==0){
			prime=0;
		}
	}
	if(prime){
		printf("%d not prime",n);
	}
	else{
		printf("%d prime",n);
	}
}

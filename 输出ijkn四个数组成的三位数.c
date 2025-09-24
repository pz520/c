#include<stdio.h>
int main (){
	int n=0;
	scanf("%d",&n);
	for (int i=n;i<=n+3;i++){
		for(int k=n;k<=n+3;k++){
			for(int j=n;j<=n+3;j++){
				if(i!=j&&j!=k&&k!=i){
					printf("%d%d%d ",i,k,j);
				}
			}
		}
	printf("\n");
	}
return 0;
}

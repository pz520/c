#include<stdio.h>
#include<math.h>
int main (){
	int n = 0;
	scanf("%d",&n);
	int first = 1;
	int i = 0;
	for(;i < n - 1;i ++){
		
		first*=10;
	}
	//printf("first=%d i=%d",first,i);
	for(i= first;i<first*10;i++){
		int sum =0;
		int k=i;
		for(int d=0;k>0;k/=10){
			
			d=i%10;
			sum+=pow(d,n);
		}
		if(sum==i){
			printf("%d ",i);
			
		}
		//printf("%d",&)
		
	}
	return 0;
}

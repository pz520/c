#include<stdio.h>
int main()
{
	int a=0;
	int count=0;
	int sum=0;
	printf("请输入数字\n");
	scanf("%d\n",&a);
	while(a!=-1){
		sum+=a;
		count++;
		printf("请输入数字\n"); 
		scanf("%d",&a);
		 
	}
	printf("平均数为%f",1.0*sum/count);
}

#include<stdio.h>
int main()
{
	int a=0;
	int count=0;
	int sum=0;
	printf("����������\n");
	scanf("%d\n",&a);
	while(a!=-1){
		sum+=a;
		count++;
		printf("����������\n"); 
		scanf("%d",&a);
		 
	}
	printf("ƽ����Ϊ%f",1.0*sum/count);
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int count=0;
	int a=0;
	srand(time(0));
	int number=rand()%100+1;
	printf("我的数字是%d",number);
	printf("我已经想好了数字\n");
	
	do {
		printf("请输入你的数字\n") ;
	    scanf("%d",&a);
		count++;
		printf("你输入的数字是%d\n",a);
		if (a>number){
		printf("你输入的数字过大\n");
		}else if(a<number){ 
			printf("你输入的数字过小\n");
		}
	    }while(a!=number); 
		printf("你只用了%d次就猜出来了，太厉害了！",count);
	
	
}

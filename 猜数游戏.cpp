#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int count=0;
	int a=0;
	srand(time(0));
	int number=rand()%100+1;
	printf("�ҵ�������%d",number);
	printf("���Ѿ����������\n");
	
	do {
		printf("�������������\n") ;
	    scanf("%d",&a);
		count++;
		printf("�������������%d\n",a);
		if (a>number){
		printf("����������ֹ���\n");
		}else if(a<number){ 
			printf("����������ֹ�С\n");
		}
	    }while(a!=number); 
		printf("��ֻ����%d�ξͲ³����ˣ�̫�����ˣ�",count);
	
	
}

#include<stdio.h>
int main (){
	char c;
	do{
	double a=0,b=0;
	char op;
	//scanf("%lf %c",&a,&op);
	//scanf("%lf",&b);
		scanf("%lf %c %lf",&a,&op,&b);  // 一次性读取所有输入
	switch(op){
	case'+':printf("%.2f+%.2f=%.2f\n",a,b,a+b);break;
	case'-':printf("%.2f-%.2f=%.2f\n",a,b,a-b);break;
	case'*':printf("%.2f*%.2f=%.2f\n",a,b,a*b);break;
		case'/':if(b!=0){
			printf("%.2f/%.2f=%.2f\n",a,b,a/b);
			break;
			
		}else{
			printf("error\n");
			break;
		}
	default:printf("error\n");}
		printf("是否u要继续，（继续打y）：");
		getchar();
		c=getchar();
		getchar();
	}while(c=='y');
	return 0;
}

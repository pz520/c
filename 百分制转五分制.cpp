#include <stdio.h>
int main (){
	int score;
	scanf("%d",&score);
	
	if(score>=90) {
		printf("A");
	}else if(90>score>=80) {
	       printf("B");
	}else if(80>score>=70){
			printf("C");
	}else if(70>score>=60){
			printf("D");
	}else{
			printf("E");
	}
		 
	
	return 0;
}


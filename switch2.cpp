#include <stdio.h>
int main ()

{
	int type;
	scanf("%d",&type);
	switch(type) {
		case 1:
			printf("OUT\n");
			break;
		case 2:
			printf("Good morning.\n");
		case 3:
			printf("Good afternoon.\n");
		default :
			printf("Good evening.\n");
			break;
	}
	return 0;
	
	
}
  

#include <stdio.h>
int main ()
{
	const int MAN=2;
	int type;
	scanf("%d",&type);
	
	switch (type) {
		case 1:
			printf("sb");
			break;
		case MAN:
			printf("HEYMAN");
			break;
		default:
			printf("baby");
			break;
			
			
	}
	return 0;
}

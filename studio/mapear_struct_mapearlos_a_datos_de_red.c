
#include <stdio.h>
#include <string.h>

int main(){
	int a = 10;
	int b = 0; 
	printf("antes b: %d \n",b);
	memcpy(&b,&a,sizeof(a));
	printf("despues b: %d \n",b);

	return 0;
}

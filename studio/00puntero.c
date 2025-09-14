# include <stdio.h>

int main(){
	int x = 10;
	int *p = &x;
	
	printf("x: %d -> valor de x \n",x);
	printf("p: %p -> direccion almacenada en p \n",p);
	printf("&x: %p -> direccion a x (igual a p) \n",&x);
	printf("*p: %d -> valor en la direccion (el contenido ) ->10 \n",*p);
	printf("\n");

	int y = 34;
	printf("&y: %p \n",&y);
	printf("\n");

	return 0;
}

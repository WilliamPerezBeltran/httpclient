#include <stdio.h>

int main(int argc, char **argv){
	printf("--------- puntero que apunta a punteroa --------");
	printf("numero de argumentos: %d \n",argc );
	
	for(int i=0;i<argc;i++){
		printf("argc[%d] = %s \n",i,argv[i]);
	};
	printf("-------------- fin --------------");
	


	printf("--------- definicion de puntero nomal --------");
	int x = 10;  /* variable normal */	
	int *p = &x;  /* p apunta a x (a la direccion de memoria de x) */ 	
	int **pp = &p;  /* pp apunta a p */ 
	printf("-------------- fin --------------");
	
	printf("\n");

	printf("--------- puntero con struct  --------");
	struct Persona {
		int id;
		char nombre[50];
	};

	struct Persona p1 = {1, "walter"};
	printf("id: %d, name: %s \n",p1.id,p1.nombre);

	struct Persona *ptr = &p1;
	
	printf("\n");
	printf("id: %d, nombre: %s \n",ptr->id, ptr->nombre);
	printf("Usando (*ptr).id \n");
	printf("id: %d, nombre: %s \n",(*ptr).id, (*ptr).nombre);
	printf("-------------- fin --------------");
	
	printf("\n");

	printf("--------- funcion que tiene parametros de tipo puntero  ----------");
	void rast(int *n){
		*n = 34;
	};

	int y = 10;
	printf("declaracion de y: %d\n",y);
	rast(&y);
	printf("nuevo y: %d\n",y);
	printf("-------------- fin --------------\n");
		
	
	printf("\n");
	
	printf("--------- Funcion que retorna punteros ----------");
	int *obtenerNumero(){ /* define la funcion que va retornar un puntero ( es decir una direccion de memoria)*/
		static int x = 43;
		return &x;
	};

	int *puntero = obtenerNumero(); /* utiliza la funcion y como va recibir un puntero utiliza utiliza el * para acceder al valor   */
	printf("puntero: %p\n",puntero);
	printf("-------------- fin --------------\n");
	return 0;
}

/*


	forma de ejecutar 
	gcc 01_parametros_main.c -o parametros
	./parametros hola c golang  
	
  hola c golang son los parametros que se le envian por consola 


	puntero que apunta a otro puntero 
	en c un puntero que apunta a otro puntero es una variable que guarda la direccion de otro puntero 
	y suele escribirse **. 

*/


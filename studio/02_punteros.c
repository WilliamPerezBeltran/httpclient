# include <stdio.h>

struct Point{
	int x, y;
};

struct Packet{
	int id;
	short size;
	char data[32];
};

int main(){
	struct Point p = {10,20};
	struct Point *ptr = &p;
	printf("x: %d, y: %d \n",ptr->x, ptr->y);

	struct Packet my_packet = {0,10,"portugues"};
	printf("id: %d, size: %d, data: %s \n", my_packet.id, my_packet.size, my_packet.data);

	struct Packet *ptr_packet = &my_packet;
	printf("id: %d, size: %d, data: %s \n", ptr_packet->id, ptr_packet->size, ptr_packet->data);

/*
recordar que un Buffer es un espacio de memoria reservado para almacenar datos temporalmente
	espacio de memoria reservardo para guardar datos temporalmente 
	espacio de memoria reservado para guardar datso temporlamente 
	espacio de memoria reservado para guardar datos temporalmente 
	por ejemplo podemos decir 
	char buffer[1024] -> aqui buffer no es un cadena de texto sino es un bloque de texto de moemria de 1024 bytes 
	donde se agregan datos binarios 

	int -> entero con signo, 4 bytes 
	unsigned -> entero sin signo , 4 bytes

 _
|u_char -> entero pequeño de 1 byte , -> 
|utilizado mucho en :
|	- utilizado para representacion de  bytes crudos en redes
|	- criptografía  
|	- buffers binarios 
|	- la declaracion de este tipo de dato standar es :
|
|La declaración estándar de este tipo de dato es:             
|unsigned char buffer[1024];                                
|Esto crea un buffer de 1024 bytes.                           
|																														
|En cambio:                                                   
|u_char buffer[1024];                                       
|solo compila si el sistema o librería ya definió:            
|typedef ***++++_unsigned char u_char;                              
|_


 _
|
|u_short ( unsigned short int )
|int 2 bytes (16 bits)
	utilizado mucho en :
|usado mucho en protocolos de red 
|
|u_short port = 8080;
|_

u_long (unsigned long int)
int sin signo "largo"
8bytes (64 bits)
	utilizado mucho en :
	-direccions de memoria 
	-offsets de archivos 
	-identificadores grandes 



┌──────────────┬───────────────┬───────────────────────────────────────────┬─────────────────────────────────────┐
│ Tipo         │ Tamaño típico │ Rango                                    │ Usos comunes                        │
├──────────────┼───────────────┼───────────────────────────────────────────┼─────────────────────────────────────┤
│ int          │ 4 bytes (32b) │ -2,147,483,648 a 2,147,483,647           │ Contadores, cálculos generales      │
│ unsigned int │ 4 bytes (32b) │ 0 a 4,294,967,295                        │ Tamaños, índices, conteos           │
│ u_char       │ 1 byte (8b)   │ 0 a 255                                  │ Bytes crudos, buffers binarios, red │
│ u_short      │ 2 bytes (16b) │ 0 a 65,535                               │ Puertos de red, IDs pequeños        │
│ u_long       │ 8 bytes (64b) │ 0 a 18,446,744,073,709,551,615           │ Direcciones, offsets, IDs grandes   │
└──────────────┴───────────────┴───────────────────────────────────────────┴─────────────────────────────────────┘
*/	




	
	return 0; 


}

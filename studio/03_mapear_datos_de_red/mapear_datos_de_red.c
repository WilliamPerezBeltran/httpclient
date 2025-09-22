# include <stdio.h>
#include <string.h>
#include <arpa/inet.h> // para hton, htons

struct Mensaje{
	int id; // 4 bytes 
	short codigo; // 2 bytes
	char flag; // 1 bytes
};

// Serializar la struct en un buffer
void serializar(struct Mensaje *msg, unsigned char *buffer){
	int offset = 0;
	
	int id_net = htonl(msg->id); // convierte a network byte order 
	memcpy(buffer+offset,&id_net,sizeof(int));
	offset += sizeof(int);

	short codigo_net = htons(msg->codigo);
	memcpy(buffer+offset, &codigo_net, sizeof(short));
	offset += sizeof(short);
	

	memcpy(buffer+offset, &msg->flag, sizeof(char));
	offset += sizeof(char);
};

// Reconstruye la struct desde el buffer 
void deserializar(struct Mensaje *msg, unsigned char *buffer){

	int offset = 0;
	
	int id_net;
	memcpy(&id_net, buffer + offset, sizeof(int));
	msg->id = ntohl(id_net); // convierte de network a host 
	offset += sizeof(int);

	short codigo_net;
	memcpy(&codigo_net, buffer+offset, sizeof(short));
	msg->codigo = ntohs(codigo_net);
	offset += sizeof(short);

	memcpy(&msg->flag, buffer+offset, sizeof(char));
	offset += sizeof(char);
};

int main(){
	struct Mensaje m1 = {1234, 77, 'A'};
	unsigned char buffer[64];
	serializar(&m1,buffer);

	// aqui se manda "buffer" por un socket con un send()
	
	struct Mensaje m2;
	deserializar(&m2, buffer);
	printf("ID: %d, Codigo: %d, Flag: %c\n", m2.id, m2.codigo, m2.flag);
  
	return 0;
};

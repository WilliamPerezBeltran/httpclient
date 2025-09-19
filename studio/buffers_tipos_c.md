# Buffers y Tipos de Datos en C

## ¿Qué es un Buffer?
Un **Buffer** es un espacio de memoria reservado para almacenar datos temporalmente.  
Ejemplo:  

```c
char buffer[1024];
```

Aquí `buffer` no es una cadena de texto, sino un bloque de memoria de 1024 bytes donde se pueden agregar datos binarios.

---

## Tipos de Datos

### `int`
- Entero con signo.  
- Tamaño: **4 bytes**.

### `unsigned`
- Entero sin signo.  
- Tamaño: **4 bytes**.

### `u_char` (alias de `unsigned char`)
- Entero pequeño de **1 byte**.  
- Usado mucho en:
  - Representación de bytes crudos en redes.
  - Criptografía.
  - Buffers binarios.

Declaración estándar:

```c
unsigned char buffer[1024];
```

Esto crea un buffer de 1024 bytes.  

En cambio:

```c
u_char buffer[1024];
```

Solo compila si el sistema o librería ya definió:  

```c
typedef unsigned char u_char;
```

---

### `u_short` (`unsigned short int`)
- Tamaño: **2 bytes (16 bits)**.  
- Usado mucho en protocolos de red.  

Ejemplo:

```c
u_short port = 8080;
```

---

### `u_long` (`unsigned long int`)
- Entero largo sin signo.  
- Tamaño: **8 bytes (64 bits)**.  
- Usado mucho en:
  - Direcciones de memoria.
  - Offsets de archivos.
  - Identificadores grandes.

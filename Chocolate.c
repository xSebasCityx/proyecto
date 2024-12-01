#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MIN(i, j) (((i) <= (j)) ? (i) : (j))

int main(){
    int k, i = 0;
    scanf("%d", &k);  // Lectura de la cantidad de números en el arreglo
    fflush(stdin);  // Limpiamos el buffer de entrada
	
	if(1 <= k && k <= 200000){
		int A[k];
   		}
   		char Cad[k*1000000000];
    	fgets(Cad, strlen(Cad), stdin);  // Obtenemos la cadena de números

    	char *part = strtok(Cad, " ");
    	while(part != NULL){
        	int ref = atoi(part);
        	A[i++] = (1 <= ref && ref <= 1000000000) ? ref : 0;
        	part = strtok(NULL, " ");
    	}
	}
}

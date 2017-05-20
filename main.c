#include <stdio.h>
#include "util.h"
#include "NodoArbolAVL.h"

int main(int argc, char **argv)
{
	NodoArbolAVL* raiz = NULL;
    printf("Insertando 10\n");
    raiz = insertarAVL(raiz, creaNodoAVL(10));
    printf("-----------------\n");
    printf("Insertando 5\n");
    raiz = insertarAVL(raiz, creaNodoAVL(5));
    printf("-----------------\n");
    printf("Insertando 13\n");
    raiz = insertarAVL(raiz, creaNodoAVL(13));
    printf("-----------------\n");
    printf("Insertando 1\n");
    raiz = insertarAVL(raiz, creaNodoAVL(1));
    printf("-----------------\n");
    printf("Insertando 6\n");
    raiz = insertarAVL(raiz, creaNodoAVL(6));
    printf("-----------------\n");
    printf("Insertando 17\n");
    raiz = insertarAVL(raiz, creaNodoAVL(17));
    printf("-----------------\n");
    printf("Insertando 16\n");
    raiz = insertarAVL(raiz, creaNodoAVL(16));
    printf("-----------------\n");
    printf("Insertando 25\n");
    raiz = insertarAVL(raiz, creaNodoAVL(25));
    printf("-----------------\n");
    printf("Insertando 35\n");
    raiz = insertarAVL(raiz, creaNodoAVL(35));
    printf("-----------------\n");
    printf("Insertando 40\n");
    raiz = insertarAVL(raiz, creaNodoAVL(40));
    printf("-----------------\n");
    printf("Insertando 45\n");
    raiz = insertarAVL(raiz, creaNodoAVL(45));
    printf("-----------------\n");
    printf("Insertando 50\n");
    raiz = insertarAVL(raiz, creaNodoAVL(50));
    printf("-----------------\n");
    
    preordenAVL(raiz);
}
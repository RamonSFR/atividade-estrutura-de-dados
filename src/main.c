#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    char rgm[10];
    char nome[100];
} Aluno;

typedef struct no {
    int conteudo;
    struct no *esq, *dir;
} No;

typedef struct {
    No *raiz;
} ArvB;

void inserir(ArvB *arv, int valor) {
    if(arv->raiz == NULL) {
        No *novo = malloc(sizeof(No));
    }
};

int main() {

}
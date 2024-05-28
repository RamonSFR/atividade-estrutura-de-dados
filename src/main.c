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
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct codigoProduto{
int cod;
} codigoProduto;
typedef struct {
 int inicio, fim;
 codigoProduto v[MAX];
} fila;


fila* criarFila() {
    fila *f = (fila*)malloc(sizeof(fila));
    f->fim = 0;
    f->inicio = 0;
    return f;
}

int cheia(fila* f) {
    return (f->fim+1 % MAX) == f->inicio;
}

int vazia(fila *f) {
    return f->fim == f->inicio;
}

void enfileirar(fila* f, int valor) {
    
    if(!cheia(f)) {
        f->v[f->fim].cod = valor;
        f->fim = (f->fim+1) % MAX;
    } else {
        printf("Fila Cheia!!!\n");
    }
    
}

codigoProduto desenfileirar(fila* f) {
    
    codigoProduto aux;
    
    if(!vazia(f)) {
        aux = f->v[f->inicio];
        f->inicio = f->inicio+1 % MAX;
    } else {
        printf("Fila Vazia!!\n");
    }
    return aux;
}


int main() {
    
    fila *f;
    int tam;
    int n;
    int i;
    int valor;
    
    f = criarFila();
    
    printf("Tamanho da Fila: ");
    scanf("%d", &tam);
    printf("Fila: ");
    for(i=0;i<tam;i++) {
        scanf("%d", &valor);
        enfileirar(f,valor);
    }
    
    printf("N: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        desenfileirar(f);
    }
    while(!vazia(f)) {
        printf("%d ", desenfileirar(f).cod);
    }
    printf("\n");

}

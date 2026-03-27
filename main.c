#include <stdio.h>
#include <stdlib.h>
int main(void) {
int *p;
int a = 5; // Tamanho inicial do array
p = (int *)malloc(a * sizeof(int));
if (!p) {
printf("Erro na alocação de memória.\n");
return 1;
}
// Usando os valores alocados
for (int i = 0; i < a; i++) {
p[i] = i * 2;
printf("p[%d] = %d\n", i, p[i]);
}
// Redimensionando o array para 10 elementos
int b = 10;
p = (int *)realloc(p, b * sizeof(int));
if (!p) {
printf("Erro na realocação de memória.\n");
return 1;
}
// Usando os valores após a realocação
for (int i = a; i < b; i++) {
p[i] = i * 2;
printf("p[%d] = %d\n", i, p[i]);
}
// Liberando a memória alocada
free(p);
return 0;
}
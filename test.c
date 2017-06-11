#include <stdio.h>
enum tipo{
    tipoInteiro,
    tipoReal,
    tipoString,
    tipoDefinido
};
typedef enum tipo Tipo;

union valor{
    int i;
    double r;
    char *s;
    void *qualquerTipo;
};
typedef union valor Valor;

int main() {
    int a = tipoDefinido;
    printf("%i", a);
}
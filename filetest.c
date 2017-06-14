#include <stdio.h>
int main() {
    FILE *compilado;
    compilado = fopen("afcompilado.c", "w");
    fprintf(compilado, "%s", "#include <stdio.h>\nint main() {\n");
    
   // sprintf(compilado, "}");
    fclose(compilado);
    return 0;
}
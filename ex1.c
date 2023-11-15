#include <stdio.h>
#include <math.h>

int main (){

    float raio, perimetro, area; 

    printf("Informe o valor do Raio:\n");
    scanf("%f", &raio);

    area = M_PI * pow(raio,2);
    perimetro = 2 * M_PI * raio;

    printf("O valor da area deste circulo e: %f\n", area);
    printf("O valor da perimetro deste circulo e: %f\n", perimetro);
    
    return 0;

}
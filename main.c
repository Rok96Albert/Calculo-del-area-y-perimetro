#include <stdio.h>
#define PI 3.1416;

int main() {
    float r;
    float area;
    float perimetro;

    printf("Radio del Circulo:");
    printf("\n");

    scanf("%f",&r);

    perimetro = 2 * PI;
    perimetro = perimetro * r;

    printf("El perimetro del Circulo es:%2f",perimetro);

    r*=r;
    area = r * PI;

    printf("\n El área del Circulo es: %2f",area);



    return 0;
}

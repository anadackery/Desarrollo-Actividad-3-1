/*Conversor de Divisas*/
#include <stdio.h>

int main(){
    /*Variables*/
    char Divisa; 
    float Moneda;
    int opcion;
/* Tasas de cambio fijas */
    float quetzal_a_dolar = 0.13;
    float quetzal_a_Euro = 0.12;
    float dolares_a_quetzales =  7.67;
    float dolares_a_euro = 0.87;
    float euro_a_quetzales = 8.80;
    float euro_a_dolar = 1.15;
    float cambio; 

    printf("Bienvenido al Conversor de Divisas \n");
    printf("Escriba la letra de la Moneda que deseas hacer el cambio\n");
    printf("\n=== CONVERSOR DE MONEDAS ===\n");
        printf("1. Quetzales a Dolares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dolares a Quetzales\n");
        printf("4. Dolares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dolares\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion); 
    printf("Seleccionaste la opcion %d \n", opcion);
    printf("Escribe la cantidad de dinero que deseas hacer el cambio\n");
    scanf("%f", &Moneda);
if (opcion == 1) {
       cambio = quetzal_a_dolar * Moneda;
    printf("Su cambio es de: %.2f \n", cambio);

}

if (opcion == 2) {
       cambio = quetzal_a_Euro * Moneda;
    printf("Su cambio es de: %.2f \n", cambio);

}
 
if (opcion == 3) {
       cambio = dolares_a_quetzales * Moneda;
    printf("Su cambio es de: %.2f \n", cambio);

}
if (opcion == 4) {
       cambio = dolares_a_euro* Moneda;
    printf("Su cambio es de: %.2f \n", cambio);

}
    
if (opcion == 5) {
       cambio = euro_a_quetzales * Moneda;
    printf("Su cambio es de: %.2f \n", cambio);

} 
if (opcion == 6) {
       cambio = euro_a_dolar * Moneda;
    printf("Su cambio es de: %.2f \n", cambio);

}
if (opcion == 0) {

    printf("Respuesta invalida");

}
    

    return 0;
}


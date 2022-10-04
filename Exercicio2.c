#include <stdio.h>

/*
2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o 
correspondente em Celsius e em Kelvin:
*/

int main(){
    float temperatura;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &temperatura);
    float temperatura_celsius = (temperatura-32)*5/9;
    float temperatura_kelvin = temperatura_celsius + 273.15;
    printf("A temperatura em celsius e de %.1f graus\n", temperatura_celsius);
    printf("A temperatura em Kelvin e de %.1f graus", temperatura_kelvin);
    return 0;
}


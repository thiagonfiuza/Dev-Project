#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
//Definindo Variaveis
int a;
float b;
char c;
bool d;

//Passando Valores
a = 5;
b = 2.3;
c = 'a';
d = false; //true = 1, false = 0

//escrever na tela
printf("\n O valor de a = %d", a);
printf("\n O valor de b = %.2f", b);
printf("\n O valor de c = %c", c);
printf("\n O valor de d = %d\n", d);

//Lendo valores
scanf("%d", &a);
scanf("%f", &b);
scanf(" %c", &c);
scanf("%d", &d);

//escrever na tela
printf("\n O valor de a = %d", a);
printf("\n O valor de b = %.2f", b);
printf("\n O valor de c = %c", c);
printf("\n O valor de d = %d\n", d);


//Pausa o programa
system("Pause");
}

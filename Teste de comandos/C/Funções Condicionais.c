#include <stdio.h>
#include <stdlib.h>

void main(){
//Definindo Variaveis
int a = 5, opcao = 1;
float b = 2.5;
char c = 'x';

//Condicional Simples
if(a = 5){
printf("\nO valor da Variavel A =  5\n");
}
if(b = 2.5){
printf("\nO valor da Variavel B =  2.5\n");
}
if(c = 'x'){
printf("\nO valor da Variavel C = X\n");
}
system("pause");
system("cls");

//Numero Impar ou Par
if(a % 2 == 1){
    printf("\nA Variavel a eh impar\n");
    }else{
    printf("\nA Variavel a eh par\n");
    }
    system("pause");
    system("cls");

//Condicional Composta
if(opcao == 1){
    printf("\nA opcao = 1\n");
}else if(opcao == 2){
    printf("\nA opcao = 2\n");
}else{
    printf("\nA opcao nao eh 1 e nem 2\n");
}
system("pause");
system("cls");
}

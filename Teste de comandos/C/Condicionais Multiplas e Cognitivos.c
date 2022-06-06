#include <stdio.h>
#include <stdlib.h>

void main(){
//Definindo Variaveis
int a = 20;

//Cognitivos Logico E (AND), se UMA COMPARAÇÃO for FALSA, não entra no bloco
if(a > 5 && a < 15){
    printf("\n A Variavel 'a' esta entre 5 e 15\n");
}

//Cognitivos Logico OU (OR), se UMA COMPARAÇÃO for verdadeira, já entra no bloco
if(a > 5 || a < 15){
    printf("\n A Variavel 'a' esta entre 5 ou 15\n");
}
//Misturando Conectivos
if( (a > 5 && a < 15) || a == 20){
    printf("\n A Variavel 'a' esta entre 5 e 15 ou ela vale 20\n");
}


//Pausando o Programa
system("pause");
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
//Defindindo Variaveis
bool a = true, b = false;

//if(a == true) é o mesmo que if(a), porque o if sempre vai procurar primeiro um valor verdadeiro
if(a){
    printf("\nA eh verdadeiro\n");
}

//Comparando o B
if(b){
    printf("\nB eh verdadeiro");
}else{
    printf("\nB eh falso\n");
}

//Comparando uma falsidade
//O ! serve para inverter o sentido do argumento, ou seja, !b = Se não b
if(!b){
    printf("\nB eh falso\n");
}




//Pausando o Programa
system("Pause");
}

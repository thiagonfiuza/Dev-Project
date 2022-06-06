#include <stdio.h>
#include <stdlib.h>

void main(){
//Definindo Variveis
int a = 1, b = 10;

//primeiro confere a condição, depois repete o bloco
while(a <= 10){
//imprimindo 'b' na tela
printf("\n%d", a);
//incremento
a++;
}
// alterando o valor de 'a'
a = 20;
//primeiro executa uma vez, depois confere a condição
do{
    printf("\n%d", a );
    //incremento
    a++; //a = a +1;
    }while(a <= 10);

system("pause");
}

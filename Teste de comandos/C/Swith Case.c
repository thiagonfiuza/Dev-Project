
#include <stdio.h>
#include <stdlib.h>

void main(){
//definindo variaveis
int a = 1;
char b = 'c';

//Condicionais com if
if(a == 1){
    printf("\n Opcao escolhida: 1\n");
}else if(a == 2){
    printf("\n Opcao escolhida: 2\n");
}else if(a == 3){
    printf("\n Opcao escolhida: 3\n");
}else{
    printf("\n Opcao invalida\n");
}

//Condicionais com switch char
switch(a){
case 1:
printf("\n Opcao escolhida: 1\n");
break;
case 2:
printf("\n Opcao escolhida: 2\n");
break;
case 3:
printf("\n Opcao escolhida: 3\n");
break;
default:
printf("\n Opcao invalida\n");
break;
}

//Condicionais com switch
switch(b){
case 'a':
printf("\n Opcao escolhida: A\n");
break;
case 'b':
printf("\n Opcao escolhida: B\n");
break;
case 'c':
printf("\n Opcao escolhida: C\n");
break;
default:
printf("\n Opcao invalida\n");
break;
}












//pausando o programa
system("pause");
}

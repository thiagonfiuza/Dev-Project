#include <stdio.h>
#include <stdlib.h>

void main(){
//Definindo Variavel
int a = 5, b = 10, c = 15;
char d = 'z';

//Maior
if(a > 2){
    printf("\n O %d eh maior que 2\n", a);
}
//maior ou igual
if(c >= b){
    printf("\n O %d eh maior ou igual que %d\n", b, a);
}
//Menor
if(a < 10){
    printf("\n O %d eh menor que 10\n", a);
}
//Menor ou igual
if(c <= 20){
    printf("\n O %d eh menor ou igual que 20\n", c);
}
//diferente
if(c != 10){
        printf("\n O %d eh diferente de 10\n", c);

}

if(d != 'x'){
        printf("\n O %c eh diferente de X\n", d);

}
system("pause");























}

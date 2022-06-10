#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
    int  a, b[100] , contador = 0;
    printf("ingrese un valor del 0 al 100\n");
    scanf("%d", &a);
     srand(getpid());
    for (int i = 0; i < 100; i++){
        b[i] = rand()%101;
        if(a == b[i]){
            contador++;
        }
    } 

    printf("%d", contador);
    return 0;
}

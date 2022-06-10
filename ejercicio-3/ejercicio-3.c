#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
    int b[999] ,num0 = -1, num1 = -1, num10 = -1, num100 = -1;

    float prom = 0;
    srand(getpid());
    for (int i = 0; i < 1000; i++){
        b[i] = (rand()%101);
        if (b[i] == 0 && num0 == -1){
            num0 = i;
        }else if (b[i] == 1 && num1 == -1){
            num1 = i;
        }else if (b[i] == 10 && num10 == -1){
            num10 = i;
        }else if (b[i] == 100 && num100 == -1){
            num100 = i;
        }
    }


    printf("el numero 0 se encontro en la posicion: %d\n", num0);
    printf("el numero 1 se encontro en la posicion: %d\n", num1);
    printf("el numero 10 se encontro en la posicion: %d\n", num10);
    printf("el numero 100 se encontro en la posicion: %d\n", num100);
    

    return 0;
}

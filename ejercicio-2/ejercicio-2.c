#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
    int b[99] ,max = 0 ,min = 20, repe[9], repetido = 0;
    for (int i = 0; i < 10; i++){
        repe[i] = 0;
    }
    float prom = 0;
    srand(getpid());
    for (int i = 0; i < 100; i++){
        b[i] = (rand()%11)+10;
        prom += b[i];
        if(b[i] > max){
            max = b[i];
        }
        if(b[i] < min){
            min = b[i];
        }


        for (int j = 0; j < 10; j++)
        {
            if (b[i]-10 == j){
                repe[j]++;
            }
        } 
    }

    prom = (float)prom/100; 
    for (int i = 0; i < 10; i++){
        if(repetido < repe[i]){
            repetido = i+10;
        }
    }
    
    printf("el promedio es: %f\n", prom);
    printf("el numero minimo es: %d\n", min);
    printf("el numero maximo es: %d\n", max);
    printf("el numero que mas se repite es: %d\n", repetido);
    

    return 0;
}

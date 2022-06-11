#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
    int b[1000], position[4];
    srand(getpid());
    for(int i = 0; i < 4; i++){
        position[i] = -10;
    }
    for (int i = 0; i < 1000; i++){
        
        b[i] = (rand()%101);              
            switch(b[i]){
            case 0:
            for (int j = 0; j < 4; j++){ 
                if(position[j] == 0){
                    break;
                }
                if(position[j] == -10){
                    position[j] = 0;
                    break;
                }
                }
            break;
            case 1:
                for (int j = 0; j < 4; j++){ 
                if(position[j] == 1){
                    break;
                }
                if(position[j] == -10){
                    position[j] = 1;
                    break;
                }
                }
            break;
            case 10:
                for (int j = 0; j < 4; j++){ 
                if(position[j] == 10){
                    break;
                }
                if(position[j] == -10){
                    position[j] = 10;
                    break;
                }
                }
            break;
            case 100:
                for (int j = 0; j < 4; j++){ 
                if(position[j] == 100){
                    break;
                }
                if(position[j] == -10){
                    position[j] = 100;
                    break;
                }
                }
            break;
        }
    }


    printf("El primer numero que se encontro fue: %d\n", position[0]);
    printf("El segundo numero que se encontro fue: %d\n", position[1]);
    printf("El tercer numero que se encontro fue: %d\n", position[2]);
    printf("El cuarto numero que se encontro fue: %d\n", position[3]);
    

    return 0;
}

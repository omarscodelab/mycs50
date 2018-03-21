#include <stdio.h>
#include <cs50.h>

int main(void){

    int height = 0;

    do{
        if(height >= 0 || height <= 23){
            printf("Height: ");
        }
        else{
            printf("Retry: ");
        }
        height=get_int();
    }while(height<0 || height>23);

    for(int i = 1; i <= height; i++){
        for(int k = 1; k <= height-i; k++){
            printf(" ");
        }
        for(int j = 0;j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}
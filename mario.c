#include <cs50.h>
#include <stdio.h>

int main(void){
    int height;
    do{
    printf("What is the height of the pyramid? (0-23)\n");
    height = get_int();
    }
    while (height < 0 || height > 23);
    
    for (int i = 0; i<height; i++){
        for (int j = 0; j<height-1-i; j++){
            printf(" ");
        }
            
        for (int k = 0; k<1+i; k++){
            printf("#");
        }
        
        for (int l = 0; l<2; l++){
            printf(" ");
        }
        
        for (int m = 0; m<1+i; m++){
            printf("#");
        }
        
        printf("\n");
    }
}
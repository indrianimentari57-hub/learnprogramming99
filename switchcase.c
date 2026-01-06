/*********************************************************
* File : switchcase.c
* Author : Indriani A.M
* Date : 06/01/2025
* Description : learn switch case
/*********************************************************


#include <stdio.h>

int main(){
    int nilai;
    
    printf("Masukkan nilai : ");
    scanf("%d", &nilai);
    
    switch (nilai){
        case 1 : 
            printf("Nilai pertama");
            break;
        case 2 : 
            printf("Nilai kedua");
            break;
        default :
            printf("Pilihan tidak ada");
    }
}

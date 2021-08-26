#include "scanner.h"

int get_token(char *buffer){
    int contador = 0;
    char caracter=getchar();
    while(isspace(caracter)==0){
        if(caracter == ','){
            buffer[contador]=caracter;
            return SEP;
        }
        if(caracter == EOF){
            buffer[contador]=caracter;
            return FDT;
        }else{
            do{
                buffer[contador]=caracter;
                contador++;
                caracter=getchar();
            }while(caracter != ',' && (isspace(caracter)==0) && caracter != EOF);
            ungetc(caracter,stdin);
            return CAD;
        }
    }
    return -1;
}

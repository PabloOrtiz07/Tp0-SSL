#include "scanner.h"


int main(){
    char buffer[128];
    
    char*nombre[] = {"Fin de texto","Separador","Cadena"};

    int token=-1;

    do {
        token = get_token(buffer);
        if(token!=-1){
          printf("\n%s %s",nombre[token],buffer);
        }
        memset(buffer,'\0',128);
    }while(token != FDT);

    return 0;
}



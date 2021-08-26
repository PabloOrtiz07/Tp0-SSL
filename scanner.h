#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

enum tokens{
    //Fin de cadena
    FDT,
    //Por separador de solo la coma
    SEP,
    //Por cadena No es coma ni , ni espacio ni tabulador
    CAD
};

int get_token(char* buffer);


#endif // SCANNER_H_INCLUDED
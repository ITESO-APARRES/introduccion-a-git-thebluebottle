//
//  main.c
//  git hello
//
//  Created by Brandon Mendoza Medina on 09/10/22.
// edicion de tarea

#include <stdio.h>

int main(void) {
    decirHola("Hola brandon");
    return 0;
}
void decirHola(char* nombre) {
    printf("hola %s, ¿como estas?", nombre);
}

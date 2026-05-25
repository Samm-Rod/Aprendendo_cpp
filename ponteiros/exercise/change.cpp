//
// Created by seidx on 20/05/2026.
//

#include "change.h"
#include <iostream>



// Trocar valor de duas vaiáveis
void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Esperado:
// a = 5; b = 10
// Depois: a = 10; b = 5



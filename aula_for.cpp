//
// Created by darkside on 5/16/26.
//

#include "aula_for.h"
#include <iostream>


void  loop_for() {
    int valor;

    std::cout << "Digite um valor: ";
    std::cin >> valor;

    for (int i = 0; i <= valor; i++) {

        std::cout << i << ", ";

        if (i % 30 == 0) {
            std::cout << "Chegamos em trinta ["<< i <<"]";
        }

        if (i % 10 == 0) {
            std::cout << '\n';
        }


    }

}
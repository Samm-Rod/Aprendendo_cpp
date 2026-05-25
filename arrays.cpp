//
// Created by darkside on 5/16/26.
//

#include <iostream>
#include "arrays.h"

#include <climits>
#include <vector>

// Contagem simples de 1 a 10
void simple_count() {
    std::cout << "PROGRESSIVA" << '\n';
    for (int i = 1; i <= 10; i++) {
        std::cout << i << ", ";
    }
    std::cout << '\n';
}

void regressive_count() {
    std::cout << "REGRESSIVA" << '\n';
    for (int i = 10; 1 <= i; i--) {
        std::cout << i << ", ";
    }
}

void pares() {
    std::cout << '\n';
    std::cout << "NÚMEROS PARES" << '\n';
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            std::cout << i << ", ";
        }
    }
}

void impares() {
    std::cout << '\n';
    std::cout << "NÚMEROS ÍMPARES" << '\n';
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            std::cout << i << ", ";
        }
    }
}

void soma_cem() {
    std::cout << '\n';
    std::cout << "SOMA TODOS OS NÚMEROS DE 1 ATÉ 100" << '\n';
    int soma = 0;
    for (int i = 0; i <=100; i++) {
        soma = soma + i;
        std::cout << soma <<", ";
    }
}

void tabuada() {
    std::cout << '\n';
    std::cout << " ===== TABUADA =====" << '\n';
    int num = 0;
    std::cout << "Digite um número: ";
    std::cin >> num ;
    for (int i = 1; i <= 10; i++) {
        std::cout << num << " X " << i << " = " << (num * i) << '\n';
    }
}

void media() {
    std::cout << '\n';
    int num = 0;
    int soma = 0;
    std::cout << "*----- MÉDIA -------* "<< '\n';
    for (int i = 1; i<=5; i++) {
        std::cout << "Digite o "<< i <<"º número: ";
        std::cin >> num ;
        soma = soma + num;
    }
    std::cout << "A média de "<< soma << " = "<<(soma/5);

}

// Não consegui !
void maior_num() {

    std::cout << '\n';
    std::cout << "*----- MAIOR NÚMERO -------* "<< '\n';

    int num = 0;
    int maior = INT_MIN;

    for (int i = 1; i<=10; i++) {
        std::cout << "Digite o "<< i <<"º número: ";
        std::cin >> num ;

        if (i == 1) {
            maior = num;
        }

        if (num > maior) {
            maior = num;
        }
    }

    std::cout << "Esse foi o maior valor: "<< maior;
}

void menor_num() {

    std::cout << '\n';
    std::cout << "*----- MENOR NÚMERO -------* "<< '\n';

    int num = 0;
    int menor = 0;

    for (int i =  0; i <= 10; i++) {
        std::cout << "Digite o "<< i <<"º número: ";
        std::cin >> num ;

        if (i == 1) {
            menor = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    std::cout << "Esse foi o menor valor: "<< menor;

}
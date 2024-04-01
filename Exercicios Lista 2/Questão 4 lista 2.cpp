/*
Autor Lucas Santana 
Questão 4 lista 2 
4 - Escreva um código que imprima os seguintes desenhos: um quadrado, um círculo oval,
uma seta e um losango:
*/


#include <iostream>

void drawCircle(int radius) {
    int diameter = 2 * radius;
    for (int i = 0; i <= diameter; ++i) {
        for (int j = 0; j <= diameter; ++j) {
            int distance = (i - radius) * (i - radius) + (j - radius) * (j - radius);
            if (distance > radius * radius - 4 && distance < radius * radius + 4) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawSquare(int side) {
    drawRectangle(side, side);
}

int main() {
    std::cout << "Círculo:" << std::endl;
    drawCircle(4);
    
    std::cout << std::endl << "Retângulo:" << std::endl;
    drawRectangle(10, 5);
    
    std::cout << std::endl << "Quadrado:" << std::endl;
    drawSquare(7);
    
    return 0;
}



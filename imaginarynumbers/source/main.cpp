#include <iostream>
#include "ImaginaryNumb.h"

int main() {
    ImaginaryNumb num1(3.0f, 4.0f); // Tworzy liczbę zespoloną 3 + 4i
    ImaginaryNumb num2(1.0f, -2.0f); // Tworzy liczbę zespoloną 1 - 2i

    // Wyświetla wartości
    std::cout << "Liczba zespolona num1: " << num1.getRel() << " + " << num1.getIm() << "i" << std::endl;
    std::cout << "Liczba zespolona num2: " << num2.getRel() << " + " << num2.getIm() << "i" << std::endl;

    return 0;
}

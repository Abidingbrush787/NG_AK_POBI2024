#include "ImaginaryNumb.h"

ImaginaryNumb::ImaginaryNumb(float rel, float im) : REL(rel), IM(im) {}

ImaginaryNumb::~ImaginaryNumb() {
    // Wirtualny destruktor, potrzebny jeśli klasa będzie dziedziczona
    // Tutaj nic nie musimy robić, jeśli nie mamy dynamicznie alokowanych zasobów
}

float ImaginaryNumb::getRel() const {
    return REL;
}

void ImaginaryNumb::setRel(float rel) {
    REL = rel;
}

float ImaginaryNumb::getIm() const {
    return IM;
}

void ImaginaryNumb::setIm(float im) {
    IM = im;
}

// Tutaj implementujemy przeciążenie operatora +
ImaginaryNumb ImaginaryNumb::operator+(const ImaginaryNumb& other) const {
    return ImaginaryNumb(REL + other.REL, IM + other.IM);
}

// Tutaj implementujemy przeciążenie operatora *
ImaginaryNumb ImaginaryNumb::operator*(const ImaginaryNumb& other) const {
    return ImaginaryNumb(REL * other.REL - IM * other.IM, REL * other.IM + IM * other.REL);
}
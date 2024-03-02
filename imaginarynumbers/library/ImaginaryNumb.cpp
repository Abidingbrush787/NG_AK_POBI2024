//
// Created by aleks on 02.03.2024.
//


#include "../library/ImaginaryNumb.h"

ImaginaryNumb::ImaginaryNumb(float rel, float im) : REL(rel), IM(im) {}

ImaginaryNumb::~ImaginaryNumb() {

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



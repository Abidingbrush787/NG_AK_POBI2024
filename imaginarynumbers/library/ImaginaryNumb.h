//
// Created by aleks on 02.03.2024.
//

#ifndef IMAGINARYNUMBERS_IMAGINARYNUMB_H
#define IMAGINARYNUMBERS_IMAGINARYNUMB_H


class ImaginaryNumb {
    float REL;
    float IM;

public:
    ImaginaryNumb(float rel, float im);
    virtual ~ImaginaryNumb();

    float getRel() const;

    void setRel(float rel);

    float getIm() const;

    void setIm(float im);

    ImaginaryNumb operator+(const ImaginaryNumb& other) const;
    ImaginaryNumb operator*(const ImaginaryNumb& other) const;

};



#endif //IMAGINARYNUMBERS_IMAGINARYNUMB_H

//
// Created by pilcz_w1 on 01.03.2023.
//

class Koordinate{ //Defaultwerte für die Koordinate sind auf (0|0) gesetzt, da dies der Koordinatenursprung ist
public:

    double getY() const {
        return y;
    }
    double setY(double pY){
        y=pY;
    }
    double getX() const {
        return x;
    }
    double setX(double pX){
        x=pX;
    }


    Koordinate(double pX = 0, double pY =0){
        x=pX;
        y=pY;
    }
private:
    double x;
    double y;
};

#ifndef UNTITLED1_KOORDINATE_H
#define UNTITLED1_KOORDINATE_H

#endif //UNTITLED1_KOORDINATE_H

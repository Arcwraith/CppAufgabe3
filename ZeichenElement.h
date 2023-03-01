//
// Created by pilcz_w1 on 25.02.2023.
//
#include "math.h"
#include "ExceptionZeichen.h"
#include "Koordinate.h"
using namespace std;

class ZeichenElement {
public:
    Koordinate* koordinate;
    //Aufgabe 5: Code ist stabiler und ist wiederverwendbarer, wenn die Methoden polymorph implementiert werden

    std::string toString() const;

    double getPerimeter() const;

    double getHeight() const;

    double getSqaure() const;

    ZeichenElement(const double pX, const double pY){
        this->koordinate = new Koordinate(pX, pY);
    }
    //Konstruktor kann im Protected-Bereich definiert werden, da die Basisklasse eher ein Grundgerüst für die Subklassen dient. Konsequenz, kann nicht mehr von außerhalb der Subklassen aufgerufen werden.
private:
};


class Kreis : public ZeichenElement{
public:
    double radius;

    std::string toString() const;

    double getHeight() const{
        return 2*radius;
    }
    double getPerimeter() const{
        return 2*M_PI*radius;
    }
    double getSquare() const{
        return 2*M_PI *(radius*radius);
    }


   Kreis(double pRadius, const double pX, const double pY) : ZeichenElement(pX, pY) {
       if (pRadius <= 0)
           {
               throw ExceptionZeichen("Fehlerhafte eingabe");
           }else{
           radius=pRadius;
       }
   }
};

class Rechteck : public ZeichenElement{
public:
    double width;
    double height;
    std::string toString() const;


    double getPerimeter() const{
        return 2*(height+width);
    }
    double getSquare() const{
        return (width*height);
    }


    Rechteck(double pWidth, double pHeight, const double pX, const double pY) : ZeichenElement(pX, pY) {
      if (pWidth <= 0 || pHeight <= 0 )
      {
          throw ExceptionZeichen("Fehlerhafte eingabe");
      }else{
          width=pWidth;
          height = pHeight;
      }
  }
};

#ifndef UNTITLED1_ZEICHENELEMENT_H
#define UNTITLED1_ZEICHENELEMENT_H

#endif //UNTITLED1_ZEICHENELEMENT_H

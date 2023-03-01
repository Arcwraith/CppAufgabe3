#include <string>
#include <sstream>
#include <iomanip>
#include "ZeichenElement.h"

std::string Kreis::toString() const{
    std::stringstream s;
    s << "\nDer Kreis hat folgende Eigenschaften:"<<"\nDer Radius ist: " << radius << "\nDer Umfang ist: " << getPerimeter() << "\nDie Flaeche ist: " << getSqaure() << "\nDie X-Koord ist: "<< this->koordinate->getX() << "\nDie Y-Koord ist: " << this->koordinate->getY();
    return s.str();
}

std::string Rechteck::toString() const {
    std::stringstream s;
    s << "\nDas Rechteck hat folgende Eigenschaften:"<<"\nDie Breite ist: " <<width << "\nDie Hoehe ist: " << getHeight() <<"\nDer Umfang ist: " << getPerimeter() << "\nDie Flaeche ist: " << getSqaure()  << "\nDie X-Koord ist: "<< this->koordinate->getX() << "\nDie Y-Koord ist: " << this->koordinate->getY();
    return s.str();
}
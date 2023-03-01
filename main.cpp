#include <iostream>
#include "ZeichenElement.h"

int main() {
    //Koordinate s(0, 0, 0, 0);
    //Kreis kreis(0, 0 ,0);
    //Rechteck rechteck(0,0,0,0);

    //cout << kreis.toString() << endl;
    //cout << rechteck.toString() << endl;

    bool end = false;
    int c;
    ZeichenElement *elemente[10];
    int pointer = 0;

    cout << "Guten Tag, was wuerden Sie gerne tun: \n" << endl;
    while (!end) {
        cout << "\nMoechten Sie einen Kreis einlesen: 1"
                "\nMoechten Sie ein Rechteck einlesen: 2"
                "\nMoechten Sie die Objekte Ausgeben: 3" << endl;
        std::cin >> c;
        switch (c) {
            case 1:
                if (pointer == 9) {
                    cout << "Maximal anzahl an Elementen erreicht";
                    break;
                } else {
                    double radius;
                    double kX;
                    double kY;
                    cout << "\nSie haben sich fuer ein Kreis entschieden"
                            "\nGeben Sie bitte einen Radius ein:" << endl;
                    cin >> radius;
                    cout << "Geben Sie bitte eine X-Koordinate ein:" << endl;
                    cin >> kX;
                    cout << "Geben Sie bitte eine Y-Koordinate ein:" << endl;
                    cin >> kY;
                    try {
                        elemente[pointer] = new Kreis(radius, kX, kY);
                        pointer++;
                    } catch (ExceptionZeichen *) {
                        cout << "Ungültige Eingabe!" << endl;
                    }
                    break;
                }
            case 2:
                if (pointer == 9) {
                    cout << "Maximal anzahl an Elementen erreicht";
                    break;
                } else {
                    double pWidth;
                    double pHeight;
                    double rX;
                    double rY;

                    cout << "\nSie haben sich fuer ein Rechteck entschieden"
                            "\nGeben Sie bitte einen Breite ein:" << endl;
                    cin >> pWidth;
                    cout << "Geben Sie bitte eine Hoehe ein:" << endl;
                    cin >> pHeight;
                    cout << "Geben Sie bitte eine X-Koordinate ein:" << endl;
                    cin >> rX;
                    cout << "Geben Sie bitte eine Y-Koordinate ein:" << endl;
                    cin >> rY;
                    try {
                        elemente[pointer] = new Rechteck(pWidth, pHeight, rX, rY);
                        pointer++;
                    } catch (ExceptionZeichen *) {
                        cout << "Ungültige Eingabe!" << endl;
                    }
                    break;
                }
            case 3:
                int sort;
                cout
                        << "Die Eingabe wird beendet und die Objekte werden nun ausgegeben. "
                           "\nSollen die Objekte Sortiert: 1 oder Gemischt: 0 Ausgegeben werden?"
                        << endl;
                cin >> sort;
                if (sort == 1) {
                    cout << "Objekte werden Sortiert Ausgegeben" << endl;
                    //Ausgabe Sortiert
                    //cout << elemente[i]->toString();
                    double rectangleArea = 0.0;
                    double circleArea = 0.0;
                    for(int i = 0; i<=pointer; i++)
                    if (dynamic_cast<Rechteck*>(elemente[i]) != nullptr) {
                        rectangleArea += elemente[i]->getSqaure();
                    } else if (dynamic_cast<Kreis*>(elemente[i]) != nullptr) {
                        circleArea += elemente[i]->getSqaure();
                    }
                } else {
                    //Ausgabe Gemischt
                    cout << "Objekte werden Gemischt Ausgegeben" << endl;
                    for (int i = 0; i < pointer; i++) {
                        cout << elemente[i]->toString();
                    }
                }
                cout << "\nProgramm wird jetzt beendet" << endl;
                end = true;
                break;
            default:
                cout << "\nFehlerhafte Eingabe!" << endl;
        }
    }
    return 0;
}
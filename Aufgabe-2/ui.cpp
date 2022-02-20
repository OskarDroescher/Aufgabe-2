#include <iostream>
#include <string>
#include "Complex.h"
#include "Ui.h"
using namespace std;


void Ui::anwendung() {

    // Variablen
    /*
    double x;
    double y;
    double r;
    double phi;
    */
    string eingabeFormat = "0";
    string update = "0";
    string ausgabeFormat = "0";
    string neueBerechnung = "n";
    //Complex z1 = Complex(3, 2.3);
    z.setCoordsKar(12, 24);
    std::cout << z.toStringPol() << "\n";
    z1.setCoordsPol(34, 65);
    std::cout << z1.toStringKar();
/*
// User-Eingabe

    //Neue Berechnung
    do
    {
        // Eingabeformat wählen
        do
        {
            cout << "Fuer das Eingabeformat Kartesisch '1', fuer Polar '2' eingeben: ";
            cin >> eingabeFormat;
        } while (eingabeFormat != "1" && eingabeFormat != "2");
        cout << endl;
    
        // Kartesische Eingabe
        if (eingabeFormat == "1")
        {
            cout << "Realteil (X-Koordinate) eingeben: ";
            cin >> x;
            cout << "Imaginaerteil (Y-Koordinate) eingeben: ";
            cin >> y;
            z.setCoordsKar(x, y);
            cout << endl;

            // Werte updaten
            do
            {
                cout << "Moechten Sie den Realteil (X-Wert) anpassen? -> '1', ansonsten '2':";
                cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                cout << "Neuen Realteil (X-Koordinate) eingeben: ";
                cin >> x;
                z.setXCoord(x);
            }
            do
            {
                cout << "Moechten Sie den Imaginaerteil (Y-Wert) anpassen? -> '1', ansonsten '2':";
                cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                cout << "Neuen Imaginaerteil (Y-Koordinate) eingeben: ";
                cin >> y;
                z.setYCoord(y);
            }
            cout << endl;
        }
        // Polar Eingabe
        else if (eingabeFormat == "2")
        {
            cout << "Betrag (r) eingeben: ";
            cin >> r;
            cout << "Winkel in Grad eingeben: ";
            cin >> phi;
            z.setCoordsPol(r, phi);
            cout << endl;

            // Werte updaten
            do
            {
                cout << "Moechten Sie den Betrag (r) anpassen? -> '1', ansonsten '2':";
                cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                cout << "Neuen Betrag (r) eingeben: ";
                cin >> r;
                z.setRCoord(r);
            }
            do
            {
                cout << "Moechten Sie den Winkel anpassen? -> '1', ansonsten '2':";
                cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                cout << "Neuen Winkel in Grad eingeben: ";
                cin >> phi;
                z.setPhiCoord(phi);
            }
            cout << endl;
        }

        // Ausgabeformat wählen
        do
        {
            cout << "Wie sollen die Werte ausgegeben werden?" << "\n"
                 <<"Fuer Kartesische Darstellung '1' eingeben" << "\n"
                 << "Fuer Polar Darstellung '2' eingeben" << "\n"
                 << "Fuer Kartesische und Polar Darstellung '3' eingeben: ";
            cin >> ausgabeFormat;
        } while (ausgabeFormat != "1" && ausgabeFormat != "2" && ausgabeFormat != "3");
        cout << endl;

        if (ausgabeFormat == "1")
        {
            cout << z.toStringKar() << endl;
        }
        else if (ausgabeFormat == "2")
        {
            cout << z.toStringPol() << endl;
        }
        else if (ausgabeFormat == "3")
        {
            cout << z.toStringKarPol() << endl;
        }
        cout << endl;
        cout << "Fuer eine neue Berechnung 'j' eingeben: ";
        cin >> neueBerechnung;
        cout << endl;
    } while (neueBerechnung == "j");

    */


/*
// Statische Werte

// Objekte erstellen
    Complex z1;
    Complex z2;
    Complex z3;

// Objekte initialisieren
    z1.setCoordsPol(5, 36.8699);
    z2.setCoordsKar(3, 7);
    z3.setCoordsKar(4, 2);
    z.setCoordsKar(2.4, 21.5);


//Werte updaten
    z.setXCoord(x);
    z.setYCoord(y);
    z.setCoordsKar(x, y);
    z.setCoordsPol(r, phi);
    

// Ausgabe
    cout << z.toStringKarPol() << endl;
    cout << z.toStringKar() << endl;
    cout << z.toStringPol() << endl;
    cout << endl;

    
    z.setXCoord(3);                         // Ursprünglicher X-Wert wird geupdated, Y-Wert bleibt
    cout << "z X-Wert geupdated" << endl;
    cout << z.toStringKarPol() << endl;
    cout << z.toStringKar() << endl;
    cout << z.toStringPol() << endl;
    cout << endl;

    z.setYCoord(5.5);                       // Ursprünglicher Y-Wert wird geupdated, X-Wert schon geupdated
    cout << "z Y-Wert geupdated" << endl;
    cout << z.toStringKarPol() << endl;
    cout << z.toStringKar() << endl;
    cout << z.toStringPol() << endl;
    cout << endl;

    cout << "z1" << endl;
    cout << z1.toStringKarPol() << endl;
    cout << z1.toStringKar() << endl;
    cout << z1.toStringPol() << endl;
    cout << endl;

    cout << "z2" << endl;
    cout << z2.toStringKarPol() << endl;
    cout << z2.toStringKar() << endl;
    cout << z2.toStringPol() << endl;
    cout << endl;

    cout << "z3" << endl;
    cout << z3.toStringKarPol() << endl;
    cout << z3.toStringKar() << endl;
    cout << z3.toStringPol() << endl;
    cout << endl;
*/

}
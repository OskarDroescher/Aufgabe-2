#include <iostream>
#include <string>
#include "Complex.h"
#include "Ui.h"
using namespace std;


void Ui::anwendung() {

    // Variablen
    
    double x;
    double y;
    double r;
    double phi;
    
    string eingabeFormat = "0";
    string update = "0";
    string ausgabeFormat = "0";
    string neueBerechnung = "n";

    // Aufgabe 2
    // Objekte erstellen unter Nutzung aller möglichen Parametervarianten
     //Complex z0;
     //std::cout << z0.toStringKar() << endl;
     //std::cout << z0.toStringPol() << endl;
     //Complex z1(12);
     //Complex z2(12, 23);
     //Complex z3(12, 23, 34);
     
     // Aufgabe 5a) statisch:
    Complex z4(1.0, -2.0);
    Complex z5(1.0, 2.0);
    std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;    // CountComplex = 3 (z, z4, z5)
    z.~Complex();   // CountComplex = 2
    std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;

     Complex z6(1.0, -2.0);
     Complex z7(z6);
     std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;   // CountComplex = 3, obwohl zwei neue komplexe Zahlen (z6, z7) dazu gekommen sind.
     // Instanzen werden somit nicht korrekt gezählt

     z.~Complex();   // CountComplex = 2
     std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;
     z.~Complex();   // CountComplex = 1
     std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;
     z.~Complex();   // CountComplex = 0
     std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;
    
/*
// User-Eingabe

    //Neue Berechnung
    do
    {
        // Eingabeformat wählen
        do
        {
            std::cout << "Fuer das Eingabeformat Kartesisch '1', fuer Polar '2' eingeben: ";
            std::cin >> eingabeFormat;
        } while (eingabeFormat != "1" && eingabeFormat != "2");
        std::cout << endl;
    
        // Kartesische Eingabe
        if (eingabeFormat == "1")
        {
            std::cout << "Realteil (X-Koordinate) eingeben: ";
            std::cin >> x;
            std::cout << "Imaginaerteil (Y-Koordinate) eingeben: ";
            std::cin >> y;
            z.setCoordsKar(x, y);
            std::cout << endl;

            // Werte updaten
            do
            {
                std::cout << "Moechten Sie den Realteil (X-Wert) anpassen? -> '1', ansonsten '2':";
                std::cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                std::cout << "Neuen Realteil (X-Koordinate) eingeben: ";
                std::cin >> x;
                z.setXCoord(x);
            }
            do
            {
                std::cout << "Moechten Sie den Imaginaerteil (Y-Wert) anpassen? -> '1', ansonsten '2':";
                std::cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                std::cout << "Neuen Imaginaerteil (Y-Koordinate) eingeben: ";
                std::cin >> y;
                z.setYCoord(y);
            }
            std::cout << endl;
        }
        // Polar Eingabe
        else if (eingabeFormat == "2")
        {
            std::cout << "Betrag (r) eingeben: ";
            std::cin >> r;
            std::cout << "Winkel in Grad eingeben: ";
            std::cin >> phi;
            z.setCoordsPol(r, phi);
            std::cout << endl;

            // Werte updaten
            do
            {
                std::cout << "Moechten Sie den Betrag (r) anpassen? -> '1', ansonsten '2':";
                std::cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                std::cout << "Neuen Betrag (r) eingeben: ";
                std::cin >> r;
                z.setRCoord(r);
            }
            do
            {
                std::cout << "Moechten Sie den Winkel anpassen? -> '1', ansonsten '2':";
                std::cin >> update;
            } while (update != "1" && update != "2");
            if (update == "1")
            {
                std::cout << "Neuen Winkel in Grad eingeben: ";
                std::cin >> phi;
                z.setPhiCoord(phi);
            }
            std::cout << endl;
        }

        // Ausgabeformat wählen
        do
        {
            std::cout << "Wie sollen die Werte ausgegeben werden?" << "\n"
                 << "Fuer Kartesische Darstellung '1' eingeben" << "\n"
                 << "Fuer Polar Darstellung '2' eingeben" << "\n"
                 << "Fuer Kartesische und Polar Darstellung '3' eingeben: ";
            std::cin >> ausgabeFormat;
        } while (ausgabeFormat != "1" && ausgabeFormat != "2" && ausgabeFormat != "3");
        std::cout << endl;

        if (ausgabeFormat == "1")
        {
            std::cout << z.toStringKar() << endl;
        }
        else if (ausgabeFormat == "2")
        {
            std::cout << z.toStringPol() << endl;
        }
        else if (ausgabeFormat == "3")
        {
            std::cout << z.toStringKarPol() << endl;
        }
        std::cout << endl;
        std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist: " + to_string(z.CountComplex) << endl;
        std::cout << "Fuer eine neue Berechnung 'j' eingeben: ";
        std::cin >> neueBerechnung;
        std::cout << endl;
        if (neueBerechnung != "j") {
            z.~Complex();
            std::cout << "Die Aktuelle Anzahl der Instanzen von der Klasse 'Complex' ist:  " + to_string(z.CountComplex) << endl;
        }
    } while (neueBerechnung == "j");

    */

/* ----------------------------------------------------------------------------- */


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
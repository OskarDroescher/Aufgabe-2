#ifndef Complex_H	// Um Mehrfachdefinition auszuschließen!
#define Complex_H

class Complex
{

public:
	// Konstruktoren
	// Default-Konstruktor, der keine Parameter erwartet (wird vom Compiler erstellt
	// falls kein Konstruktor explizit angegeben wird)
	/*
	Complex() {

	}
	*/

	// Aufgabe 1a)
	/*
	Complex(double x, double y) {
		m_x = x;
		m_y = y;
		m_radius = x;
		m_phi = y;
		m_r = m_radius;
	}
	*/

	// Aufgabe 1b)
	/*
	Fehlermeldung beim Versuch eine Instanz der Complex Klasse ohne Parameter zu erstellen :
	Fehler C2280: "Ui::Ui(void)" : Es wurde versucht, auf eine gelöschte Funktion zu verweisen
	*/


	// Aufgabe 2)
	// Falls zusätzlich der Default-Konstruktor (s.o.) implementiert ist gibt der Compiler die Fehlermeldung:
	// Fehler C2535: "Complex::Complex(void)": Memberfunktion bereits definiert oder deklariert
	
	//Konstruktor mit Default-Parametern
	Complex(double x = 1.0, double y = 1.0, double radius = 1.0, double phi = 1.0, double r = 1.0) { }

	Complex(double x, double y) {
		m_x = x;
		m_y = y;
		m_radius = x;
		m_phi = y;
		m_r = m_radius;
	}


	// Koordinaten setzen Funktionen
	void setCoordsKar(double a, double b);
	void setCoordsPol(double a, double b);

	void setXCoord(double a);
	void setYCoord(double a);
	void setPhiCoord(double a);
	void setRCoord(double a);

	double getBetrag() { return m_r; }

	// Ausgabefunktionen
	std::string toStringKar();
	std::string toStringPol();
	std::string toStringKarPol();

private:
	// Variablen deklarieren
	double m_x;
	double m_y;
	double m_radius;
	double m_phi;
	double m_r;

	// Private Helperfunktionen -> Werte updaten
	void updateBetrag();
	void updateCoordsKar();
	void updateCoordsPol();
};


#endif
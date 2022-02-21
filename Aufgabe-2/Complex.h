#ifndef Complex_H	// Um Mehrfachdefinition auszuschließen!
#define Complex_H

class Complex
{

public:
	// Konstruktoren
	// Default-Konstruktor, der keine Parameter erwartet (wird vom Compiler erstellt
	// falls kein Konstruktor explizit angegeben wird)
	//Complex() {

	//}
	

	// Aufgabe 1a)
	// Standardkonstruktor
	//Complex() {
	//	m_x = 1.0;
	//	m_y = 1.0;
	//	m_radius = 1.0;
	//	m_phi = 1.0;
	//	m_r = m_radius;
	//}
	//Complex(double x, double y) {
	//	m_x = x;
	//	m_y = y;
	//}
	//Complex(double x, double y, double m_radius) {
	//	m_radius = x;
	//	m_phi = y;
	//	m_r = m_radius;
	//}
	
	// Aufgabe 1b)
	/*
	Fehlermeldung beim Versuch eine Instanz der Complex Klasse ohne Parameter zu erstellen :
	Fehler C2280: "Ui::Ui(void)" : Es wurde versucht, auf eine gelöschte Funktion zu verweisen
	Warnung	C26495	Die Variable "Complex::m_y" ist nicht initialisiert. Eine Membervariable muss immer initialisiert werden
	*/


	// Aufgabe 2)
	// Falls zusätzlich der Default-Konstruktor (s.o.) implementiert ist gibt der Compiler die Fehlermeldung:
	// Fehler C2280: "Ui::Ui(void)" : Es wurde versucht, auf eine gelöschte Funktion zu verweisen
	//Konstruktor mit Default-Parametern:
	// Weist, wenn keine Werte angegeben sind beim erstellen eines Objektes in der ui.cpp den Attributen
	// den Wert 1.0 zu
	//Complex(double x = 1.0, double y = 1.0, double radius = 1.0, double phi = 1.0, double r = 1.0) {
	//	m_x = x;
	//	m_y = y;
	//	m_radius = radius;
	//	m_phi = phi;
	//	m_r = m_radius;
	//}


	static int CountComplex;


	// Aufgabe 3
	Complex(double x = 1.0, double y = 1.0, double radius = 1.0, double phi = 1.0, double r = 1.0) : m_x(x), m_y(y), m_radius(radius), m_phi(phi), m_r(m_radius) {
		m_x = x;
		m_y = y;
		m_radius = radius;
		m_phi = phi;
		m_r = m_radius;
		CountComplex++;
	}


	~Complex() {
		CountComplex--;
	};

	// Koordinaten setzen Funktionen
	void setCoordsKar(double a, double b);
	void setCoordsPol(double a, double b);

	void setXCoord(double a);
	void setYCoord(double a);
	void setPhiCoord(double a);
	void setRCoord(double a);

	double getBetrag() { return m_r; }

	// Ausgabefunktionen
	std::string toStringKar() const;	// Aufgabe 4: const Memberfunktion
	std::string toStringPol() const;	// Aufgabe 4: const Memberfunktion
	std::string toStringKarPol() const;	// Aufgabe 4: const Memberfunktion

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
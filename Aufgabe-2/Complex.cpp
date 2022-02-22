#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include "Complex.h"

int Complex::CountComplex = 0;

// Koordinaten setzen Funktionen
void Complex::setXCoord(double a) {
    m_x = a;
    updateBetrag();
    updateCoordsPol();
}

void Complex::setYCoord(double a) {
    m_y = a;
    updateBetrag();
    updateCoordsPol();
}

void Complex::setCoordsKar(double x, double y) {
    m_x = x;
    m_y = y;
    updateBetrag();
    updateCoordsPol();
}

void Complex::setCoordsPol(double x, double y) {
    m_radius = x;
    m_phi = y;
    m_r = m_radius;
    updateCoordsKar();
}

void Complex::setRCoord(double a) {
    m_radius = a;
    m_r = m_radius;
    updateCoordsKar();
}

void Complex::setPhiCoord(double a) {
    m_phi = a;
    updateCoordsKar();
}

//Muiltiplikationsoperator als Memberfunktion
Complex Complex::operator*=(Complex c) {
    double x = m_x * c.getReal() - m_y * c.getImag();   // [z9(x)*z10(x) + z9(y)*z10(y)]
    double y = m_y * c.getReal() + c.getImag() * m_x;   // [z9(y)*z10(x) + z10(y)*z9(x)]
    m_x = x;
    m_y = y;
    return *this;       // this pointer zeigt auf das Objekt selbst
}


// Private Helperfunktionen -> Werte updaten
void Complex::updateCoordsKar() {
    m_x = m_radius * cos(m_phi * M_PI / 180);
    m_y = m_radius * sin(m_phi * M_PI / 180);
}

void Complex::updateCoordsPol() {
    m_radius = m_r;
    m_phi = atan2(m_y, m_x) * 180 / M_PI;
}

void Complex::updateBetrag() {
    m_r = sqrt(m_x * m_x + m_y * m_y);
}


// Ausgabefunktionen
std::string Complex::toStringKar() const {
    std::stringstream ausgabe;
    ausgabe << "Kartesisch: z = " << m_x << " + i" << m_y;
    return ausgabe.str();
}

std::string Complex::toStringPol() const {
    std::stringstream ausgabe;
    ausgabe << "Polar: z = " << m_radius << "(cos " << m_phi << " + i sin " << m_phi << ")";
    return ausgabe.str();
}

std::string Complex::toStringKarPol() const {
    std::stringstream ausgabe;
    ausgabe << "Kartesisch: z = " << m_x << " + i" << m_y << "\n"
        "Polar: z = " << m_radius << "(cos " << m_phi << " + i sin " << m_phi << ")";
    return ausgabe.str();
}

std::string Complex::toStringMult() const {
    std::stringstream ausgabe;
    ausgabe << "Produkt: z = " << m_x << " + i" << m_y;
    return ausgabe.str();
}
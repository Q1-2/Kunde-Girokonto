#include <iostream>
#include <string>
#include "Kunde.h"
#include "Girokonto.h"

using namespace std;

int main()
{
	Kunde* kM = new Kunde(1, "Mueller");
	Kunde* kS = new Kunde(2, "Schmidt");
	Girokonto* gM = new Girokonto(kM, 123, 200);
	Girokonto* gS = new Girokonto(kS, 321, 0);

	kM->hinzufuegenGirokonto(gM);
	kS->hinzufuegenGirokonto(gS);

	gM->einzahlen(200);

	cout << "Mueller Kontostand: " << gM->getKontostand() << endl;	// Soll Kontostand: 200
	cout << "Schmidt Kontostand: " << gS->getKontostand() << endl;	// Soll Kontostand: 0

	// Sequenzdiagramm
	// To Do

	// Test:
	cout << "Mueller Kontostand: " << gM->getKontostand() << endl;	// Soll Kontostand: 0
	cout << "Schmidt Kontostand: " << gS->getKontostand() << endl;	// Soll Kontostand: 200
}

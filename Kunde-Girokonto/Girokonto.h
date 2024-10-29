#pragma once

class Kunde;

class Girokonto
{
private: 
	int ktNr;
	double kontostand;
	double dispo;
    Kunde* kontoinhaber;

public: 
    Girokonto(Kunde* kunde, int ktoNr, double dispo) {
        kontoinhaber = kunde;
        ktNr = ktNr;
		kontostand = 0;
		this->dispo = dispo;
	}
    
    double getKontostand() {
        return kontostand;
    }

    void setKontostand(double kontostandNeu) {
        kontostand = kontostandNeu;
    }
    

    // Sequenzdiagramm

    bool ueberweisen(Girokonto* empfaenger, double betrag) {
        bool ueberwiesen = true;
        //To Do

        return ueberwiesen;
    }

    bool auszahlen(double betrag) {
        bool deckung = true;
        //To Do

        return deckung;
    }

    void einzahlen(double betrag) {
        kontostand += betrag;
    }
};


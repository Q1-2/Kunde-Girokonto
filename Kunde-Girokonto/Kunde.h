#pragma once
#include <string>
#include <list>

using namespace std;

class Girokonto;

class Kunde
{
private:
	int kdNr;
	string name;
	list<Girokonto*> konten;

public:
	Kunde(int kdNr, string name) {
		this->kdNr = kdNr;
		this->name = name;
	}

	list<Girokonto*>& getKonten() {
		return konten;
	}

	void hinzufuegenGirokonto(Girokonto* gk) {
		konten.push_back(gk);
	}


};


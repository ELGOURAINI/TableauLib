#include "pch.h"
#include "Header.h"
#include <iostream>
#include <assert.h>
using namespace Geom;
using namespace std;

Geom::Tableau::Tableau(unsigned int T)
{
	this->taille = T;
	Tab = new int[T];
}

Geom::Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	if (this->Tab)
	{
		delete[] this->Tab;
		this->Tab = 0;
	}
	this->Tab = new int[this->taille];
	for (unsigned int i = 0; i < this->taille; i++) {
		this->Tab[i] = T.Tab[i];
	}
}

Geom::Tableau::~Tableau()
{
	delete[] Tab ;
	Tab = 0;
}

int Geom::Tableau::remplir(int i)
{
	cout << "val" << i << "=";
	cin >> this->Tab[i];
	return this->Tab[i];
}


Tableau& Geom::Tableau::operator=(const Tableau& T)
{
	if (this != &T)
	{
		this->taille = T.taille;
		this->Tab = new int[this->taille];
		for (unsigned int i = 0; i < this->taille; i++) {
			this->Tab[i] = T.Tab[i];
		}
	}
	return *this;
}

void Geom::Tableau::print() const
{
	for (unsigned int i = 0; i < this->taille; i++)
	{
		cout << "T[" << i << "]=" << this->Tab[i] <<endl;
	}
}

int& Geom::Tableau::operator[](unsigned indice)
{
	//int Val;
	assert(indice >= 0 && indice < this->taille);
	//Val = this->remplir(indice);
	//this->Tab[indice] = Val;
	return this->Tab[indice];

	try
	{
		if (indice < 0 || indice >= 3) throw "rang error";
		return this->Tab[indice];
	}
	catch (char* e)
	{
		cout << e << endl;
	}
}





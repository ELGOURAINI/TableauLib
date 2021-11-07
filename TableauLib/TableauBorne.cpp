#include "pch.h"
#include "TableauBorne.h"
#include <iostream>
#include <assert.h>
using namespace Geom;
using namespace std;

Geom::TableauBorne::TableauBorne(int T, float S, float I):Tableau(T)
{
	this->sup = S;
	this->inf = I;
}

int& Geom::TableauBorne::operator[](unsigned indice )
{
	assert(indice >= 0 && indice < this->taille);
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

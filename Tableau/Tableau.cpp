#include "pch.h"
#include <iostream>
#include "Header.h"
using namespace Geom;
using namespace std;

int main()
{
    Tableau T(2);
    //cout << T.taille;
    for (int i = 0; i < 2; i++)
        T.remplir(i);
    T.print();
    Tableau *T1=&T;
    T1->print();
    T1[1] = 8;
    T1->print();
    delete(T1);
}


#pragma once
namespace Geom
{
	class Tableau
	{

	protected:
		int* Tab;
		unsigned int taille;

	public:
		Tableau(unsigned int T);
		Tableau(const Tableau&);
		~Tableau();
		int remplir(int);
		Tableau& operator=(const Tableau& );
		void print() const;
	private:
		int& operator[](unsigned indice);


	};
};

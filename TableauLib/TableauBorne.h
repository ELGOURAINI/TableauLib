#pragma once
#include "Header.h"
namespace Geom
{
	class TableauBorne :protected Tableau
	{
		private:
			float sup;
			float inf;
		public:
			TableauBorne(int, float, float);
			int& operator[](unsigned indice);
	};
}



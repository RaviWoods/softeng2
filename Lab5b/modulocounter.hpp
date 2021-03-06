#ifndef MODULOCOUNTER_H
#define MODULOCOUNTER_H
#include "../libs.h"
#include "counter.hpp"

class ModuloCounter : public Counter {
	public:
		ModuloCounter(int m = 0);
		bool increment();
		
	private: 
		int modulo;
};
#endif
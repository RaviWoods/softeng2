#ifndef MODULOCOUNTER_H
#define MODULOCOUNTER_H
#include "../libs.h"
#include "counter.hpp"

class ModuloCounter : public Counter {
	public:
		ModuloCounter(int m = 0);
		bool increment();
		std::string str(bool mod = false) const;
	private: 
		int modulo;
};
#endif

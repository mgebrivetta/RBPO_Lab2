#include <iostream>
#include "func.h"

double y = 5;
double r = 0;

namespace Mgebrshvili {
	void f() {
		r = (cos(y) + sin(y)) / (cos(y) - sin(y));
	}
}

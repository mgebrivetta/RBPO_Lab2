#include <iostream>
#include "func.h"
using namespace std;

double y = 5;
double result = 0;
void f() {
	result = (cos(y) + sin(y)) / (cos(y) - sin(y));
}
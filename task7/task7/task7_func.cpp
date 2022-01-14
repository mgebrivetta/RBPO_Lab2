#include <cmath>

static double x = 5;
static double res;

static void f() {
    res = (cos(x) + sin(x)) / (cos(x) - sin(x));
}
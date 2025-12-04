#include <stdio.h>
#include <math.h>
int main() {
double degrees = 45;

double radians = degrees * (3.1416/180);

double ratio = 1/ sin(radians);

printf("The ratio of the slit width to the wavelength for first diffraction minimum at %.1f degrees is: %.3f\n",
degrees, ratio);

return 0;
}
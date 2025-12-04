#include <stdio.h>
#include <math.h>
int main() {
    /**
      Finding the M-th order maxima using the formula: 
      M = dsinθ / λ
    **/

    double wl , angle, d; 

    printf("Please enter the wavelength , angle and distance between slits: ");

    scanf("%lf %lf %lf", &wl , &angle, &d); 

    if (wl < 380 || wl > 750) {

        printf("Out of the range. Please enter a valid number.\n");
    }
    else{
         double wl2 = wl/1000000000;  

         double d2  = d/1000000; 

        double angle2 = angle*(3.1416 / 180);

        int M = (d2 * sin(angle2)) / wl2;

        printf ("M-th order maxima: %d\n", M); 
    }
    

    return 0;
}
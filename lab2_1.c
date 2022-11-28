/*lab 2.1*/
#include <stdio.h>
#include <math.h>
# define M_E 2.7182818284590452354

int main() {
    float x, y;
    for (x = 0.2; x <= 0.5; x += 0.01) {
        if (x < 0.3) {
            y = -log(pow(x, 2)) + pow(M_E, x);
            printf("%.4f\n", y);
        }
        else if (x >= 0.3, x <= 0.4) {
            y = 1 / tan(pow(x, 2) + 4);
            printf("%.4f\n", y);
        }
        else {
            y = tan(pow(x, 2) + 1);
            printf("%.4f\n", y);
        }
    }
}

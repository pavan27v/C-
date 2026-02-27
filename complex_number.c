#include <stdio.h>
#include <math.h>

int main(void) {
    double real, imag;

    printf("Enter real part: ");
    if (scanf("%lf", &real) != 1) {
        printf("Invalid input for real part.\n");
        return 1;
    }

    printf("Enter imaginary part: ");
    if (scanf("%lf", &imag) != 1) {
        printf("Invalid input for imaginary part.\n");
        return 1;
    }

    double magnitude = sqrt(real * real + imag * imag);

    printf("Complex number: %.2f %+.2fi\n", real, imag);
    printf("Magnitude: %.4f\n", magnitude);
    printf("Conjugate: %.2f %+.2fi\n", real, -imag);

    return 0;
}

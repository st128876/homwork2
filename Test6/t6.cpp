#include <iostream>;
#include <math.h>
#include <cmath>

using namespace std;
int main(int argc, char* argv[])
{

    float a = 0;
    float b = 0;
    float c = 0;

    scanf_s("%f %f %f", &a, &b, &c);

    float desk = (b * b) - (4 * a * c);

    if (a == 0) {
        printf("1\n");
        printf("%f", (-c / b));
    }
    else if (-a == c) {
        printf("-1");
    }
    else if (b == 0) {
        printf("0");
    }
    else if (desk < 0) {
        printf("0");
    }
    else if (desk == 0) {
        printf("1\n");
        printf("%f", (-b / (2 * a)));
    }
    else if (desk > 0) {
        printf("2\n");
        printf("%f\n", ((-b - sqrt(desk)) / (2 * a)));
        printf("%f", ((-b + sqrt(desk)) / (2 * a)));
    }

    return EXIT_SUCCESS;
}
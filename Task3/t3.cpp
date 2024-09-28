#include <iostream>;
#include <math.h>
#include <cmath>

using namespace std;
int main(int argc, char* argv[])
{

    float x1 = 0;
    float m1 = 0;
    float r1 = 0;
    float x2 = 0;
    float m2 = 0;
    float r2 = 0;

    scanf_s("%f %f %f", &x1, &m1, &r1);
    scanf_s("%f %f %f", &x2, &m2, &r2);

    float rast = sqrt(((x2 - x1) * (x2 - x1)) + ((m2 - m1) * (m2 - m1)));

    if (((rast < (r1 + r2)) or (rast == (r1 + r2))) and ((rast + r1) > r2 or (rast + r1) == r2) and ((rast + r2) > r1 or (rast + r2) == r1)) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return EXIT_SUCCESS;
}
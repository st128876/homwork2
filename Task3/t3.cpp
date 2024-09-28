#include <iostream>;
#include <math.h>
#include <cmath>

using namespace std;
int main(int argc, char* argv[])
{

    int x1 = 0;
    int m1 = 0;
    int r1 = 0;
    int x2 = 0;
    int m2 = 0;
    int r2 = 0;

    scanf_s("%d %d %d", &x1, &m1, &r1);
    scanf_s("%d %d %d", &x2, &m2, &r2);

    double rast = sqrt(((x2 - x1) * (x2 - x1)) + ((m2 - m1) * (m2 - m1)));

    if ((rast < (r1 + r2)) or (rast == (r1 + r2)) and ((rast + r1) > r2 or (rast + r1) == r2) and ((rast + r2) > r1 or (rast + r2) == r1)) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return EXIT_SUCCESS;
}
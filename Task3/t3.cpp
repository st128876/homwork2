#include <iostream>;
#include <math.h>
#include <cmath>

using namespace std;
int main(int argc, char* argv[])
{

    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;

    scanf_s("%d %d %d", &x1, &y1, &r1);
    scanf_s("%d %d %d", &x2, &y2, &r2);

    float rast = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    if ((rast < (r1 + r2)) or (rast == (r1 + r2)) and ((rast + r1) > r2 or (rast + r1) == r2) and ((rast + r2) > r1 or (rast + r2) == r1)) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return EXIT_SUCCESS;
}
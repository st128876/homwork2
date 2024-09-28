#include <iostream>;
#include <math.h>
#include <cmath>

using namespace std;
int main(int argc, char* argv[])
{

    int a1 = 0;
    int b1 = 0;
    int h1 = 0;
    int a2 = 0;
    int b2 = 0;
    int h2 = 0;
    int ac = 0;
    int bc = 0;
    int hc = 0;

    scanf_s("%d %d %d", &a1, &b1, &h1);
    scanf_s("%d %d %d", &a2, &b2, &h2);
    scanf_s("%d %d %d", &ac, &bc, &hc);

    if (max(h1, h2) <= hc) {

        if ((a2 + b1) <= max(ac, bc) and max(a1, b2) <= min(ac, bc)) {
            printf("YES");
        }
        else if ((a2 + b1) <= min(ac, bc) and max(a1, b2) <= max(ac, bc)) {
            printf("YES");
        }
        else if ((a1 + b2) <= max(ac, bc) and max(a2, b1) <= min(ac, bc)) {
            printf("YES");
        }
        else if ((a1 + b2) <= min(ac, bc) and max(a2, b1) <= max(ac, bc)) {
            printf("YES");
        }

        else if ((a1 + a2) <= max(ac, bc) and max(b2, b1) <= min(ac, bc)) {
            printf("YES");
        }
        else if ((a2 + a1) <= min(ac, bc) and max(b2, b1) <= max(ac, bc)) {
            printf("YES");
        }
        else if ((b2 + b1) <= max(ac, bc) and max(a2, a1) <= min(ac, bc)) {
            printf("YES");
        }
        else if ((b2 + b1) <= min(ac, bc) and max(a2, a2) <= max(ac, bc)) {
            printf("YES");
        }

        else if (h1 + h2 <= hc) {
            if ((max(a1, b1) <= max(ac, bc) and min(a1, b1) <= min(ac, bc)) and (max(a2, b2) <= max(ac, bc) and min(a2, b2) <= min(ac, bc))) {
                printf("YES");
            }
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
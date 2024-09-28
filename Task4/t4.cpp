#include <iostream>;
#include <math.h>
#include <cmath>

using namespace std;


static int max3(int a1, int b1, int c1) {
    return max(max(a1, b1), c1);
}


static int min3(int a1, int b1, int c1) {
    return min(min(a1, b1), c1);
}


int main(int argc, char* argv[])
{


    int a = 0;
    int b = 0;
    int c = 0;
    int x = 0;
    int y = 0;
    int h = 0;

    scanf_s("%d %d %d", &a, &b, &c);
    scanf_s("%d %d %d", &x, &y, &h);

    int sr1 = a + b + c - max3(a, b, c) - min3(a, b, c);
    int sr2 = x + y + h - max3(x, y, h) - min3(x, y, h);

    //int rast = pow(((x - a) * (x - a)) + ((y - b) * (y - b)), 0.5);

    if ((min3(a, b, c) < min3(x, y, h) and max3(a, b, c) <= max3(x, y, h) and sr1 <= sr2) or (min3(a, b, c) <= min3(x, y, h) and max3(a, b, c) < max3(x, y, h) and sr1 <= sr2) or (min3(a, b, c) <= min3(x, y, h) and max3(a, b, c) <= max3(x, y, h) and sr1 < sr2)) {
        printf("The first box is smaller than the second one");
    }
    else if ((min3(a, b, c) > min3(x, y, h) and max3(a, b, c) >= max3(x, y, h) and sr1 >= sr2) or (min3(a, b, c) >= min3(x, y, h) and max3(a, b, c) > max3(x, y, h) and sr1 >= sr2) or (min3(a, b, c) >= min3(x, y, h) and max3(a, b, c) >= max3(x, y, h) and sr1 > sr2)) {
        printf("The first box is larger than the second one");
    }
    else if (min3(a, b, c) == min3(x, y, h) and sr1 == sr2 and max3(a, b, c) == max3(x, y, h)) {
        printf("Boxes are equal");
    }
    else {
        printf("Boxes are incomparable");
    }

    return EXIT_SUCCESS;
}
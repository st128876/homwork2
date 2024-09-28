#include <iostream>;
#include <math.h>

int main(int argc, char* argv[])
{

    int a = 0;
    int b = 0;
    /*int c = 0;
    int d = 0;*/
    scanf_s("%d %d", &a, &b);
    //scanf_s("%d %d", &c, &d);


    if (a == 1 and b == 1) {
        printf("0");
    }
    else if (a == b) {
        printf("2");
    }
    else {
        printf("1");
    }

    //printf("%d %d", a * 2, b * 2);
    return 0;
}
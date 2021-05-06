
#include <iostream>


extern "C" void CalculateSum(int a, int b, int c, int* s1, int* s2, int* s3);
int main()
{
    int a = 2, b = 3, c = 4;
    int s1, s2, s3;
    
    CalculateSum(a, b, c, &s1, &s2, &s3);
    printf("Input a:\t%4d\tb:\t%4d\tc:\t%4d\n", a, b, c);
    printf("Input sum:\t%4d\tsquare:\t%4d\tcube:\t%4d\n", s1, s2, s3);

    return 0;
}

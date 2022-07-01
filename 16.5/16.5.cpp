#include <iostream>
#include <time.h>

int main()
{
    const int n = 13;
    int a[n][n];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = i + j;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }


    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    std::cout << (a[buf.tm_mday % n][0]*2+n-1)/2*n;
}
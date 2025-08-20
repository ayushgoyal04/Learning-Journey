#include<bits/stdc++.h>
using namespace std;
#include <cstdio>

int main()
{
    int n, a, g;
    scanf("%d", &n);

    int A(0);
    while (n--)
    {
        scanf("%d%d", &a, &g);
        A += a;
        if (A <= 500)
        {
            printf("A");
        }
        else
        {
            A -= 1000;
            printf("G");
        }
    }
    printf("\n");

    return 0;
}
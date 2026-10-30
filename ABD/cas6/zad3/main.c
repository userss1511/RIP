#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f0 = 1;
    int f1 = 1;
    int f2;

    for(int i = 1; i < n; i++) {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
   printf("%d", f2);
    return 0;
}

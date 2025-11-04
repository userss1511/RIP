#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f0 = 1;
    int f1 = 1;
    int f2;

    for(int i = 0; i < n-1; i++){
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }

    printf("%d\n", f2);
    return 0;
}

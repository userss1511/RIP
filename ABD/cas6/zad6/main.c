#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int d = 1; d <= n; d++) {
        if(n % d == 0) {
            printf("%d ", d);
        }

    }
    printf("\n");
    return 0;
}

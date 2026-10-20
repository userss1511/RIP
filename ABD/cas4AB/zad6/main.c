#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a < b) {
        printf("%d\n", a);
    }
    else { // a == b ili a > b
        printf("%d\n", b);
    }

    return 0;
}

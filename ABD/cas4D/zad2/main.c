#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int j = n % 10;  // cifra jedinica
    int d = (n / 10) % 10; // cifra desetica
    int s = n / 100;  // cifra stotina

    int zbir = j + d + s;
    printf("%d\n", zbir);

    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///U kafiću možete kupiti ili 3 kugle sladoleda ili 5 kugli sladoleda. Da li je moguće kupiti tačno N kugli sladoleda?

    int N;
    scanf("%d", &N);

    int tmp = N;
    int moze = 0;

    while (tmp >= 0) {
        if (tmp % 5 == 0) {
            moze = 1;
            break;
        }
        tmp -= 3;
    }

    if (moze)
        printf("MOZE tacno %d kugli.\n", N);
    else
        printf("NE MOZE tacno %d kugli.\n", N);

    return 0;
    return 0;
}

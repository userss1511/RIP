#include <stdio.h>
#include <stdlib.h>

int main()
{
   ///Dimenzije pravougaonika su 543 i 130. Koliko kvadrata stranice 65 je moguće izrezati iz tog pravougaonika?
    int a = 543;
    int b = 130;
    int s = 65;
    int br_po_duzoj, br_po_kracoj, ukupno;

    br_po_duzoj = a / s;
    br_po_kracoj = b / s;

    ukupno = br_po_duzoj * br_po_kracoj;

    printf("%d\n", ukupno);


    return 0;
}

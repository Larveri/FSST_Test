#include <stdio.h>

int main()                                          //ich wollte int leet() in int main() machen weil ohne main man nicht linken kann, aber ging leider nicht.. (der code funktioniert nur in int main())
{
    printf("Test schreiben\n>>\n");
    int e = 3;
    char a = 'd';
    printf("T%dst schr%dib%dn", e, e, e);
    scanf("d", &a);
    printf("\nso viele E's ersetzt: %d", a);
    return 0;
}


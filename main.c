#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
   int n;
   char bufor[20];
   fflush(stdin);
   fflush(stdout);
   SetConsoleOutputCP(CP_UTF8);

    printf("Podaj liczbę: ");
    scanf("%d", &n);

    printf("W zapisie przy postawie 2: %s\n\n", itoa(n, bufor, 2));
    printf("W zapisie przy postawie 4: %s\n\n", itoa(n, bufor, 4));
    printf("W zapisie przy postawie 8: %s\n\n", itoa(n, bufor, 8));
    printf("W zapisie przy postawie 13: %s\n\n", itoa(n, bufor, 13));
    printf("W zapisie przy postawie 16: %s\n\n", itoa(n, bufor, 16));

    system("pause");
    return 0;
}

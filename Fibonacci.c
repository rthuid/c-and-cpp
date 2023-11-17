#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int n, f1 = 0, f2 = 1, f3, i = 2;
    // clrscr()
    system("cls"); // for windows
    printf("enter the limit");
    scanf("%d", &n);
    printf("\nthe fibonacci series\n");
    printf("%d\n%d\n", f1, f2);
    while (i < n)
    {
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
        printf("%d\n", f3);
        i = i + 1;
    }
    getch();
}

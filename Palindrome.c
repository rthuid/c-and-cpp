#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char str[30];
    char *p, *t;

    // clrscr()
    system("cls"); // for windows
    printf("Enter any string :");
    gets(str);
    for (p = str; *p != NULL; p++)
        ;
    for (t = str; p--; p >= t)
    {
        if (*p == *t)
        {
            p--;
            t++;
        }
        else
            break;
    }
    if (t > p)
        printf("\n string is palindrome");
    else
        printf("\n string is not palindrome");
    getch();
    return 0;
}
// 1991, 1961
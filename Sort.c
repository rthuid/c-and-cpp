#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int a[10], i, j, temp = 0;

    // clrscr()
    system("cls"); // for windows
    printf("Enter all the 10 numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The ordered array is:  \n");
    for (j = 0; j < 10; j++)
        printf("%d\t", a[j]);
    getch();
    return 0;
}

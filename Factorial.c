#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h> 

float fact(int);

void main()
{
    float f;
    int n;
    // clrscr()
    system("cls"); // for windows
    
    printf("Enter the number: \n");
    scanf("%d", &n);
    
    f = fact(n);
    
    printf("Factorial is: %f", f);
    
    getch();
}

float fact(int n)
{
    int i;
    float f = 1;
    
    if(n == 0)
    {
        f = 1;
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            f = f * i;
        }
    }

    return f;
}
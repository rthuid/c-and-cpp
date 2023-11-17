#include <iostream>
#include <conio.h>
#include <stdlib.h>

const int size = 10;

class stack
{
private:
    int top;
    int item[size];

public:
    stack()
    {
        top = -1;
    }

    ~stack()
    {
        // No need to delete item, it's not dynamically allocated
    }

    void create();
    void push();
    void pop();
    void display();
};

void stack::create()
{
    int n, i;
    std::cout << "Enter how many elements" << std::endl;
    std::cin >> n;
    if (n >= size)
        std::cout << "stack can hold only " << size - 1 << " elements" << std::endl;
    else
    {
        std::cout << "Enter the element" << std::endl;
        for (i = 0; i < n; i++)
            std::cin >> item[++top];
    }
}

void stack::push()
{
    int elem;
    if (top == size - 1)
        std::cout << "stack overflow" << std::endl;
    else
    {
        std::cout << "Enter the element to be pushed" << std::endl;
        std::cin >> elem;
        top++;
        item[top] = elem;
    }
}

void stack::pop()
{
    if (top < 0)
        std::cout << "stack underflow" << std::endl;
    else
    {
        std::cout << "popped element is " << item[top] << std::endl;
        top--;
    }
}

void stack::display()
{
    if (top < 0)
        std::cout << "stack is empty" << std::endl;
    else
    {
        std::cout << "elements of stack are " << std::endl;
        for (int i = top; i >= 0; i--)
            std::cout << item[i] << std::endl;
    }
}

int main()
{
    char ch;
    stack s;

    do
    {
        std::cout << "MAIN MENU" << std::endl;
        std::cout << "===========" << std::endl;
        std::cout << "1. create a stack" << std::endl;
        std::cout << "2. push" << std::endl;
        std::cout << "3. pop" << std::endl;
        std::cout << "4. display" << std::endl;
        std::cout << "5. exit" << std::endl;
        std::cout << "enter your choice" << std::endl;
        std::cout << "===========" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            s.create();
            break;
        case 2:
            s.push();
            break;
        case 3:
            s.pop();
            break;
        case 4:
            s.display();
            break;
        case 5:
            exit(0);
            break;
        default:
            std::cout << "invalid choice" << std::endl;
        }

        std::cout << "to continue: press 'y' " << std::endl;
        std::cin >> ch;

    } while (ch == 'y');

    getch();  // Assuming getch() is provided by your environment
    return 0;
}

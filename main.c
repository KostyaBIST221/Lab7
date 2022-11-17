#include <stdio.h>
#include <math.h>

void task1(){
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);//считывание с консоли
    switch (c)
    {
        case '1':
    printf("Это цифра.\n");
    break;
        case '2':
    printf("Это цифра.\n");
    break;
        case '3':
    printf("Это цифра.\n");
    break;
        case '4':
    printf("Это цифра.\n");
    break;
        case '5':
    printf("Это цифра.\n");
    break;
        case '6':
    printf("Это цифра.\n");
    break;
        case '7':
    printf("Это цифра.\n");
    break;
        case '8':
    printf("Это цифра.\n");
    break;
        case '9':
    printf("Это цифра.\n");
    break;
        case '0':
    printf("Это цифра.\n");
    break;
        default:
        printf("Это буква.\n");
    }
}

void task2(){
    char c;
    float x,y;
    printf("Введите пример: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
        case '+':
            printf("=%0.0f", x+y);
            break;
        case '-':
            printf("=%0.0f", x-y);
            break;
        case '*':
            printf("=%0.2f", x*y);
            break;
        case '/':
            printf("=%0.2f", x/y);
            break;
        case '**':
            printf("=%f", pow(x,y));
            break;
            
    }
    
}

void task3(){
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    switch (c)
    {
        default:
            printf("Не правильно\n");
            break;
        case '+':
            printf("Сложение\n");
            break;
        case '-':
            printf("Вычетание\n");
            break;
        case '*':
            printf("Умножение\n");
            break;
        case '/':
            printf("Деление\n");
            break;
    }
}

int main()
{
    task3();
}

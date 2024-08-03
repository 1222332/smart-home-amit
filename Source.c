#include<stdio.h>
#include "Header1.h
#include " calc.h""


int main()
{
    add(1, 3);
    int value = 0;

    setter(10);
    value = getter();
    printf("%d\n", value);
    value = getter();
    setter(20);
    value = getter();

    printf("%d\n", value);

    value = getter();
    setter(110);

    value = getter();

    printf("%d\n", value);

    //printf("%d", motor);
   /* void setter_motor_st()
    {
        scanf_s("%d", motor);
        printf("%d", motor);
    }*/
}
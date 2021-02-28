#include <stdio.h>
/**
* main - el bulcue infinito es causado porque
* el ciclo while no tiene aumento
* Return: 0
*
*
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
/*
* while (i < 10) el ciclo while no tiene aumento
* y por eso causa el ciclo infinito, se debe aumentar
* debajo de putchar(i);
*/
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    //int len;
    //int len2;
    //unsigned int ui;
    //void *addr;
    int x;
    

    //len = _printf("Let's try to printf a simple sentence.\n");
    //len2 = printf("Let's try to printf a simple sentence.\n");
    //ui = (unsigned int)INT_MAX + 1024;
    //addr = (void *)0x7ffe637541f0;
    // x = _printf("Length:[%d, %i]\n", len, len);
    //printf("%d\n", x);
    //x = _printf("Negative:[%d]\n", -762534);
    //printf("%d\n", x);
    //x = printf("Negative:[%d]\n", -762534);
    //printf("%d\n", x);
    //x = _printf("Unsigned:[%u]\n", ui);
    //printf("%d\n", x);
    //x = printf("Unsigned:[%u]\n", ui);
    //printf("%d\n", x);
    //x = _printf("Unsigned octal:[%o]\n", ui);
    //printf("%d\n", x);
    //x = printf("Unsigned octal:[%o]\n", ui);
    //printf("%d\n", x);
    //x = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    //printf("%d\n", x);
    //x = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    //printf("%d\n", x);
    x = _printf("Character:[%c]\n", 'H');
    printf("%d\n", x);
    x = printf("Character:[%c]\n", 'H');
    printf("%d\n", x);
    x = _printf("String:[%s]\n", "I am a string !");
    printf("%d\n", x);
    x = printf("String:[%s]\n", "I am a string !");
    printf("%d\n", x);
    //x = _printf("Address:[%p]\n", addr);
    //printf("%d\n", x);
    //x = printf("Address:[%p]\n", addr);
    //printf("%d\n", x);
    x = _printf("Percent:[%%]\n");
    printf("%d\n", x);
    x = printf("Percent:[%%]\n");
    printf("%d\n", x);
    //printf("%d\n", x);
    //x = _printf("Len:[%d]\n", len);
    //printf("%d\n", x);
    //x = printf("Len:[%d]\n", len2);
    //printf("%d\n", x);
    //x = _printf("Unknown:[%r]\n");
    //printf("%d\n", x);
    //x = printf("Unknown:[%r]\n");
    //printf("%d\n", x);
    printf("%s", NULL);
    _printf("%s\n", NULL);
    return (0);
}
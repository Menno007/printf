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
    
    //printf("%d\n", x);
    //x = _printf("Len:[%d]\n", len);
    //printf("%d\n", x);
    //x = printf("Len:[%d]\n", len2);
    //printf("%d\n", x);
    //x = _printf("Unknown:[%r]\n");
    //printf("%d\n", x);
    //x = printf("Unknown:[%r]\n");
    //printf("%d\n", x);
    printf("%c", NULL);
    //_printf("%s\n", NULL);

x = _printf("Let's print a simple sentence.\n");
printf("%d\n", x);
x = printf("Let's print a simple sentence.\n");
printf("%d\n", x);


x = _printf("Let's print a simple sentence.\n");
printf("%d\n", x);
x = printf("Let's print a simple sentence.\n");
printf("%d\n", x);

x = _printf("%c", 'S');
printf("%d\n", x);
x = printf("%c", 'S');
printf("%d\n", x);


x = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d\n", x);
x = printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d\n", x);

x = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d\n", x);
x = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d\n", x);

x = _printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d\n", x);
x = printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d\n", x);


x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d\n", x);
x = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d\n", x);


x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("%d\n", x);
x = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("%d\n", x);

x = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d\n", x);
x = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d\n", x);

x = _printf("%%");
printf("%d\n", x);
x = printf("%%");
printf("%d\n", x);

x = _printf("Should print a single percent sign: %%\n");
printf("%d\n", x);
x = printf("Should print a single percent sign: %%\n");
printf("%d\n", x);

x = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%d\n", x);
x = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%d\n", x);

x = _printf("css%ccs%scscscs", 'T', "Test");
printf("%d\n", x);
x = printf("css%ccs%scscscs", 'T', "Test");
printf("%d\n", x);

//x = _printf(str); where str is a big string

//x = _printf("man gcc:\n%s", str); where str is a big string


x = _printf("%c", '\0');
printf("%d\n", x);
x = printf("%c", '\0');
printf("%d\n", x);

x = _printf("%");
printf("%d\n", x);
x = printf("%");
printf("%d\n", x);

x = _printf("%!\n");
printf("%d\n", x);
x = printf("%!\n");
printf("%d\n", x);

x = _printf("%K\n");x = _printf("%c", 'S');
printf("%d\n", x);
x = printf("%K\n");x = _printf("%c", 'S');
printf("%d\n", x);


x = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d\n", x);
x = printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d\n", x);


x = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d\n", x);
x = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d\n", x);

x = _printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d\n", x);
x = printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d\n", x);

x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d\n", x);
x = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d\n", x);

x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("%d\n", x);
x = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("%d\n", x);

x = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d\n", x);
x = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d\n", x);

x = _printf("%%");
printf("%d\n", x);
x = printf("%%");
printf("%d\n", x);

x = _printf("Should print a single percent sign: %%\n");\
printf("%d\n", x);
x = printf("Should print a single percent sign: %%\n");\
printf("%d\n", x);

x = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%d\n", x);
x = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%d\n", x);

x = _printf("css%ccs%scscscs", 'T', "Test");
printf("%d\n", x);
x = printf("css%ccs%scscscs", 'T', "Test");
printf("%d\n", x);

//x = _printf(str); where str is a big string

//x = _printf("man gcc:\n%s", str); where str is a big string

x = _printf("%c", '\0');
printf("%d\n", x);
x = printf("%c", '\0');
printf("%d\n", x);


x = _printf("%");
printf("%d\n", x);
x = printf("%");
printf("%d\n", x);

x = _printf("%!\n");
printf("%d\n", x);
x = printf("%!\n");
printf("%d\n", x);

x = _printf("%K\n");
printf("%d\n", x);
x = printf("%K\n");
printf("%d\n", x);

    return (0);
}
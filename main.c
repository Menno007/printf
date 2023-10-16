
#include "main.h"

int main()
{
    int x;

x = printf("Let's print a simple sentence.\n");
printf("%d\n", x);   
x = _printf("Let's print a simple sentence.\n");
printf("%d\n", x);   

x = printf("%c", 'S');
printf("%d\n", x); 
x = _printf("%c", 'S');
printf("%d\n", x);   

x = printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d\n", x);
x = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("%d\n", x);   

x = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d\n", x); 
x = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%d\n", x);   

x = printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d\n", x);
x = _printf("%s", "This sentence is retrieved from va_args!\n");
printf("%d\n", x);   

x = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d\n", x);
x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
printf("%d\n", x);   

x = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("%d\n", x); 
x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
printf("%d\n", x);   

x = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d\n", x);
x = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
printf("%d\n", x);   

x = printf("%%");
printf("%d\n", x); 
x = _printf("%%");
printf("%d\n", x);   

x = printf("Should print a single percent sign: %%\n");
printf("%d\n", x);
x = _printf("Should print a single percent sign: %%\n");
printf("%d\n", x);  

x = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%d\n", x); 
x = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("%d\n", x);   

x = printf("css%ccs%scscscs", 'T', "Test");
printf("%d\n", x); 
x = _printf("css%ccs%scscscs", 'T', "Test");
printf("%d\n", x);   

//x = _printf(str); where str is a big string

//x = _printf("man gcc:\n%s", str); where str is a big string

x = _printf(NULL);
printf("%d\n", x);  



return (0);
}

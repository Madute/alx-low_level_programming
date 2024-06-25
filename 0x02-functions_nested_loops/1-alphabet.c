#include "main.h"
/**
 *function that prints the alphabet, in lowercase, followed by a new line
 *return:0
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');

}

#include "main.h"
/**
 * print_alphabet_x10 -  function to print alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{
int alpha;
int alpha_lower;

for (alpha = 0; alpha <= 9; alpha++)
{
for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++)
{
_putchar(alpha_lower);
}
_putchar('\n');
}
}

#include <stdio.h>
/**
 * write program that prints its own name
 * argc: contain number of command line arguments
 * argv: array that has command line values/arguments
 * Return:Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

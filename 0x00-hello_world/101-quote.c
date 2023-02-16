#include <stdio.h>
#include <unistd.h>
/**
 * main - prints to string
 *
 * Description: Prints "and that piece of art is useful..." without puts
 *
 * Return: 1
 */
int main(void)
{
	fput("and the piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}

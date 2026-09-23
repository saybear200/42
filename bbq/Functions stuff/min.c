#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
// void swap(char **a,char **b)
// {
// 	char *temp;
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

int ft_min(int a, int b, int c)
{
	if(a > b)
		a = b;
	if(a > c)
		a = c;
	return(a);

}

// int main(int argc, char **argv)
// {
// 	printf("%d\n", ft_min(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
// 	(void)argc;
// 	return(0);
// }

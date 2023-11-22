#include "stdio.h"
#include "ft_printf.h"
#include "stdlib.h"

int main()
{
	int n = ft_printf("%u\n", -231561);
	int b = ft_printf("%u\n", -231561);

	printf("%d\n%d", n, b);
}
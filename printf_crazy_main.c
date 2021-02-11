#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
int ret;

printf("########## get crazy ##########\n\n");

//%s null//
printf("#%%s NULL\n");
printf("   printf:%s [", NULL);
ret = printf("%s", NULL);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%s [", NULL);
ret = printf("%s", NULL);
printf("](ret = %d)\n", ret);

//%s null with .//
printf("#%%s NULL with .\n");
printf("   printf:%.4s [", NULL);
ret = printf("%.4s", NULL);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%.4s [", NULL);
ret = printf("%.4s", NULL);
printf("](ret = %d)\n", ret);

//%.//
printf("#%%.\n");
printf("   printf:%. [", NULL);
ret = printf("%.", NULL);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%. [", NULL);
ret = printf("%.", NULL);
printf("](ret = %d)\n", ret);

//%2p NULL//
printf("#%%2p NULL\n");
printf("   printf:%.2p [", NULL);
ret = printf("%.2p", NULL);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%.2p [", NULL);
ret = printf("%.2p", NULL);
printf("](ret = %d)\n", ret);

//%.2p NULL//
printf("#%%.2p NULL\n");
printf("   printf:%.2p [", NULL);
ret = printf("%.2p", NULL);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%.2p [", NULL);
ret = printf("%.2p", NULL);
printf("](ret = %d)\n", ret);

/*
//%*% *=-10//
printf("#%*%\n");
printf("   printf:%*% [", -10);
ret = printf("%*%", -10);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*% [", -10);
ret = printf("%*%", -10);
printf("](ret = %d)\n", ret);
*/

system("leaks a.out");
}

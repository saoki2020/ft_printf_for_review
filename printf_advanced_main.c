#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
int ret;
char s[] = "42Tokyo";

printf("########## advanced flags ##########\n\n");

//'*'as minimum field width (negative)//
printf("#'*'as minimum field width (negative)\n");
printf("   printf:%*s [", -10, s);
ret = printf("%*s",-10, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*s [", -10, s);
ret = printf("%*s",-10  ,s);
printf("](ret = %d)\n", ret);

//'*'as minimum field width (zero)//
printf("#'*'as minimum field width (0)\n");
printf("   printf:%*s [", 0, s);
ret = printf("%*s",0, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*s [", 0, s);
ret = printf("%*s",0  ,s);
printf("](ret = %d)\n", ret);

//'*'as precision (negative)//
printf("#'*'as precision (negative)\n");
printf("   printf:%10.*s [", -5, s);
ret = printf("%10.*s",-5, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%10.*s [", -5, s);
ret = printf("%10.*s",-5  ,s);
printf("](ret = %d)\n", ret);

//'*'as precision (zero)//
printf("#'*'as precision (zero)\n");
printf("   printf:%10.*s [", 0, s);
ret = printf("%10.*s",0, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%10.*s [", 0, s);
ret = printf("%10.*s",0 ,s);
printf("](ret = %d)\n", ret);


//'*'as both without flag//
printf("#'*'as both without flag (zero)\n");
printf("   printf:%*.*s [", 0, 0, s);
ret = printf("%*.*s",0, 0, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*.*s [", 0, 0, s);
ret = printf("%*.*s",0 ,0 ,s);
printf("](ret = %d)\n", ret);

printf("#'*'as both without flag (negative)\n");
printf("   printf:%*.*s [", -10, -5, s);
ret = printf("%*.*s",-10, -5, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*.*s [", -10, -5, s);
ret = printf("%*.*s",-10 ,-5 ,s);
printf("](ret = %d)\n", ret);

//'*'as both wit flag//
printf("#'*'as both with flag -(zero)\n");
printf("   printf:%-*.*s [", 0, 0, s);
ret = printf("%-*.*s",0, 0, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%-*.*s [", 0, 0, s);
ret = printf("%-*.*s",0 ,0 ,s);
printf("](ret = %d)\n", ret);

printf("#'*'as both with flag -(positive)\n");
printf("   printf:%-*.*s [", 10, 5, s);
ret = printf("%-*.*s",10, 5, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%-*.*s [", 10, 5, s);
ret = printf("%-*.*s",10 ,5 ,s);
printf("](ret = %d)\n", ret);

printf("#'*'as both with flag -(negative)\n");
printf("   printf:%-*.*s [", -10, -5, s);
ret = printf("%-*.*s",-10, -5, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%-*.*s [", -10, -5, s);
ret = printf("%-*.*s",-10 ,-5 ,s);
printf("](ret = %d)\n", ret);

printf("#'*'as both with flag 0(zero)\n");
printf("   printf:%0*.*s [", 0, 0, s);
ret = printf("%0*.*s",0, 0, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%0*.*s [", 0, 0, s);
ret = printf("%0*.*s",0 ,0 ,s);
printf("](ret = %d)\n", ret);

printf("#'*'as both with flag 0(positive)\n");
printf("   printf:%0*.*s [", 10, 5, s);
ret = printf("%0*.*s",10, 5, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%0*.*s [", 10, 5, s);
ret = printf("%0*.*s",10 ,5 ,s);
printf("](ret = %d)\n", ret);

printf("#'*'as both with flag 0(negative)\n");
printf("   printf:%0*.*s [", -10, -5, s);
ret = printf("%0*.*s",-10, -5, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%0*.*s [", -10, -5, s);
ret = printf("%0*.*s",-10 ,-5 ,s);
printf("](ret = %d)\n", ret);
}

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
int ret;

printf("########## simple conversion ##########\n\n");

//%c//
printf("   printf:%c [",'a');
ret = printf("%c",'a');
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%c [",'a');
ret = printf("%c",'a');
printf("](ret = %d)\n", ret);

//%s//
printf("   printf:%s [","42tokyo");
ret = printf("%s","42tokyo");
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%s [","42tokyo");
ret = printf("%s","42tokyo");
printf("](ret = %d)\n", ret);

//%p//
printf("   printf:%p [",&ret);
ret = printf("%p",&ret);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%p [",&ret);
ret = printf("%p",&ret);
printf("](ret = %d)\n", ret);

//%d//
printf("   printf:%d [",42);
ret = printf("%d",42);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%d [",42);
ret = printf("%d",42);
printf("](ret = %d)\n", ret);

//%i//
printf("   printf:%i [",42);
ret = printf("%i",42);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%i [",42);
ret = printf("%i",42);
printf("](ret = %d)\n", ret);

//%u//
printf("   printf:%u [",42);
ret = printf("%u",42);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%u [",42);
ret = printf("%u",42);
printf("](ret = %d)\n", ret);

//%x//
printf("   printf:%x [",42);
ret = printf("%x",42);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%x [",42);
ret = printf("%x",42);
printf("](ret = %d)\n", ret);

//%X//
printf("   printf:%X [",42);
ret = printf("%X",42);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%X [",42);
ret = printf("%X",42);
printf("](ret = %d)\n", ret);

//0//
printf("   printf:%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x [",0,0,0,0,0);
ret = printf("%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x",0,0,0,0,0);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x [",0,0,0,0,0);
ret = printf("%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x",0,0,0,0,0);
printf("](ret = %d)\n", ret);

//INT_MIN//
printf("   printf:%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x [",INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN);
ret = printf("%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x",INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x [",INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN);
ret = printf("%%d=%d,%%i=%i,%%u=%u,%%x=%x,%%X=%x",INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN);
printf("](ret = %d)\n", ret);

//NULL pointer//
printf("   printf:%p [",NULL);
ret = printf("%p",NULL);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%p [",NULL);
ret = printf("%p",NULL);
printf("](ret = %d)\n", ret);

printf("########## simple flags ##########\n\n");
char s[] = "42Tokyo";

//minimum field width//
printf("#minimum field width\n");
printf("   printf:[%10s][%7s][%2s] [",s,s,s);
ret = printf("%s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:[%10s][%7s][%2s] [",s,s,s);
ret = printf("%s",s);
printf("](ret = %d)\n", ret);

//minimum field width with (-)//
printf("#minimum field width (-)\n");
printf("   printf:[%-10s][%-7s][%-2s] [",s,s,s);
ret = printf("%s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:[%-10s][%-7s][%-2s] [",s,s,s);
ret = printf("%s",s);
printf("](ret = %d)\n", ret);

//minimum field width with (0)//
printf("#minimum field width (0)\n");
printf("   printf:[%010s][%07s][%02s] [",s,s,s);
ret = printf("%s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:[%010s][%07s][%02s] [",s,s,s);
ret = printf("%s",s);
printf("](ret = %d)\n", ret);

//precision only(.)//
printf("#precision (only.)\n");
printf("   printf:%.s [",s);
ret = printf("%.s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%.s [",s);
ret = printf("%.s",s);
printf("](ret = %d)\n", ret);

//precision .0//
printf("#precision (.0)\n");
printf("   printf:%.0s [",s);
ret = printf("%.0s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%.0s [",s);
ret = printf("%.0s",s);
printf("](ret = %d)\n", ret);

//precision < minimum field width//
printf("#precision < minimum field width\n");
printf("   printf:%10.5s [",s);
ret = printf("%10.5s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%10.5s [",s);
ret = printf("%10.5s",s);
printf("](ret = %d)\n", ret);

//precision > minimum field width//
printf("#precision > minimum field width\n");
printf("   printf:%5.10s [",s);
ret = printf("%5.10s",s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%5.10s [",s);
ret = printf("%5.10s",s);
printf("](ret = %d)\n", ret);

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

/*
//'*'as minimum field width (INT_MIN)//
printf("#'*'as minimum field width (INT_MIN)\n");
printf("   printf:%*s [", INT_MIN, s);
ret = printf("%*s",INT_MIN, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*s [", INT_MIN, s);
ret = printf("%*s",INT_MIN ,s);
printf("](ret = %d)\n", ret);
*/

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

/*
//'*'as precision (INT_MIN)//
printf("#'*'as precision (INT_MIN)\n");
printf("   printf:%.*s [", INT_MIN, s);
ret = printf("%.*s",INT_MIN, s);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%.*s [", INT_MIN, s);
ret = printf("%.*s",INT_MIN ,s);
printf("](ret = %d)\n", ret);
*/

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

//%*% *=-10//
printf("#%*%\n");
printf("   printf:%*% [", -10);
ret = printf("%*%", -10);
printf("](ret = %d)\n", ret);
ft_printf("ft_printf:%*% [", -10);
ret = printf("%*%", -10);
printf("](ret = %d)\n", ret);

system("leaks a.out");
}

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
}

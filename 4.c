#include <stdio.h>
int main()
{
	int line=0,b;
	
while(line<20000)
{
	printf("你是傻逼 %d",line);
	line++;
	b=rand();
	if(b==521)
	   break;
}
    if(line==20000)
       printf("你真的是个大撒比");
	else
	   printf("小傻瓜") ;
	return 0;
}


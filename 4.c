#include <stdio.h>
int main()
{
	int line=0,b;
	
while(line<20000)
{
	printf("����ɵ�� %d",line);
	line++;
	b=rand();
	if(b==521)
	   break;
}
    if(line==20000)
       printf("������Ǹ�������");
	else
	   printf("Сɵ��") ;
	return 0;
}


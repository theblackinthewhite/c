#include<stdio.h>
int minOperations(char* s)
{
    int count = 0;
    int i = 0;
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i+1] != '\0')
        {
            if (s[i] != s[i+1])
            {
                s[i+1] = s[i];
                count++;
            }
        }
    }
    return count;
}
int main()
{
    char s[] = "1001101";
    int ret = 0;
    ret = minOperations(s);
    printf("%d", ret);
	return 0;
}
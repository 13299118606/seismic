#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
printf("请输入你想显示的字母：");
while((ch=getchar())!='\n')
putchar(ch);
system("pause");
return 0;
} //别欺负我这个老实人

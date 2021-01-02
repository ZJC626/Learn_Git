#include <stdio.h>
#include <string.h>
int main(){
   char name[100];
   char answer[100];
   char a[100]="yes";
   printf("What is your name?\n");
   scanf("%s",name);
   printf("Hello,%s,nice to meet you!\n",name);
   printf("Do you want to know what's my name?\n");
   scanf("%s",answer);
   if(strcmp(answer,a)==0)//返回0是相等的，否则是不等的。
   {
       printf("my name is sir~");
   }
}
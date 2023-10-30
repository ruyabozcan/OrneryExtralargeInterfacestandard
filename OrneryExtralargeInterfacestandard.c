#include <stdio.h>
#include<string.h>

int main(void) {
  char str1[21];
  int strLength(char *);
  int stringCompare(char *,char *);
  int myStrcmp(char *,char *);
  //fgets(str1,20,stdin);
  //  printf("the comparision result=%d",stringCompare("ABCDe","ABCD"));
  int result=strcmp("ABC","ABCD");
  if(result==0)
       printf("the strings are equal");
  else if(result>0)
       printf("the first string is greater");
   else
     printf("the seconde strign is greater");
  
  
  return 0;
}
int stringCompare(char *str1,char *str2){
  int i=0;
  if(strlen(str1)!=strlen(str2))
     return 0;
  while( str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    i++;
  if(str1[i]=='\0' && str2[i]=='\0')
    return 1;
  return 0;

}
int myStrcmp(char *s1,char *s2){
 
  while(*s1==*s2 && *s1!='\0' && *s2!='\0'){
    s1++;
    s2++;
  }
  if(*s1=='\0' && *s2=='\0')
     return 0;
  return *s1-*s2;
  
}

int strLength(char *str){
  char *p=str;
  int i=0;
  while(*p){
    printf("%c=%d\n",*p,*p);
    i++;
    p++;
  }
  return i;
}
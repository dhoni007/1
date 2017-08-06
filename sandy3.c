#include<stdio.h>
int main()
{
 char z;
 printf("Enter the letter to check");
 scanf("%s",&z);
 if(z=='a'||z=='e'||z=='i'||z='o'||z='u'||z=='A'||z=='E'||z=='I'||z='O'||z='U')
  {
   Printf("It is an vowel",z);
  }
 else
  {
   printf("It is an consonants",z);
  }
 return 0;
 }

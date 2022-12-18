#include<stdio.h>

int main ()

{
   char c;
   printf("entre the alphabet ");
   scanf("%c",&c);

   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
   {
    printf("the given character is vowel");
   }
    else{
        printf("the given character is consonent");
    }


    return 0;

}
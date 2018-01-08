 #include<stdio.h>
 int main()
 {
 char c,upper,lower;
 printf("enter the character");
 scanf("%c",&c);
 if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
 {
 printf("the given character is vowel");
 }
 else
 {
 printf("the given character is not a vowel");
 }
 return 0;
 }

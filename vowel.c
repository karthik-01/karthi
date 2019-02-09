#include<stdio.h>
int main()
{
    char c;
    printf("Enter the string :");
    scanf("%s",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    printf("vowel");
    else if(c=='@'||c=='#'||c=='$'||c=='%'||c=='&')
    printf("Invalid");
    else
    printf("consonant");
    
    
}

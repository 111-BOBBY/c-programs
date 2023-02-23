#include<stdio.h>
int main() {
    char c;
    int lowercase_vowel;
    printf("enter tha string :");
    scanf("%c",&c);
    lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    if(lowercase_vowel)
    printf("%c is vowel",c);
    else
    printf("%c is constant",c);
    return 0;
}
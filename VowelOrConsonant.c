#include <stdio.h>
int main()
{
    char ch = printf("Enter any character to check its vowel or consonant:");
    scanf("%d",&ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
 
        printf("The character is a vowel.\n");
    }
    else {
        printf("The character is a consonant.\n");
    }
 
    return 0;
}

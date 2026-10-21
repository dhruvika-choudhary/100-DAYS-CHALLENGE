/*
Write a program to determine whether two strings are anagrams.
Print "Anagram" or "Not Anagram".
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};
    int i;

    scanf("%s", s);
    scanf("%s", t);

    if(strlen(s) != strlen(t))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
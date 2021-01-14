#include <stdio.h>
#include <string.h> 

int main()
{
char nextChar = 'a';
char alphabet[27];
for(int i = 0; i < 26; i++) 
{
 alphabet[i] = nextChar;
 nextChar++;
}
alphabet[26] = '\0';
char* literalAlphabet = "abcdefghijklmnopqrstuvwxyz";

if (strcmp(alphabet, literalAlphabet) == 0)
	printf("the strings are identical\n");
else
	printf("the strings are different\n");
for(int d = 0; d < 26; d++) 
{
 alphabet[d] += 'A'-'a';
}
alphabet[26] = '\0';
if (strcmp(alphabet, literalAlphabet) == 0)
        printf("the strings are identical\n");
else
        printf("the strings are different\n");
printf("Alphabet is %s\n", alphabet);
printf("Literal Alphabet is %s\n", literalAlphabet);
strcat(alphabet, literalAlphabet);
printf("Combined alphabet is %s\n", alphabet);




}

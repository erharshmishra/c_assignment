// Write a function to find a character in a given string.
// Return index of first occurrence of given character.
// Return -1 if character not found.

#include <stdio.h>
#include <string.h>
int findCharacter(char str[], char ch)
{
  int i;
  for (i = 0; i < str[i]; i++)
  {
    if (str[i] == ch)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int value;
  char str[50], ch;
  printf("Enter string : ");
  fgets(str, 50, stdin);
  str[strlen(str) - 1] = '\0';
  printf("Enter a character : ");
  scanf("%c", &ch);
  value = findCharacter(str, ch);
  printf("%d", value);
  // if(value==-1){
  //     printf("%c is not found.", ch);
  // }
  // else{
  //     printf("First occurrence of %c is found at index %d", ch, value);
  // }
  return 0;
}
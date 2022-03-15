#include <unistd.h>
#include "main.h"
/**
 *main- Check description
 *description: its prints the word Holberton, followed by a new line.
 *Return: 0.
 */
int main(void)
{
  char word[9]="Holberton";
  int i;
  
  for(i =0; 1<9; i++)
      _putchar(word[i]);
  _putchar('\n');
  
  return (0);
}

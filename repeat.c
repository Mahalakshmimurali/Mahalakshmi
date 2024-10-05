#include<stdio.h>
int main()
{
    char str[100]="swiss";
    int i;
    int freq[256] = {0};
   
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
 printf("Non repeating items");
  for(i = 0; i < 256; i++)
  {
    if(freq[i] == 1)
      printf(" %c ", i);
     }
 return 0;
}

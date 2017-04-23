#include <stdio.h>
#include <cs50.h>
#define MAX 23  //Maxmimum of Height
int main(void)
{
    int i;
    int x;
    int h = 0;
    
    //get the Height
    
    printf("Enter Height: ");
    h = GetInt();
    
    if (h < MAX)
    
    for (i = 0; i < h; i++)
    {
      printf(" ");
      for (x = 0; x < i + 2; x++)
      {
          printf("#");
          
      }
      
      printf("\n");
    }
    
    
    else 
    
    printf("Enter Number Between 1 To 23\n");
}

 
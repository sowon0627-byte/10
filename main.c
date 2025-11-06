#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE*fp = NULL;
    char c;
    char input[100];
    fp = fopen("sample.txt", "r");
    if(fp == NULL)
       printf("Can't open.\n");
    
    //fgetc
    #if 0
    while((c = fgetc(fp)) != EOF)
      putchar(c);
    #endif
    
    //fgets
    while(fgets(input,100,fp) > 0)
       printf("%s", input);
                              
    
    fclose(fp);
  
  system("PAUSE");	
  return 0;
}

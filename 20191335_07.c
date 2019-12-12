#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define M 1000000
#define N 1000000

   FILE *fp1, *fp2;


void getstrtok (char str[])

{
   int i = 1;
   const char s[] = " || - || / || . || ! || ~ || * || : || '' || () || # || @ || ，|| ‘ ||[]";
   char *token;
   int count;

    srand((unsigned)time(NULL));
    fp2 = fopen("/Users/sp/20191335_07_output02.txt","w");

      token = strtok(str, s);
      do {
            count = rand()%1000;
             fprintf(fp2, "[%0.4i] %s (%d) \n", i++, token, count);
            token = strtok(NULL, s);        
        
      }
        while( token != NULL);  

}


bool alphabetic (const char c)
{
  if (( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return true;
  else 
    return false;
}

int countWords (const char string[])

{
  int i, wordCount = 0;
  bool lookingForWord = true, alphabetic (const char c);

  fp2 = fopen("/Users/sp/20191335_07_output02.txt","a");

  for (i = 0; string[i] != '\0'; i++)
    if (alphabetic(string[i]))
    {
      if (lookingForWord )
      {
        wordCount++;
        lookingForWord = false;
      }
    }

    else 
      lookingForWord = true;

    fprintf(fp2,"[total]%0.8i\n", wordCount);

    return 0;

}
 
int main () {

   char arr[M];



   int countWords (const char string[]);
   void getstrtok (char str[]);


   fp1 = fopen("/Users/sp/20191335_07_input02.txt","r");
 
   fgets(arr, M, fp1);

    countWords(arr) ;
    
    getstrtok (arr);

    

   fclose(fp1);
   fclose(fp2);
   
   return(0);
}


















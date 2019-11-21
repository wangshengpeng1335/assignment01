#include <stdio.h>

FILE *fp1, *fp2;

void swap(char *a, char *b)
{
     char temp;
     temp = *a;
     *a = *b;
     *b = temp;
}

void permute(char list[], int k, int m)
{
     
    int i,n=0;

     fp2 = fopen("/Users/sp/20191335_06_output.txt","a"); 

     if( k == m )
     {
             for(i=0;i<=m;i++)
                             
                 fprintf(fp2,"%c ",list[i]);
                 fprintf(fp2,"\n");
                 n++;           
            
     }
     else
     {
         for(i=k;i<=m;i++)
         {
            swap(&list[k],&list[i]);
            permute(list, k+1, m);
            swap(&list[k], &list[i]);
         }
     }

}   


int main()
{


     int i;
     char input;


     fp1 = fopen("/Users/sp/20191335_06_input.txt","r");
     fp2 = fopen("/Users/sp/20191335_06_output.txt","w"); 

   
 while((input = getc(fp1)) != EOF )

   
        {
            //if ( input >= 'a' && input <= 'z')
            {         
              putc(input,fp2);
              
             }      
        }
    fprintf(fp2,"\n\n");


    char list[]={'a','b','c','d'};
    permute(list,0,3);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
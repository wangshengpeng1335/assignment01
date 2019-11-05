#include <stdio.h>


int main(){


	FILE *fp, *fp2, *fp3;
	char bu[64];
	int i, trianglarN = 0;


	fp = fopen("/Users/sp/20191335_05_input.txt","r");
	fp2 = fopen("/Users/sp/20191335_05_output.txt","w"); 

	while(fscanf(fp,"%s",bu) != EOF)
	{
		fprintf(fp2,"%s",bu); 
		fprintf(fp2,"\n"); 
	}
	  

	fp3 = fopen("/Users/sp/20191335_05_output.txt","a");
	if(fp3 == NULL)
	{
		printf("fale to open file.");
	}
	else
	{
		
		for (i = 10; i > 0; i-- ){
		trianglarN += i;

		fprintf(fp3,"[%03i]  %i\n",i, trianglarN );
		
	}
}
		fprintf(fp3,"*******************\n");
        fprintf(fp3,"Wang ShengPeng\n");
        fprintf(fp3,"Student ID : 20191335\n");
        fprintf(fp3,"*******************\n");

  
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
  
    return 0;

}




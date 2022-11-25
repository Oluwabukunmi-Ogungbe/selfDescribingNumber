//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
    int firstLine;
   char nextLine[100];
   int currentInt[100];
    int IndexOfLine = 0;
    char indexchrac[10][10];

   // This reads the input from the file
   FILE *fptr;

   if ((fptr = fopen("C:\\Users\\olumide\\Documents\\test\\moreThanAFile\\moreThanAFile.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

       fscanf(fptr,"%d \n", &firstLine);
          printf("%d \n",firstLine);




       for(int i = 0; i < firstLine; i++){
            fscanf(fptr,"%s \n", &nextLine);
            printf("%s \n",nextLine);
            int nextLineInInt = atoi(nextLine);

       for(int i = 0; i < nextLineInInt ; i++){
        fgets(nextLine, 100, fptr);
        printf("%s \n",nextLine);
       }

       }



   return 0;
}

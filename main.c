#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){


    char numberAsString[100];
    int testCaseNum[100];
    int count = 0;
    int lengthOfTestNum;

    int isThisSelfDescribing ;

    FILE *fptr;

   if ((fptr = fopen("selfDescribingNo.in","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%s \n", &numberAsString); //Read the the first line of the file as the number of test cases.
   printf("%s \n", numberAsString);
   int amount = atoi(numberAsString);




    for (int i = 0; i < amount; i++){
    fscanf(fptr,"%s \n", &numberAsString);
    lengthOfTestNum = strlen(numberAsString);


    for (int j = 0; j < lengthOfTestNum; j++) {
         testCaseNum[j] = numberAsString[j] - '0';

    }


    for (int k = 0; k< lengthOfTestNum; k++) {
        count = 0;

        for (int i = 0; i< lengthOfTestNum; i++) {
            if (testCaseNum[i] == k) count++;

        }
        if(count == testCaseNum[k]){


            isThisSelfDescribing = 1;
        }
        else{
            isThisSelfDescribing = 0;
            printf("\n");
            printf("This is not a self describing number");
            break;
        }

        if (isThisSelfDescribing){
            printf("\n");
            printf("This is a self describing number");
            break;
        }
        }
    }

}


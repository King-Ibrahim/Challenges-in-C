#include<stdio.h>
#include<string.h>
int main(void){
int n =8;
char str1[100];
char str2[100];

//Type the strings
printf("This Application tests words for anagrams\n");
printf("Type the first string\n");
gets(str1);
printf("Type the second string\n");
gets(str2);

//initialize matching letter counter
int count = 0;

//for loop to loop through first string
for(int i=0; i<strlen(str1);i++){
        //for loop to loop through second string
        for(int z=0; z<strlen(str2);z++){
            //If the letters are not equal continue
               if(str1[i] != str2[z]){
         continue;
        }
    // if matching letters are found increment count
     else if(str1[i]==str2[z]) {
            count++;
        break;
     }
     return count;
    }

}   //Check count the number of matching characters matches the string length
    if(count == strlen(str2)){
        printf("We have an Anagram!!!\n");
        printf("There are %d matching letters", count);
    }

    else if(count != strlen(str1)){
        printf("No Anagram\n");
        printf("There are only %d matches\n", count);

    }
return 0;
}

#include<stdio.h>
#include<string.h>
int main(void){
int n =8;
char str1[] = "";


//Type the strings
printf("This Application tests words then returns the first repeating letter\n");
printf("Type the first string\n");
scanf("%s", &str1);

for(int i=0; i<strlen(str1);i++){
    if(str1[i] == str1[i+1]){
        printf("The first repeating character: %c", str1[i]);
        break;
    }
}
return 0;
}

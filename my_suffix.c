/*input : single char and string
 output : prints evry part of the string that starts with the single char */

#include <stdio.h> 
#include <string.h>
#define MAX 127  /*The maximun size of string from the user, assume to be 127 */

/*Get a single char and string.Prints evry part of the string that starts with the single char and returns the number of string that has been printed by that*/
int suffix(char full_str[],char c){
  int j=0, count=0; /* j index, count is counting the number of the string that starts with the single char  */
  while(full_str[j]!='\0'){
   if (full_str[j]==c){
    printf("%s\n",&full_str[j]);
    count++;
  }
   j++; 
  }
  return count;

}

/*Get a single char and string and prints them prorerly.Also sent it to suffix func whose returns it the number of string that has been printed by that, so it print that number*/
int main(){
 int i=0,j=0,c; /*i is index, c is geting char from the input string  */
 char first_c;/*The single char from the user */ 
 char full_str[MAX]={'\0'}; /*The array that would hold the string from the user  */
 printf("enter the first character you want:\n");
 first_c=getchar(); 
 printf("enter your string:\n");
 c=getchar();
 if(c!='\n') {
    full_str[0]=c;
    j=1; }
 for(i=j;i<MAX-1 && ((c=getchar())!='\n');i++){
   full_str[i]=c;
   }
   
 printf("The first character you enter is :%c\n",first_c);
 printf("The full string you enter is :%s\n",full_str); 
 printf("The number of words starting with %c is : %d\n", first_c, suffix(full_str, first_c));

  return 0;
}

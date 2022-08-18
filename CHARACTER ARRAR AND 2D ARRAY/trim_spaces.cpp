#include<cstring>
void trimSpaces(char input[]) {
    // Write your code here
    // for(int i=0; input[i]!='\0'; i++){
    //     if(input[i]==c1){
    //         input[i]=c2;
    //     }
    // }
    
   // int len = strlen(input);
     int i = 0, j = 0;
    
    while (input[i])
    {
        if (input[i] != ' '){
           input[j++] = input[i];    
        }
        
        i++;
    }
    
    input[j] = '\0';
}
/*
Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi
*/

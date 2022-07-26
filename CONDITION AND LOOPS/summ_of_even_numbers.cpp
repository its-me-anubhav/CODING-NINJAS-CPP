
#include<iostream>
using namespace std;


int main(){

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
   
    int c ;
    cin >> c ;
    

        int i = 0;
    int sum = 0;
    
    while(i <= c){
        
        sum = sum + i ;
        i = i +2 ;
        
    }
    cout << sum << endl;
    
}
/*
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/

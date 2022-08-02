#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
*/
    int n;
    cin >>n;
    int i = 1;
    while (i <= n) {
        int space = 1;
        while( space <= n - i) {
            cout << ' ';
            space = space + 1;
         } 
         int star = 1;
            while ( star <= i) {
            cout << '*';
            star = star + 1;
        }
        int stars = i - 1;
        while(stars >= 1) {
        cout << '*';
        stars = stars  - 1;
    }
        cout << endl;
        i = i + 1;
    }
    
}

/*
\Code : Star Pattern
Send Feedback
Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 */

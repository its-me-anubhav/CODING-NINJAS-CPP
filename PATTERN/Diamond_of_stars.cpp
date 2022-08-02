#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=(n/2)+1){
        int spaces = 1;
        while(spaces<=(n/2)+1-i){
            cout << " ";
            spaces++;
        }
                int j =1;
        while(j<=(2*i)-1){
            cout <<"*";
            j++;
        }
        cout << endl;
        i++;
    }
      // 2nd half 
    
    i = 1;
    while(i <= n){
        int spaces=1;
        while(spaces<=i){  //spaces incraese
            cout << " ";
            spaces++;
            
        }
        int j = 2*((n/2)-i+1)-1;
        while(j>=1){
            cout << "*";
            j--;  // decraesing number
        }
        cout << endl;
        i++;
    }
}
/*
Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
  */

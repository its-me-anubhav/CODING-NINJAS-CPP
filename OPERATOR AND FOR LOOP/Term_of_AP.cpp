 #include <bits/stdc++.h>
using namespace std;



int main() {
	int n; cin>>n;
    int count = 0;
    for(int i=1; ; i++){
        if((3*i+2)%4){
        cout<<3*i+2<<" ";
            count++;
            if(count==n)break;
        }
    }
}
/*
Terms of AP
Send Feedback
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)
Constraints :
1 <= x <= 1,000
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
*/

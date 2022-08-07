bool checkMember(int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    
    int f1=0;int f2=1;
    int ans=1;
    while(ans<=n){
        ans=f1+f2;
        if(ans==n){
        return true;
        }
        f1=f2;
        f2=ans;
    }
    return false;
}
/*
Fibonacci Number
Send Feedback
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


Input Format :
Integer N
Output Format :
true or false
Constraints :
0 <= n <= 10^4
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    
*/

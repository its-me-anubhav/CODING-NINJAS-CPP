#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double basic;
    int allow ;
    char grade ;
    
    cin >> basic ;
    cin >> grade;
    double  hra=basic*0.2;
    double da=basic*0.5;
    if(grade == 'A')
    {
      allow = 1700;
    }
     else if(grade == 'B')
     {
       allow = 1500 ;
     
     }else
     {
       allow = 1300;
     }
    double pf=basic*0.11;
  // basic = round(1.59*basic+ allow) ;
   double total =basic+hra+da+allow-pf;
   int ans=round(total);
  cout << ans ;
 
}
/*
Total Salary
Send Feedback
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so
Input format :
Basic salary & Grade (separated by space)
Output Format :
Total Salary
Constraints :
0 <= Basic Salary <= 7,500,000
Sample Input 1 :
10000 A
Sample Output 1 :
17600
Sample Input 2 :
*/

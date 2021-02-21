/*
Happy number
Send Feedback
Given a number n, find if it is a happy number or not. A number is called happy if a sequence of steps leads to 1 where in each sequence of step the number is replaced by sum of square of its digit, i.e., if we start with Happy Number and keep replacing it with digits square sum, we reach 1.
Input Format
Line 1 : An integer n.
Output Format
true, if number is a happy number, otherwise false. 
Input Constraints
1 <= n <= 10^4
Sample Input 1:
13
Sample Output 1:
true
Sample Output 1 explanation
1^2 + 3^2 = 10
1^2 + 0^2 = 1
Since we reached 1, 13 is happy number
Sample Input 2:
14
Sample Output 2:
false
*/

#include<bits/stdc++.h>

bool findHappyNumber(int n){

	/* Don't write main().
 	Don't read input, it is passed as function argument.
	Return output and don't print it.
	Taking input and printing output is handled automatically.
	*/
    
    std::set<int> s;
    while(1){
        int sum = 0;
        int temp = n;
        while(temp){
            sum += pow(temp%10,2);
            temp=temp/10;
        }
        n = sum;
        if(n==1) return true;
        if(s.find(n) != s.end()) return false;
        s.insert(n);
    }
// 	int temp=n;
//     int sum =0;
//     bool happy = false;
//     while(temp>0){
//         sum=0;
// 		while(temp>0){
//             int digit = temp%10;
//         	digit = pow(digit,2);
//             sum += digit;
//      	    temp /= 10;

//         }
//          if(sum == 1){
//              return true;
//          }
//         else{
//             while(sum>0){
//                 int tem = sum%10;
//                 if(tem==1 || tem==0){
//                     sum/=10;
//                     continue;
//                 }
//                 return false;
                
//             }
//         }
//         // else if(sum<1) return false;
        
//         temp = sum ;
//     }
// 	return happy;



}

/*
CN CP SOL.

int sumSquare(int n) {
int ret = 0;
while(n) {
int digit = n % 10;
n /= 10;
ret += (digit * digit);
}
return ret;
}
bool findHappyNumber(int n){
int fast = n;
int slow = n;
do {
slow = sumSquare(slow);
fast = sumSquare(sumSquare(fast));
} while(slow != fast);
return fast == 1;
}

*/
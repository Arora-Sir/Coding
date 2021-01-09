//In feature1Add I've fixed some things
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
    return (a > b);
}x`
int main()
{
    int a = 7;
    int b = 28;
    cout << std::max(a, b, comp) << "\n"; //comparator usage
    // Returns the first one if both the numbers are same
    cout << max(8, 7, comp);
    return 0;  
}
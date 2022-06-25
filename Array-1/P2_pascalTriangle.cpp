/* 
Problem 2:Pascal's triangle
You are the value of n and you have to return nth row of Pascal's triangle

Approach 1:Find 

*/
#include<bits/stdc++.h>
using namespace std;
vector<int> pascalTriangle(int n)
{
    if(n==1)
    return {};
    return {};
}
int main()
{
    int n;
    cin>>n;
    vector<int> ans=pascalTriangle(n);
    for(auto it:ans)
    cout<<it<<" ";
    return 0;
}
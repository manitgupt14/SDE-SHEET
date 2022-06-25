/* 
Problem 11:Repeat and Missing number
(You are giving an array of n integers in which 1 to n numbers are present.One integer 
present twice and one integer Missing.Find the repeat and Missing number).

Approach 1:Sort the array and check one by one O(nlogn) and O(1)

Approach 2:Count the frequency of the each number and find missing and repeat number O(N) and O(N)

Approach 3:Find the sum of all elements and squares of all elements and subtract and form an 
equation and solve the equations

Approach 4:If we are allowed to modify the array then modify the value at index a[i]
If the val is already negative then that index is repeated and if any index is +ve then 
that index val is missing .

Approach 5:Optimal Solution 
Bucket sort 


TC=O(N)(Only one pass) 
SC=O(1)
*/


#include<bits/stdc++.h>
using namespace std;
pair<int,int> findRepeatAndMissing(vector<int> &v)
{
  /* 
  
  Approach 1:
  sort(v.begin(),v.end());
  int mis=0,repe;
  
  
  
  
  */
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    pair<int,int> ans=findRepeatAndMissing(v);
    cout<<"Repeat Number:"<<ans.first<<endl<<"Missing Number:"<<ans.second<<endl;
    return 0;
}
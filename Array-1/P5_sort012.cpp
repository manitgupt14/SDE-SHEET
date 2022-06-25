/* 
Problem 5:Sort an array of 0,1,2 without any sorting algorithm or in-built function
Approach 1:
Sort function and Counting Sort
Optimal solution :  Using Dutch National algorithm 
Algo:
Take three pointers low,mid,high
Initialise the low,mid with 0 and high as size-1;
traverse the array using var i=0
Use the switch case 

if case 0 occur swap the numbers with low and i and increase low and mid
if case 1 occur swap the numbers with mid and i and increase mid
if case 2 occur swap the numbers with high and i and decrease high

TC=O(N)(Only one pass) 
SC=O(1)
*/


#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &v)
{
    int low,mid,high;
    low=mid=0,high=v.size()-1;
    int i=0;
    while(i<v.size())
    {
        if(v[i]==0)
        {
            swap(v[low],v[i]);
            low++;mid++;
        }
        else if(v[i]==1)
        {
            swap(v[mid],v[i]);
            mid++;
        }
        else
        {
            swap(v[high],v[i]);
            high--;
        }
        
        i++;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort012(v);
    for(auto it:v)
    cout<<it<<" ";
    return 0;
}
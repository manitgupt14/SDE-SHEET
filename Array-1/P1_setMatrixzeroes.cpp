/* 
Problem 1:Set Matrix Zeroes
Given an ‘N’ x ‘M’ integer matrix, if an element is 0, set its entire row and 
column to 0's, and return the matrix.In particular, your task is to modify it in such 
a way that if a cell has a value 0 (matrix[i][j] == 0), 
then all the cells of the ith row and jth column should be changed to 0.

Approach 1:Find 

*/
#include<bits/stdc++.h>
using namespace std;
void setMatrixZeroes(vector<vector<int>> &matrix)
{
    return ;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i=0;i<n;i++)
    {
        vector<int> temp(m);
        for(int j=0;j<m;j++)
        {
            cin>>temp[j];
        }
        matrix.push_back(temp);
    }
    setMatrixZeroes(matrix);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
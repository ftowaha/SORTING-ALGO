#include<bits/stdc++.h>
using namespace std;
void unnamed(int A[],int n)
{
    int intmin;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                intmin=A[i];
                A[i]=A[j];
                A[j]=intmin;
            }
        }
    }
}
int main()
{
    int n=7,A[7]={1,4,2,3,9,5,8};
    unnamed(A,n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
    return 0;
}

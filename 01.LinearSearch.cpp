#include <bits/stdc++.h>
using namespace std;
int main(){
    int len;
    cout<<"Enter Array Size: ";
    cin>>len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    int check;
    int flag=0;
    cout<<"Enter the value for searching: ";
    cin>>check;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]==check)
        {   flag= flag+1;
            cout<<check<<" Index: "<<i<<" Position- "<<i+1<<endl;
        }
    }
    if (flag==0)
    {
        cout<<"Value- "<<check<<" is not present in this Array"<<endl;
    }
}
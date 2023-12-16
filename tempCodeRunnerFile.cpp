#include <bits/stdc++.h>
using namespace std;
void PrintArray(int ar[5],int size){
    cout<<"Given array:";
    for (int i=0; i < size; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    int ar[50];
    cout<<"Enter size:";
    cin>>size;
    cout<<"Enter Element: ";
    for (int i=0; i < size; i++)
    {
        cin>>ar[i];
    }
    PrintArray(ar,size);
    //Insert value
    int pos,value;
    cout<<"Enter Position:";
    cin>>pos;
    cout<<"Enter Value:";
    cin>>value;
    if (pos<0 || pos>size)
    {
        cout<<"Error";
    }
    else{
        for (int i = size-1; i>=pos; i++)
    {
        ar[i+1]=ar[i];
    }
    ar[pos]=value;
    }
    cout<<"After inserting value: ";
    PrintArray(ar,size+1);
}
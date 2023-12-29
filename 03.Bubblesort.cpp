#include  <bits/stdc++.h>
using namespace std;
void PrintArray(int size, int arr[]){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter Array Size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Element: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before Sorting: ";
    PrintArray(size,arr);

///Implement sorting
int flag=0;
for (int i = 0; i < size-1; i++)
{
    for (int j = 0; j < size-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
        
    }
    if(flag==0) break;  
}
cout<<"After Sorting: ";
PrintArray(size,arr);

}
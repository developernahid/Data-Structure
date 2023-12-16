#include <bits/stdc++.h>
using namespace std;

int main(){
    string st;
    st="NahidHasan";
    cout<<st<<endl;
    cout<<st.capacity()<<endl;
    st="Nahidiriurwyiuowqwuiiuqy";
    cout<<st<<endl;
    cout<<st.capacity()<<endl;
    cout<<st.max_size()<<endl;
    string s1="abc";
    string s2="abc";
    s1=s2;
    cout<<s1<<endl;
    s1=s1+s2;
    cout<<s1<<endl;
    if (s1==s2)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }

    return 0;
}
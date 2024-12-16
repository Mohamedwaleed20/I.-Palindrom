#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string c ;
    cin >> c ;
    string b = c ;
    reverse(b.begin(),b.end());
    if(b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl ;
    }


    return 0;
}

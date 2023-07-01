#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qt;
    qt.push(2);
    qt.push(3);
    qt.push(4);
    qt.push(4);
    cout<<qt.back()<<endl;
    cout<<qt.front()<<endl;
    qt.pop();
    cout<<qt.size()<<endl;
    cout<<qt.empty()<<endl;
return 0;
}
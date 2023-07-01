#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void say_digit(string arr[],int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    n/=10;
    say_digit(arr,n);
    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter the integer for prinitng in words:";
    int n;
    cin>>n;
    say_digit(arr,n);
return 0;
}
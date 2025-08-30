//-->This Is C++ Code To Check If Number Is Palindrome Or Not 

#include<iostream>
using namespace std;

//--> Function To Check Condition
bool palindromecheck(int x){
    int dig;
    int rev=0;
    for (int i=x;i>0;i=i/10){
        dig=i%10;
        rev=(rev*10)+dig;
        
    }
    if (rev==x){
        cout<<"Number is Palindrome "<<"\n";
        return 0;
    }else {
        cout<<"Number is not Palindrome "<<"\n";
        return 1;
    }


}

int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<palindromecheck(x);

}
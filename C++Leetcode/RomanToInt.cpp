//-->This is c++ code to convert any roman string into integer number 

#include<iostream>
#include<string>
using namespace std;

//Defining Roman Characters as integers
int syv(char &r){
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    
        return -1;
    }
//Function converting roman strings to integers 
int romanToInt(string s) {
      int sum=0;
      for (int i=0;i<s.length();i++){
     int s1=syv(s[i]);
     int s2=syv(s[i+1]);
     
        if(s1<s2){
            sum-=s1;
        }else{
            sum+=s1;
        } 
      }  
        return sum;
    }
   
    using namespace std; 
    
int main (){
        string x;
        cout<<"Enter the roman string : ";
        cin>>x;
        //Calling the romanToInt function
        cout<<romanToInt(x);
        return 0;
    }
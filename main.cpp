//Author: Logen Thornton
#include<iostream>

using namespace std;

int main()
{
  char a;
  cout<<"What character do you want to know about?\n";
  cin >> a;
  //when user's entry is between A-Z...
  if (isupper(a)){
    cout<< a << " is an upper case letter!\n";
  }
  //when user's entry is between a-z...
  else if (islower(a)){
    cout<< a << " is a lower case letter!\n";
  }
  //in all other cases...
  else {
    cout<<"?! Pssh. What are you talking about?\n";
  } 
  //no matter what they enter...
  cout<<"The ASCII value is: " << (int) a;

  return 0;
}

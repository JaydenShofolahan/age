//Name: Jayden Shofolahan 
//Date: 12/21/24
//Description: This will evaluate an age 
#include <iostream>
using namespace std;

int main() 
{ 
  int age;
  cout<<"Enter an age"; 
  cin>>age; 
   

  while (age<1) {
    cout<<"Negative number. Try again";
    cout<<"\n Enter an age";
    cin>>age;

  }
    cout<<("\nYou entered")<<age;

  
  
}

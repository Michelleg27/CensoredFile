//Author: Michelle Gomez
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;
  

  in.open ("example.txt");                  

  while (!in.eof() ) 
  { 
    in>>current; 
    if (current >='A' && current <='Z' || current >='a' && current <='z')
    {
       if ( first == ' ')
       {

         first = current;  
       }
       else 
       {
         last = current; 
       }
     
    }
  else
  {
    in.close();
  }
  }
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;
  


  return 0;
}

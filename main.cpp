//Author: Phinease Francis 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
string name ="";
int num=0;
ofstream myFile;
cout<<"How many colors do you need?\n";
do{
cout<<"Please enter a value that's 2 or greater.\n";
cin>>num;

if (num >= 2){
  cout<< "You chose to have "<<num<<" colors in your pallet\n";
}
else {
  cout<<"That value was less than 2\n";
}
}while(num <2);






cout<< "Please create a '.css' file name for your color pallete.\n";
cin>>name; 
cout<<"Your file name is: "<<name<<endl;


myFile.open(name, ios::in | ios::out);

myFile << "Number of colors: " << num;


myFile.close();






//myFile.close();

  return 0;
}

//Author: best dude in the world
#include <iostream>
#include "colorsall.h"
#include<fstream>
#include<vector>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {
fstream myFile;
string name="";
string line="";
int num; 

colorsall data;
void yourColors();



cout<<"How many colors do you need?"<<endl;



data.howManyColors(num);




cout<<" \n";
cout<<"Please create a file name for your color pallete.\n";
cin>>name;
name= name+".css";
cout<<"Your file name is: "<<name<<endl;
yourColors();


myFile.open(name, ios::out);
if (myFile.is_open()){

data.whichColors(num,line);

myFile<<"Number of colors: "<<line<<endl;

myFile.close();
}
else {
  cout<<"Apologies! your file "<<name<<" could not be created.\n";
}



//create file name
return 0;

  }


void yourColors(){
  cout<<"Congradulations! your colors are: \n";
}








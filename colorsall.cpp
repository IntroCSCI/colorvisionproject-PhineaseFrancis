#include <iostream>
#include "colorsall.h" 
#include <string>    
#include <iostream>
#include<fstream>
#include<vector>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;
using std::ifstream;
using std::getline;


int colorsall::howManyColors(int& num){
   cout<<"Please enter numarical value between 2-4 for your color count."<<endl;
do{
 
  cin>>num;

  if (num>=2){
    cout<<"You chose to have " << num<<" colors in your pallet"<<endl;
  }
  else{
    cout<<"That value was less then 2. Please try again."<<endl;

    }
 }while(num<2);
    return num;
}



vector<int> colorsall::whichColors(int& num, string& line){
  
  if(num==2){
ifstream myFile1("colors2.txt");
if(myFile1.is_open()){
  while(!myFile1.eof()){
    getline(myFile1,line);
    cout<<line<<endl;

    } myFile1.close();
  }
}
else if(num==3){
  ifstream myFile1("colors3.txt");
if(myFile1.is_open()){
  while(!myFile1.eof()){
    getline(myFile1,line);
    cout<<line<<endl;

    } myFile1.close();
  }

}

else if(num==4){
  ifstream myFile1("colors4.txt");
    if(myFile1.is_open()){
    while(!myFile1.eof()){
    getline(myFile1,line);
    cout<<line<<endl;

      } myFile1.close();
  }
}
}




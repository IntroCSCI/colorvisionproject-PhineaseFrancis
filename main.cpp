//Author: Phinease Francis 
#include <iostream>
#include<fstream>
#include<vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int  howManyColors(int& num);
vector<int> whichColors(int&, string&);


int main() {
string name;
string line;
int num; 





cout<<"How many colors do you need?"<<endl;

  num = howManyColors(num);

cout<<" \n";
cout<<"Please create a file name for your color pallete.\n";
cin>>name;
name= name+".css";
cout<<"Your file name is: "<<name<<endl;

fstream myFile (name);
vector<int>colorsGenerated= whichColors(num, line);


myFile.open(name,ios::in|ios::out);

myFile<<"Number of colors: "<<line;

myFile.close();




//create file name
return 0;

  }

int howManyColors(int& num ){
 do{
  cout<<"Please enter numarical value between 2-4 for your color count."<<endl;
  cin>>num; 
  if (num>=2){
    cout<<"You chose to have " << num<<" colors in your pallet"<<endl;
  }
  else{
    cout<<"That value was less then 2."<<endl;

    }
 }while(num<2);
    return num;
}

vector<int> whichColors(int&num, string&line){

  
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











#include <iostream>
#include <string>

using namespace std;

int prefixes(string str){
  string str2 = str;
  if(str2=="meth"){
    return 1;
  }
  else if(str2=="eth"){
    return 2;
  }
  else if(str2=="prop"){
    return 3;
  }
  else if(str2=="but"){
    return 4;
  }
  else if(str2=="pent"){
    return 5;
  }
  else if(str2=="hex"){
    return 6;
  }
  else if(str2=="hept"){
    return 7;
  }
  else if(str2=="oct"){
    return 8;
  }
  else if(str2=="non"){
    return 9;
  }
  else if(str2=="dec"){
    return 10;
  }
  else{
    return -1;
  }
}

int main()
{
  string str ="";
  cout<<"Please enter a compound name ";
  cin>>str;
  string result = "";
  bool cyclo = false;
  if(str.substr(0,5)=="cyclo"){
    cyclo=true;
    str=str.substr(5,str.length());
  }
  if(str.substr(str.length()-3,str.length())=="ane"){
    int numCarbons =  prefixes(str.substr(0,str.length()-3));
    if(numCarbons == -1){
      cout<<"that is not a valid alkane \n";
      return 0;
    }
    if(cyclo){
      result+="C1";
      numCarbons--;
    }
    for(int i = 0; i < numCarbons; i++){
      result+='C';
    }
    if(cyclo){
      result+="1";
    }

  }
  else{
    cout<<"that is not an alkane \n";
    return 0;
  }
  cout<<result;
  cout<<'\n';
  return 0;
}

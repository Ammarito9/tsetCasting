#include <iostream>
#include <string>
using namespace std;

// Examples of casting data

int main(){
  
  // Converting from String to integer, float, double
  string st1 = "43.22";
  int    st1_int;
  float  st1_float;
  double st1_double;

  st1_int = stoi(st1);
  st1_float = stof(st1);
  st1_double = stod(st1);

  cout<<"Converting from String to integer, float, double : "<<endl;
  cout<<"st1_int    = "<<st1_int<<endl;
  cout<<"st1_float  = "<<st1_float<<endl;
  cout<<"st1_double = "<<st1_double<<endl;
  cout<<"**************************************"<<endl;

  // Converting integer to string
  int num1 = 20;
  string stNum1;

  stNum1 = to_string(num1);

  cout<<"Converting integer to string : "<<endl;
  cout<<"stNum1 = "<<stNum1<<endl;
  cout<<"**************************************"<<endl;

  // Converting double to string
  double num2 = 33.5;
  string stNum2;

  stNum2 = to_string(num2);

  cout<<"Converting double to string : "<<endl;
  cout<<"stNum2 = "<<stNum2<<endl;
  cout<<"**************************************"<<endl;

  // Converting float to string, integer, double
  float num3 = 6.5;
  string stNum3;
  int num3_int;
  double num3_double;

  stNum3 = to_string(num3);
  num3_int = int(num3);
  num3_int = (int)num3; // C-style conversion
  num3_double = double(num3);
  num3_double = (double)num3; // C-style conversion

  cout<<"Converting float to string, integer, double : "<<endl;
  cout<<"stNum3 = "<<stNum3<<endl;
  cout<<"num3_int = "<<num3_int<<endl;
  cout<<"num3_double = "<<num3_double<<endl;
  cout<<"**************************************"<<endl;
  return 0;
}

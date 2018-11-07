#include<iostream>
#include"Box.h"
using namespace std;
int main(int argc, char const *argv[]) {
  Box box1,box2(1,2,3);
  box1.set_box(4,4,4);
  cout << "Box1:__________" << endl;
  cout << "Length Of Box: "<<b1.get_length() << endl;
  cout << "Width Of Box:  "<<b1.get_width() << endl;
  cout << "Height Of Box: "<<b1.get_height() << endl;
  cout << "Box2:__________" << endl;
  cout << "Length Of Box 2: "<<b2.get_length() << endl;
  cout << "Width Of Box 2: "<<b2.get_width() << endl;
  cout << "Height Of Box 2: "<<b2.get_height() << endl;
  return 0;
}

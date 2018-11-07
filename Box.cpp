#include"Box.h"
void Box::set_box(int l,int w,int h)
{
  length=l;
  width=w;
  height=h;
}
int Box::get_length()
{
  return length;
}
int Box::get_width()
{
  return width;
}
int Box::get_height()
{
  return height;
}

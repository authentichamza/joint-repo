class Box{
private:
  int length,width,height;
public:
  Box():length(0),width(0),height(0){}
  Box(int l,int w,int h):length(l),width(w),height(h){}
  void set_box(int l,int w,int h);
  int get_length();
  int get_width();
  int get_height();
};

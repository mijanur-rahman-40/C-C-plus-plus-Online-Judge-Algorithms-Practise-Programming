#include<stdio.h>
int x=1;
//int y=1;
void myfunction(int y)   //void myfunction(int x,int y)
{
    y=y*2;
    x=x+10;
    printf("myfunction,x=%d,y=%d\n",x,y);

}
  int main()
  {
    int y=5;            //cloned :(int x=10; int y=5;  myfunction(x,y);) or( int y=5; x=5; myfunction(x,y);)

      x=10;
      myfunction(y);
      printf("main,x= %d,y=%d\n",x,y);
      return 0;
  }

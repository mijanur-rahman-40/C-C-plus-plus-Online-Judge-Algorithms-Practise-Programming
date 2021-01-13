
package sirproject;
class  Box1{
    int height;
    int width;
    int depth;
    Box1(){
         height=1;
         width=1;
         depth=1;    
    }
     Box1(int l){
        height=l;
        width=l;
        depth=l;
    }
     Box1(int i,int m){
         height=i;
         width=m;
     }
      Box1(int height,int width,int depth){
         this.height=height;
        this.width=width;
        this.depth=depth;
}
    int getvolume(){     
       return  height*width*depth;
    }
    
    void setdimension(int  h,int w,int d){
        height =h;
        width= w;
        depth=d;
       // return  height*width*depth;
    }
}
/*
  class Box9 {
    int height;
    int width;
    int depth;

    public int getHeight() {
        return height;
    }

    public int getWidth() {
        return width;
    }

    public int getDepth() {
        return depth;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public void setDepth(int depth) {
        this.depth = depth;
    }
    public int getVolume(){
        return height*width*depth;
    }
    
 }

 class Sirproject{
 public static void main(String[] args) {
    
        Box1 ob1=new Box1();
        System.out.println("Volume1:"+ob1.getvolume());
        Box1 ob2=new Box1(5);
        System.out.println("Volume2:"+ob2.getvolume());
        Box1 ob3=new Box1(5,5,5);
        System.out.println("Volume3:"+ob2.getvolume());

    
     Box9 ob=new Box9();
   
     ob.setDepth(2);
     ob.setHeight(4);
     ob.setWidth(6);
     ob.height=3;
     ob.depth=7;
     ob.width=9;
     System.out.println(ob.getVolume());
    }
 }
 
  */ 

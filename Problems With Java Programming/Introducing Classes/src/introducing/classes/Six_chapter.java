
package first_project;
/*
class Box {
double width;
double height;
double depth;
}
public class Six_chapter {
public static void main(String args[]) {
   Box mybox1 = new Box();
        Box mybox2 = new Box();
    double vol;
      mybox1.width = 10;
      mybox1.height = 20;
      mybox1.depth = 15;

       mybox2.width = 3;
       mybox2.height = 6;
       mybox2.depth = 9;

    vol = mybox1.width * mybox1.height * mybox1.depth;
      System.out.println("Volume is " + vol);
     vol = mybox2.width * mybox2.height * mybox2.depth;
    System.out.println("Volume is " + vol);
}
}
  */





// Now, volume() returns the volume of a box.
/*
   class Box {
      double width;
        double height;
        double depth;
    double volume() {
  return width * height * depth;
}
}
      class Six_chapter {
        public static void main(String args[]) {
             Box mybox1 = new Box();
             Box mybox2 = new Box();
          double vol;
// assign values to mybox1's instance variables
           mybox1.width = 20;
            mybox1.height = 20;
           mybox1.depth = 15;
          mybox2.width = 3;
            mybox2.height = 6;
         mybox2.depth = 9;

      vol = mybox1.volume();
      System.out.println("Volume is " + vol);
      vol = mybox2.volume();
       System.out.println("Volume is " + vol);
   }
}
*/







/*
//Costructore
class Box{
    double width;
    double height;
    double depth;
    Box(){
        System.out.println("Constructing Box");
        width=10;
        height=10;
        depth=10;
    }
    double volume(){
        return width*height*depth;
    }
}
 class Six_chapter{
     public static void main(String[] args) {
     Box mybox1=new Box();
     Box mybox2=new Box();
     double vol;
     vol=mybox1.volume();
     System.out.println("VOlumme is "+vol);
     vol = mybox2.volume();
      System.out.println("Volume is " + vol);
     
 }
 }
*/

/* Here, Box uses a parameterized constructor to
initialize the dimensions of a box.
*/




/*
class Box {
     double width;
      double height;
        double depth;
      // This is the constructor for Box.
          Box(double w, double h, double d) {
           width = w;
            height = h;
             depth = d;
}
      // compute and return volume
       double volume() {
         return width * height * depth;
     }
  }
class Six_chapter {
    public static void main(String args[]) {
      Box mybox1 = new Box(10, 20, 15);
       Box mybox2 = new Box(3, 6, 9);
      double vol;
      vol = mybox1.volume();

      System.out.println("Volume is " + vol);
      // get volume of second box
    vol = mybox2.volume();
        System.out.println("Volume is " +vol);
    }
}
*/




//A Stack class  TestStack
class stack{
    int stck[]=new int[10];
    int tos;
    stack(){
        tos=-1;
    }
    void push(int item){
        if(tos==9){
            System.out.println("Stack is full");
        }
        else
            stck[++tos]=item;
    }
    int pop(){
        if(tos<0){
        System.out.println("Stack is undderflow");
        return 0;
    }
        else
            return stck[tos--];
        
    }
}
class Six_chapter{
    public static void main(String[] args) {
       stack ob1=new stack(); 
       stack ob2=new stack();
       for(int i=1; i<=10; i++){
           ob1.push(i);
       }
       for(int i=0; i<10; i++){
           System.out.println(ob1.pop());
       }
           for(int i=11;i<=20;i++){
           ob2.push(i);
       }
       for(int i=0; i<10; i++){
           System.out.println(ob2.pop());
       }
    }
}
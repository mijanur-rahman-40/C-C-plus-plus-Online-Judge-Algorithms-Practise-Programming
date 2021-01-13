
package introducing.classes;


//public
        class Box1 {
    static int x =10;
    
    // Class Memeber (Variable / Method)    
    // instance variable
    int height;
    int width;
    int depth;
    
    //Constructor Overloading
    Box1(){
        this.height = 1;
        this.width = 1;
        this.depth = 1;
        System.out.println("Inside Box()");
    }
    
    Box1(int len){
        //height = width = depth = len;
        this(len, len, len);
        System.out.println("Inside Box(int len)");
        
    }
    
    Box1(int height, int width, int depth){
       this.height = height;
       this.width = width;
       this.depth = depth;
        System.out.println("Inside Box(int h, int w, int d)");
    }
    
    
    Box1(double w, int x, int y){
        this.height = height;
        this.width = width;
        this.depth = depth;
        System.out.println("Inside Box(double h, int w, int d)");
    }
    
    Box1(Box1 ob){
        this.height = ob.height;
        this.width = ob.width;
        this.depth = ob.depth;
        System.out.println("Inside Box(Box ob)");
    }
    
    int getVolume(){
        //int h;
        return height*width*depth;
    }
    
    //Instance variable hiding
    void setDimension(int height, int width, int depth){
        this.height = height;
        this.width = width;
        this.depth = depth;
    }
}
class Box{
    public static void main(String[] args) {
        Box1 ob=new Box1();
        System.out.println(ob.getVolume());
    }
}
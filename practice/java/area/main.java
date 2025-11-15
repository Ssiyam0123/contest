
interface shape{
    double getArea();
}

class rectangle implements shape{
    double w;
    double l;

    rectangle(double w, double l){
        this.w = w;
        this.l = l;
    }

   public double getArea(){
        return w*l;
    }
}

class circle implements shape{
    double pi = 3.14;
    double r;

    circle(double r){
        this.r = r;
    }


  public  double getArea() {
        
        return pi*r*r;
    }
}

class triangle implements shape{
    double l;
    double b;

    triangle(double l, double b){
        this.l = l;
        this.b = b;
    }

    public double getArea(){
        return .5 * l * b;
    }
}

public class main {
public static void main(String[] args) {
    rectangle r = new rectangle(10, 20);
    System.out.println("rectangle : "+ r.getArea());
    circle c = new circle(10);
    System.out.println("circle : "+ c.getArea());
    triangle t = new triangle(10, 20);
    System.out.println("triangle : "+ r.getArea());
}
    
}

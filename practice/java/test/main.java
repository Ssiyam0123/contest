class person{
    String firstName;
    String lastName;

    person(String f, String l){
        firstName = f;
        lastName = l;

    }

    String getFirstName(String f){
        return firstName;
    }

    String getLastName(String l){
        return lastName;
    }


}

class employee extends person{
    int employeeId;
    String title;
    employee(String f, String l, int id,String title){
        super(f, l);
        this.title = title;
        employeeId = id;
    }

    int getEmployeeId(){
        return employeeId;
    }

     String getLastName(String l){
        return lastName + "("+title+")";
    }



}


class student{
    private int student_id;
    private String student_name;
    private double grade;

    public void getStudentId(){
        System.out.println(student_id);
    }
    public int setStudentId(int n){
      return  student_id = n;
    }
    public String setStudentName(String n){
      return  student_name = n;
    }

    public void getStudentName(){
        System.out.println(student_name);
    }

    void addGrade(double g){
        if(g<0 || g>100){
            System.out.println("invalid graddes");
        }

        grade = grade + g;

        System.out.println("grade : "+grade);
    }
}


interface Shape{
    double getArea();

}

class rectangle implements Shape{
    double a,b;
    rectangle(double a, double b){
        this.a = a;
        this.b = b;
    }

   public double getArea(){
        return a*b;
    }
}


class circle implements Shape{
    double r;

    circle(double r){
        this.r = r;
    }

 public   double getArea(){
        return 3.14*r*r;
    }
}

class triangle implements Shape{
    double b,l;

    triangle(double b, double l){
        this.b = b;
        this.l = l;
    }
 public   double getArea(){
        return .5*b*l;
    }
}


class main{
    public static void main(String[] args) {
        // employee e1 = new employee("esthiyak ahmmed", "siyam", 556, "student");
        // System.out.println(e1.getFirstName(null));
        // System.out.println(e1.getLastName(null));
        // System.out.println(e1.getEmployeeId());


        // student s1 = new student();
        // s1.setStudentId(556);
        // s1.addGrade(100);
        // s1.setStudentName("siyam");
        // s1.getStudentName();
        // s1.getStudentId();
        // s1.addGrade(67);


        rectangle r1 = new rectangle(5, 7);
        System.out.println(r1.getArea());

        circle c1 = new circle(4);
        System.out.println(c1.getArea());

        triangle t1 = new triangle(2, 6);
        System.out.println(t1.getArea());



    }
}
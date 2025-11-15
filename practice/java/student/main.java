import java.util.ArrayList;

class student{
    private int studentId;
    private String studentName;
    private double grades;

    int setStudentId(int id){
       return this.studentId = id;
    }

    int getStudentId(){
       return this.studentId;
    }

    String setName(String name){
        return this.studentName = name;
    }

    String getName(){
        return studentName;
    }

    void grade(double g){
        if(g<0 || g>100){
            System.out.println("invalid grade");
        }
        System.out.println("grade added");
        grades = g;
    }




}
public class main {
    public static void main(String[] args) {
        student s1 = new student();
        s1.setName("siyam");
        s1.setStudentId(556);
        System.out.println(s1.getName());
        System.out.println(s1.getStudentId());
        s1.grade(31.23);
    }
}

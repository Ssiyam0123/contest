
class person{
    String firstName;
    String lastName;

    person(String f, String l){
        this.firstName = f;
        this.lastName = l;
    }

    String getFirstName(){
        return firstName;
    }

    String getLastName(){
        return lastName;
    }


}


class employee extends person{
    int employeeId;
    String jobTitle;

    employee(String fast,String last,int id, String title){
        super(fast, last);
        this.employeeId = id;
        this.jobTitle = title;
    }

    @Override
    String getLastName() {
        return lastName +"("+ jobTitle +")";
    }

}


public class main {
public static void main(String[] args) {
    employee ei = new employee("ram","codu", 1211, "ponu");
    System.out.println(ei.getFirstName());
    System.out.println(ei.getLastName());
    System.out.println(ei.employeeId);
    System.out.println(ei.jobTitle);
}
}

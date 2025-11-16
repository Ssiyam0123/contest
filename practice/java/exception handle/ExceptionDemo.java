public class ExceptionDemo {

    public static void main(String[] args) {

        try {
            throw new ArithmeticException("error");
            // Throwing an exception manually
            // throw new ArithmeticException("This is an example of an exception.");
        }

        catch (ArithmeticException e) {
            // Handling the exception
            System.out.println("Exception caught: " + e.getMessage());
        }

        System.out.println("Program continues after catching the exception.");
    }
}

// Parent class
class BankAccount {
    protected double balance;

    // Constructor
    public BankAccount(double balance) {
        this.balance = balance;
    }

    // Deposit method
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
        System.out.println("Current Balance: " + balance);
    }

    // Withdraw method
    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
            System.out.println("Remaining Balance: " + balance);
        } else {
            System.out.println("Insufficient balance!");
        }
    }
}

// Subclass
class SavingsAccount extends BankAccount {

    // Constructor
    public SavingsAccount(double balance) {
        super(balance);
    }

    // Overridden withdraw method
    @Override
    public void withdraw(double amount) {
        if (balance - amount < 100) {
            System.out.println("Withdrawal denied! Balance cannot fall below 100.");
        } else {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
            System.out.println("Remaining Balance: " + balance);
        }
    }
}

// Test class
public class main {
    public static void main(String[] args) {
        SavingsAccount sa = new SavingsAccount(500);

        sa.deposit(200);
        sa.withdraw(550);  // This will be denied
        sa.withdraw(300);  // This will succeed
    }
}
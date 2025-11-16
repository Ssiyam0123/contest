import java.util.Scanner;


class bank{
    int amount;
    bank(int t){
        amount = t;
    }

}

class savingacc extends bank{
    savingacc(int tk){
        super(tk);
        amount = amount+ tk;
    }


}

public class main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter your ammount : ");
    int amm =  sc.nextInt();



        savingacc s1 = new savingacc(amm);
        System.out.println(s1.amount);
    }
    
}

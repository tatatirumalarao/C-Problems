pckage day10;
import java.util.Arrays;
public class Retrieve{
    Loan[] hdfc=new Loan[5];
    public Retrieve(){
        hdfc[0]=new Loan(9876543223L,234565,15.9f);
        hdfc[1]=new Loan(7632345456L,134500,8.8f);
        hdfc[2]=new Loan(8765432237L,334500,12.4f);
        hdfc[3]=new Loan(1098767345L,434500,11.8f);
        hdfc[4]=new Loan(6098765456L,534565,8.7f);
    }
    public void read(float user){
        System.out.println(user+"roi matched records");
        Arrays.stream(hdfc).filter(each->.getRoi()>=user).forEach(obj->System.out.println(obj));
    }
    public void read(long number){
        System.out.println(number+"loan records");
        Arrays.stream(hdfc).filter(each->each.getLoanNo()==number).forEach(obj->System.out.println(obj));
    }
    public void read(int amount){
        System.out.println("loan records less than "+amount);
        Arrays.stream(hdfc).filter(each->each.getPriciple()<=amount).forEach(obj->System.out.println(obj));
    }
    public static void main(String[] arr){
        Retrieve ret=new Retrieve();
        ret.read(15.0f);
        ret.read(6098765456L);
        ret.read(400000);
    }

}
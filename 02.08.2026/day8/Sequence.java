package day8;
import java.util.Arrays;
public class Sequence{
	public static void main(String[] week){
		int[] pascal={1,2,3,4,5,10};
		String digits="987654321";
		System.out.println(Arrays.toString(pascal));
		System.out.println(digits);
		String newDigits=digits.substring(2,8);
		System.out.println(newDigits);
		int[] extracted=Arrays.copyOfRange(pascal,2,4);
		Arrays.stream(extracted).forEach(each->System.out.println(each));
	}
}
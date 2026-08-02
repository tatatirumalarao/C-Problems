package day8;
public class LinearSearch{
      public static int search(String[] list,String desired,int index){
           if(index==list.length) return-1;
           if(list[index].compareTo(desired)==0) return index;
           return search(list,desired,index+1);
 }
  public static void main(String[] args){
          String[] rating = {"deloite","zoho","tieto","torry","Accenture","Capgemini"};
           System.out.println(search(rating,"google",0));
           System.out.println(search(rating,"capgemini",0));
           System.out.println(search(rating,"bmw",0));
           System.out.println(search(rating,"tieto",0));
           System.out.println(search(rating,"wipro",0));
           System.out.println(search(rating,"space x",0));
}
}
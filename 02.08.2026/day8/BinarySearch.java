package day8;
public class BinarySearch{
	public static int search(String[] arr,String desired){
		int start=0,end=arr.length-1;
		while(start<=end){
			int mid=start+(end-start)/2;
			if(arr[mid].equals(desired)) return mid;
			else if(arr[mid].compareTo(desired)>0) end=mid-1;
			else start=mid+1;
		}
		return -1;
	}
	//java DAY8/BinarySearch Abc aab abc
	public static void main(String[] args){
		System.out.println(search(args,"Abc"));
		System.out.println(search(args,"abc"));
		
	}
}
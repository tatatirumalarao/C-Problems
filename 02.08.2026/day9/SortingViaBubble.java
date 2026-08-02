package day9;
	import java.util.Arrays;
	public class SortingViaBubble{
		public static void ordering(int[]arr){
		int size = arr.length;
		for(int time=0;time<size-1;time++){
		      for(int bub=0;bub<size-time-1;bub++){
				if(arr[bub]<arr[bub+1]){
					arr[bub]+=arr[bub+1];
					arr[bub+1]=arr[bub]-arr[bub+1];
					arr[bub]-=arr[bub+1];
				}
			}
		    }
		}
               public static void main(String[]ar){
		int[] arr={5,-6,19,16,0};
			ordering(arr);
			System.out.println(Arrays.toString(arr)); 
		}
	}
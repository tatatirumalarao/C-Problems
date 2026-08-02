package day10;
	class Loan{
		private long loanNo;
		private int principle;
		private float roi;
		// constructors: default
		public Loan(){
			System.out.println("New loan request");
			loanNo=0L;principle=0;roi = 0.F;
		}
		// public Loan(){System.out.println("Initializing");}
		// parameterized cons>> overloaded/ polymorshism Loan by distinguish the parameters
		public Loan(long loanNo){
			this.loanNo = loanNo;
		}
		public Loan(int principle){this.principle=principle;}
		public Loan(float roi){this.roi = roi;}
		public Loan(int principle, float roi){this.principle = principle;this.roi = roi;}
		public Loan(long loanNo,int principle, float roi)
		{this.loanNo = loanNo;this.principle = principle;this.roi = roi;}


		public void setLoanNo(long loanNo){this.loanNo=loanNo;}
		public void setPrinciple(int principle){this.principle = principle;}
		public void setRoi(float roi){this.roi = roi;}
		public long getLoanNo(){return loanNo;}
		public int getPrinciple(){return principle;}
		public float getRoi(){return roi;}
		
		public String toString(){
			return loanNo+" "+principle+" "+roi+"\n";
		}
	}
	public class IDFC{
		public static void main(String[] arr){
			Loan loan1 = new Loan(876567876545678L,150000,16);
			Loan loan2 = new Loan();
			loan2.setLoanNo(3456545676545L);
			loan2.setRoi(8.9f);
			loan2.setPrinciple(91700);
			System.out.println(loan2);
		}
	}
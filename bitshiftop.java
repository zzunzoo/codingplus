class SystemOutPrintln {
	public static void main(String[] args) {
		byte num;
		
		
		num = 2;
		System.out.println((byte)(num << 1) + " ");
		System.out.println((byte)(num << 2) + " ");
		System.out.println((byte)(num << 3) + " " + '\n');
		
		num = 8;
		System.out.println((byte)(num >> 1) + " ");
		System.out.println((byte)(num >> 2) + " ");
		System.out.println((byte)(num >> 3) + " " + '\n');
		
		num = -8;
		System.out.println((byte)(num >> 1) + " ");
		System.out.println((byte)(num >> 2) + " ");
		System.out.println((byte)(num >> 3) + " " + '\n');
	} 
}

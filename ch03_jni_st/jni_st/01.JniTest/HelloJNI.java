class HelloJNI
{
	............
	............
	
	static {
		//System.loadLibrary("hellojni");
		System.load("/work/JniTest/01.JniTest/hellojni.so");
	}
	
	public static void main(String[] args) {
		HelloJNI myJNI = new HelloJNI();
		
		myJNI.printHello();
		myJNI.printString("Hello from printString_cFunction!!");
	}
	
}

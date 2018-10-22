package android.app;

import android.os.RemoteException;

public class HelloWorldManager
{
	private final IHelloWorld mService;
	
	/**
	* package private on purpose
	*/
	HelloWorldManager(IHelloWorld service) {
		mService = service;
	}
	
	public void printHello() {
		try {
			mService.printHello();
		} catch (RemoteException e) {
		}
	}
}
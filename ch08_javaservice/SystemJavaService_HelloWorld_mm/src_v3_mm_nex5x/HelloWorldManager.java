package android.app;

import android.content.Context;
import android.os.RemoteException;

public class HelloWorldManager
{
	private final IHelloWorld mService;
	
	/**
	* package private on purpose
	*/
	HelloWorldManager(IHelloWorld service, Context ctx) {
		mService = service;
	}
	
	public void printHello() {
		try {
			mService.printHello();
		} catch (RemoteException e) {
		}
	}
}

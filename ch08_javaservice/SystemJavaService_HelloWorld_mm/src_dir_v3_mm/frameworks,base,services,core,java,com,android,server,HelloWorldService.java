//package android.app;
package com.android.server;

import android.os.RemoteException;
import android.content.Context;
import android.util.Log;
//import com.android.server.SystemService;

import android.app.IHelloWorld;
import android.os.IBinder;

//public class HelloWorldService extends IHelloWorld.Stub {
//public class HelloWorldService extends SystemService {
//public final class HelloWorldService extends SystemService {
class HelloWorldService extends SystemService {
	private static final String TAG = "HelloWorldService";
	//Context mContext;
	//private final Context mContext;
	
	
	public HelloWorldService(Context context) {		
		super(context);
		//mContext = context;
	}
	
	/*
	public HelloWorldService() {

	}
	*/
	
	@Override
    public void onStart() {
    	publishBinderService(Context.HELLO_SERVICE, mService);
    	//publishBinderService(Context.HELLO_SERVICE, new BinderService());
    	//publishLocalService(PowerManagerInternal.class, new LocalService());
	}
	
	/*
	public void printHello() throws RemoteException {
		Log.i(TAG, "-----> Hello, Java System Service!!!!");
	}
	*/
	
	
	private final IBinder mService = new IHelloWorld.Stub() {
        @Override
        public void printHello(){
			Log.i(TAG, "-----> Hello, Java System Service!!!!");
		}
	};
	
}

package com.restart.locojoy.untiyc;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

//     Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
//        System.loadLibrary("MyJni");
    }

    @Override
        protected void onCreate(Bundle savedInstanceState) {    super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(getString());
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
//    public native String stringFromJNI();
//
    public native static String getString();
    public native static Object getJvmObject();
//
//    public static native String showDialogFromJavaObj(DemoBo obj);
//
//    //c语言中调用java中无参方法
//    public native void callMethod1();
//    //c语言中调用java中int参数方法
//    public native void callMethod2();
//    //c语言中调用java中参数为String的方法
//    public native void callMethod3();
//    //c语言调用java中静态方法
//    public native void callMethod4();
//    //c语言调用java中其他类的方法
//    public native void callMethod5();

}

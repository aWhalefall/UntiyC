package com.restart.locojoy.untiyc;

/**
 * 提供给C代码调用
 */
public class ParseData {

    public void sayHelloFromJava() {
        System.out.println("sayHelloFromJava");
    }

    public int javaAdd(int x, int y) {
        return x + y;
    }

    public void printString(String s) {
        System.out.println("java打印的字符串" + s);
    }

    //c语言中调用java静态方法
    public static void smethod() {
        System.out.println("我是java中的静态方法");
    }
}


#include <jni.h>
#include <cstdio>
#include "NaviteCode.h"

class Singleton {

    JavaVM *globleJvm;

private:
    static Singleton instance;
private:
    Singleton();

    ~Singleton();

    Singleton(const Singleton &);

    Singleton &operator=(const Singleton &);

public:
    static Singleton Singleton::getInstance() {
        return instance;
    }

public:
    void setJavaJvm(JavaVM *javaVM) {
        globleJvm = javaVM;
    }

public:
    JavaVM getJavaJvm() {
        return *globleJvm;
    }
//    void* fun1(void*){
//        printf("%d\n", Singleton::getInstance());
//    }
};
//
// Created by Administrator on 2019/8/17.
//

typedef struct Parameter {
    int a;
    int b;
} Param;


typedef void (*CallBack)(Param* p);

void TestFunc(CallBack cb){
    Param p;
    p.a = 10;
    p.b = 20;
    cb(&p);
}


//
// Created by Administrator on 2019/8/16.
// 提供给C# 去调用的C 代码结构体
//

#ifndef UNTIYC_JAVACUNITY_H
#define UNTIYC_JAVACUNITY_H

#endif //UNTIYC_JAVACUNITY_H

typedef struct Parameter {
    int a;
    int b;
} Param;


typedef void (*CallBack)(Param *p);

void TestFunc(CallBack cb) {
    Param p;
    p.a = 10;
    p.b = 20;
    cb(&p);
}
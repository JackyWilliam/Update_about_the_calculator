//
//  test.cpp
//  for learning C++
//  26/03/19
//  © 2019 Tramme Inc.
//
//

#include <iostream>
#include <cmath>              //  调用头文件cmath（C++格式）或math.h（c格式）
void func(int n);               //  自定函数func
void fun(int n);
void ssin(int n);
void ttan(int n);
void coss(int n);
void func1(int n);
void cott(int n);
void secc(int n);
void cscc(int n);
using namespace std;
                               //  先自定函数
int sum(int a, int b)          //  加法的函数
{
    int fin;
    
    fin = a + b;               //  列出大体公式(或者说是算法【不是标准定义】)
    return (fin);
}

int mins(int a, int b)        //  加法的函数
{
    int fin1;
    
    fin1 = a - b;            //  同上
    return (fin1);
}

int time(int a, int b)        //  乘法的函数
{
    int fin2;
    
    fin2 = a * b;            //  同上
    return (fin2);
}

int divid(int a, int b)       //  除法的函数
{
    int fin3;
    
    fin3 = a / b;            //  同上
    return (fin3);
}


int main()                  //  主函数体
{
    int e;
    int a;
    int b;
    int c;
    int d;
    double num;          //  为了使用sqrt()函数，要用double声明数字
    int result;
    cout << "版本：0.0.0.2" << endl;
    cout << "请选择你需要的计算方式" << endl;
    cout << "***********************" << endl;
    cout << "*    1. 加法           *" << endl;
    cout << "*    2. 减法           *" << endl;
    cout << "*    3. 乘法           *" << endl;
    cout << "*    4. 除法           *" << endl;
    cout << "*    5. 关于计算器     *" << endl;
    cout << "*    6. 次方           *" << endl;
    cout << "*    7. 根号           *" << endl;
    cout << "*    8. 三角函数        *" << endl;
    cout << "*    9. 关闭           *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> e;                                                       //  输入语句
    switch (e) {
        case 1:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = sum(a, b);                                      //  套用上面写的函数，下同
            cout << "你的答案是: " << result << endl;
            func(1);
            break;
        case 2:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = mins(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 3:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = time(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 4:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = divid(a, b);
            cout << "你的答案是:" << result << "(保留整数)" << endl;
            func(1);
            break;
        case 5:
            cout << "除法保留一位小数，此计算器纯粹用了学习制作C++程序，并无商业用途！未经作者允许，不可商用或者公开使用并不声明著作权！！！一经发现，后果自负！！！" << endl;
            cout << "图标的著作权属于苹果(中国)" << endl;
            cout << "© 2019 Tramme Inc." << endl;
            func(1);
            break;
        case 6:
            cout << "请输入你需要的计算方式" << endl;
            cout << "*********************" << endl;
            cout << "*     1. 平方        *" << endl;
            cout << "*     2. 立方        *" << endl;
            cout << "*     3. 自定义次方   *" << endl;
            cout << "*     4. 返回        *" << endl;
            cout << "*********************" << endl;
            cout << "请输入你的选项：";
            cin >> d;
            switch (d) {
                case 1:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 2);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 2:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 3);                                    //  pow()函数需要cmath头文件支持，和sqrt()一样
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 3:
                    cout << "请输入数字（两个 前面写指数，后面写幂）:";
                    cin >> a >> b;
                    c = pow(a, b);
                    cout << "你的答案是:" << c << endl;                 //  打印答案
                    fun(1);
                    break;
                case 4:
                    func(1);
                    break;
                default:
                    cout << "无效答案返回上一步" << endl;
                    fun(1);
                    break;
            }
            break;
        case 7:
            cout << "请输入数字：";
            cin >> num;
            c = sqrt(num);
            cout << "你的答案是:" << c << endl;
            func(1);
            break;
        case 8:
            func1(1);
            break;
        case 9:
            cout << "关闭此计算器" << endl;
            break;
        default:
            cout << "无效答案，回到主页面" << endl;
            func(1);                                     //  自定函数显示回路
            break;
    }
    return 0;
}

void func(int n)
{
    int e;
    int a;
    int b;
    int c;
    int d;
    int result;
    double num;
    cout << endl << endl << "版本：0.0.0.2" << endl;
    cout << "请选择你需要的计算方式" << endl;
    cout << "***********************" << endl;
    cout << "*    1. 加法           *" << endl;
    cout << "*    2. 减法           *" << endl;
    cout << "*    3. 乘法           *" << endl;
    cout << "*    4. 除法           *" << endl;
    cout << "*    5. 关于计算器     *" << endl;
    cout << "*    6. 次方           *" << endl;
    cout << "*    7. 平方根         *" << endl;
    cout << "*    8. 三角函数        *" << endl;
    cout << "*    9. 关闭           *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> e;                                                       //  输入语句
    switch (e) {
        case 1:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = sum(a, b);                                      //  套用上面写的函数，下同
            cout << "你的答案是: " << result << endl;
            func(1);
            break;
        case 2:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = mins(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 3:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = time(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 4:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = divid(a, b);
            cout << "你的答案是:" << result << "(保留整数)" << endl;
            func(1);
            break;
        case 5:
            cout << "除法保留一位小数，此计算器纯粹用了学习制作C++程序，并无商业用途！未经作者允许，不可商用或者公开使用并不声明著作权！！！一经发现，后果自负！！！" << endl;
            cout << "图标的著作权属于苹果(中国)" << endl;
            cout << "© 2019 Tramme Inc." << endl;
            func(1);
            break;
        case 6:
            cout << "请输入你需要的计算方式" << endl;
            cout << "*********************" << endl;
            cout << "*     1. 平方        *" << endl;
            cout << "*     2. 立方        *" << endl;
            cout << "*     3. 自定义次方   *" << endl;
            cout << "*     4. 返回        *" << endl;
            cout << "*********************" << endl;
            cout << "请输入你的选项：";
            cin >> d;
            switch (d) {
                case 1:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 2);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 2:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 3);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 3:
                    cout << "请输入数字（两个 前面写指数，后面写幂）:";
                    cin >> a >> b;
                    c = pow(a, b);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 4:
                    func(1);
                    break;
                default:
                    cout << "无效答案返回上一步" << endl;
                    fun(1);
                    break;
            }
        case 7:
            cout << "请输入数字：";
            cin >> num;
            c = sqrt(num);
            cout << "你的答案是:" << c << endl;
            func(1);
            break;
        case 8:
            func1(1);
            break;
        case 9:
            cout << "关闭此计算器" << endl;
            break;
        default:
            cout << "无效答案，回到主页面" << endl;
            func(1);                                     //  自定函数显示回路
            break;
    }
}

void fun(int n)
{
    int d;
    int a;
    int b;
    int c;
    
    cout << endl << endl << "请输入你需要的计算方式" << endl;
    cout << "*********************" << endl;
    cout << "*     1. 平方        *" << endl;
    cout << "*     2. 立方        *" << endl;
    cout << "*     3. 自定义次方   *" << endl;
    cout << "*     4. 返回        *" << endl;
    cout << "*********************" << endl;
    cout << "请输入你的选项：";
    cin >> d;
    switch (d) {
        case 1:
            cout << "请输入数字（一个）:";
            cin >> a;
            c = pow(a, 2);
            cout << "你的答案是:" << c << endl;
            fun(1);
            break;
        case 2:
            cout << "请输入数字（一个）:";
            cin >> a;
            c = pow(a, 3);
            cout << "你的答案是:" << c << endl;
            fun(1);
            break;
        case 3:
            cout << "请输入数字（两个 前面写指数，后面写幂）:";
            cin >> a >> b;
            c = pow(a, b);
            cout << "你的答案是:" << c << endl;
            fun(1);
            break;
        case 4:
            func(1);
            break;
        default:
            cout << "无效答案返回上一步" << endl;
            fun(1);
            break;
    }
}

void func1(int n)
{
    int a;
    
    cout << endl << "请输入你想要的计算方式" << endl;
    cout << "************************" << endl;
    cout << "*       1. 正弦(sin)    *" << endl;
    cout << "*       2. 余弦(cos)    *" << endl;
    cout << "*       3. 正切(tan)    *" << endl;
    cout << "*       4. 余切(cot)    *" << endl;
    cout << "*       5. 正割(sec)    *" << endl;
    cout << "*       6. 余割(csc)    *" << endl;
    cout << "*       7. 返回         *" << endl;
    cout << "************************" << endl;
    cout << "输入你的选项：";
    cin >> a;
    switch(a){
        case 1:
            ssin(1);
            func1(1);
            break;
        case 2:
            coss(1);
            func1(1);
            break;
        case 3:
            ttan(1);
            func1(1);
            break;
        case 4:
            cott(1);
            func1(1);
            break;
        case 5:
            secc(1);
            func1(1);
            break;
        case 6:
            cscc(1);
            func1(1);
            break;
        case 7:
            func(1);
            break;
        default:
            cout << endl << "错误答案，返回主页面。" << endl;
            func1(1);
            break;
    }
}

void ssin(int n)                              //  定义三角函数
{
    float angle, radian;
    const float PI = 3.14159;
    cout << "请输入角度:";
    cin >> angle;
    radian = angle * PI / 180;
    float sine;
    sine = sin(radian);
    cout << "你的答案: " << sine << endl;
}

void ttan(int n)
{
    float angle, redian;
    const float PI = 3.14159;
    cout << "请输入角度:";
    cin >> angle;
    redian = angle * PI / 180;
    float tane;
    tane = tan(redian);
    cout << "你的答案是: " << tane << endl;
}

void coss(int n)
{
    float angle, radian;
    const float PI = 3.14159;
    cout << "请输入角度: ";
    cin >> angle;
    radian = angle * PI / 180;
    float coss;
    coss = cos(radian);
    cout << "你的答案是: " << coss << endl;
}

void cott(int n)
{
    float angle, radian;
    const float PI = 3.14159;
    cout << "请输入角度：";
    cin >> angle;
    radian = angle * PI / 180;
    float tann;
    tann = tan(radian);
    float cott;
    cott = 1 / tann;
    cout << "你的答案是: " << cott << endl;
}

void secc(int n)
{
    float angle, radian;
    const float PI = 3.14159;
    cout << "请输入角度：";
    cin >> angle;
    radian = angle * PI / 180;
    float cosss;
    cosss = cos(radian);
    float seccc;
    seccc = 1 / cosss;
    cout << "你的答案是：" << seccc << endl;
}

void cscc(int n)
{
    float angle, radian;
    const float PI = 3.14159;
    cout << "请输入角度：";
    cin >> angle;
    radian = angle * PI / 180;
    float sinn;
    sinn = sin(radian);
    float csccc;
    csccc = 1 / sinn;
    cout << "你的答案是：" << csccc << endl;             //  没有完成衔接，注意！！！！！
}

# -
统计文件内纯英文字符数、单词数、句子数的作业
路径) 统计文件句子数
wc.exe -w(文件路径) 统计文件单词数
wc.exe -o(文件路径) 统计文件空行数，代码行数，注释行数
1.项目简介及其相关用法
本程序通过读取文本文档实现了以下功能
wc.exe -c(文件路径) 统计文件字符数
wc.exe -s(文件
并且以生成result.txt的文本文档的形式显示结果

2.文件列表及其相关说明
文本1.txt    测试文件1；
文本2.txt    测试文件2；
文本3.txt    测试文件3；
wc.exe    功能文件；

3.例程运行及其相关结果（单元测试）
测试一：
测试文件：文本1.txt
#include <iostream>
using namespace std;
int main()
{int a,b,c;
cout<<"two number:";
cin>>a>>b;
c=a+b;
cout<<"c=“<<c<<endl;
}

命令行：wc.exe  -cC:\Users\Administrator\Desktop\文本1.txt
测试结果：
字符数：126

命令行：wc.exe  -xC:\Users\Administrator\Desktop\文本1.txt
测试结果：无法运行

命令行：wc.exe  -cC:\Users\Administrator\Desktop\wenben1.txt
测试结果：file read failed.

命令行：wc.exe  -sC:\Users\Administrator\Desktop\文本1.txt
测试结果：
句子数：8

命令行：wc.exe  -sC:\Users\Administrator\Desktop\wenben1.txt

测试结果：file read failed.

命令行：wc.exe  -wC:\Users\Administrator\Desktop\文本1.txt
测试结果：
单词数：24

命令行：wc.exe  -wC:\Users\Administrator\Desktop\wenben1.txt
测试结果：file read failed.

命令行：wc.exe  -oC:\Users\Administrator\Desktop\文本1.txt
测试结果：
代码行：8
空行：2
注释行：0

命令行：wc.exe  -oC:\Users\Administrator\Desktop\wenben1.txt
测试结果:file read failed

测试二：
测试文件：文本2.txt
#include "stdio.h"
#include "windows.h"
main()
{
Sleep(3000);
printf("HelloWorld\n");
}

命令行：wc.exe  -cC:\Users\Administrator\Desktop\文本2.txt
测试结果：
字符数：87

命令行：wc.exe  -xC:\Users\Administrator\Desktop\文本2.txt
测试结果：无法运行

命令行：wc.exe  -cC:\Users\Administrator\Desktop\wenben2.txt
测试结果：file read failed.

命令行：wc.exe  -sC:\Users\Administrator\Desktop\文本2.txt
测试结果：
句子数：6

命令行：wc.exe  -sC:\Users\Administrator\Desktop\wenben2.txt

测试结果：file read failed.

命令行：wc.exe  -wC:\Users\Administrator\Desktop\文本2.txt
测试结果：
单词数：12

命令行：wc.exe  -wC:\Users\Administrator\Desktop\wenben2.txt
测试结果：file read failed.

命令行：wc.exe  -oC:\Users\Administrator\Desktop\文本2.txt
测试结果：
代码行：5
空行：2
注释行：0

命令行：wc.exe  -oC:\Users\Administrator\Desktop\wenben2.txt
测试结果:file read failed

测试三：
测试文件：文本3.txt
int main()
{
    HINSTANCE hInstance=GetModuleHandle ( NULL );
    TCHAR szAppName[]=TEXT ( "teris" );
    MSG msg;
    WNDCLASS wc;
 
    wc.style=CS_HREDRAW|CS_VREDRAW;
    wc.lpfnWndProc=WndProc;
    wc.cbClsExtra=0;
    wc.cbWndExtra=0;
    wc.hInstance=hInstance;
    wc.hIcon=LoadIcon ( NULL,IDI_APPLICATION );
    wc.hCursor=LoadCursor ( NULL,IDC_ARROW );
    wc.hbrBackground= ( HBRUSH ) GetStockObject ( WHITE_BRUSH );
    wc.lpszMenuName=NULL;
    wc.lpszClassName=szAppName;
    if ( !RegisterClass ( &wc ) )
    {
        printf ( "RegisterClass occur errors!" );
        return 0;
    }
    hwnd=CreateWindow ( szAppName,TEXT ( "Teris Demo" ),
                        WS_OVERLAPPEDWINDOW,
                        0,0,0,0,
                        NULL,
                        NULL,
                        hInstance,
                        NULL );
    ShowWindow ( hwnd,SW_SHOW );
    UpdateWindow ( hwnd );
    while ( GetMessage ( &msg,NULL,0,0 ) )
    {
        TranslateMessage ( &msg );
        DispatchMessage ( &msg );
    }
    return msg.wParam;
}

命令行：wc.exe  -cC:\Users\Administrator\Desktop\文本3.txt
测试结果：
字符数：1071

命令行：wc.exe  -xC:\Users\Administrator\Desktop\文本3.txt
测试结果：无法运行

命令行：wc.exe  -cC:\Users\Administrator\Desktop\wenben3.txt
测试结果：file read failed.

命令行：wc.exe  -sC:\Users\Administrator\Desktop\文本3.txt
测试结果：
句子数：38

命令行：wc.exe  -sC:\Users\Administrator\Desktop\wenben3.txt

测试结果：file read failed.

命令行：wc.exe  -wC:\Users\Administrator\Desktop\文本3.txt
测试结果：
单词数：93

命令行：wc.exe  -wC:\Users\Administrator\Desktop\wenben3.txt
测试结果：file read failed.

命令行：wc.exe  -oC:\Users\Administrator\Desktop\文本3.txt
测试结果：
代码行：36
空行：6
注释行：0

命令行：wc.exe  -oC:\Users\Administrator\Desktop\wenben3.txt
测试结果:file read failed

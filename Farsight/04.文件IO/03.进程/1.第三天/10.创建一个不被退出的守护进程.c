/*************************************************************************
	> File Name:    10.创建一个不被退出的守护进程.c
	> Author:       杨玉春
	> Mail:         www762268@foxmail.com
	> Created Time: 2016年08月03日 星期三 20时09分44秒
*************************************************************************/
/*
    1、创建一个守护进程,并保护自己不被退出。思路如下:
        运行如果发现没有文件/tmp/1则生成,同时不断删除/tmp/2,
        如果发现没有文件/tmp/2则生成,同时不断删除/tmp/1;
        如果发现自己生成的文件没有被删除,则将自己再运行一遍。
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    return 0;

   


}

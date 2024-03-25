#include <iostream>
#include <string.h>
#include <string>
#include "InverTerm.hpp"
using namespace std;
int main(){
    InvertIndex Temp;
    //建立索引
    Temp.set_search_path("../File");
    Temp.ShowFile_List();
    //输出查询的内容根据查询的内容进行搜索
    char Buffer[64]={0};
    cout<<"请输入要搜索的文章: ";
    fflush(NULL);
    fgets(Buffer, sizeof(Buffer), stdin);
    //拆分输入的Buffer语句为一个标题
    string Res(Buffer);
    Temp.Query(Res);
    return 0;
}

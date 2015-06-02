/*
ofstream是从内存到硬盘，ifstream是从硬盘到内存，其实所谓的流缓冲就是内存空间;

　　在C++中，有一个stream这个类，所有的I/O都以这个“流”类为基础的，包括我们要认识的文件I/O，stream这个类有两个重要的运算符：

　　在fstream类中，有一个成员函数open()，就是用来打开文件的，其原型是：

　　void open(const char* filename,int mode,int access);参数：

　　filename：　　要打开的文件名

　　mode：　　　　要打开文件的方式

　　access：　　　打开文件的属性

　　打开文件的方式在类ios(是所有流式I/O类的基类)中定义，常用的值如下：

　　ios::app：　　　以追加的方式打开文件

　　ios::ate：　　　文件打开后定位到文件尾，ios:app就包含有此属性

　　ios::binary：　以二进制方式打开文件，缺省的方式是文本方式。两种方式的区别见前文

　　ios::in：　　　 文件以输入方式打开(文件数据输入到内存)

　　ios::out：　　　文件以输出方式打开(内存数据输出到文件)

　　ios::nocreate： 不建立文件，所以文件不存在时打开失败

　　ios::noreplace：不覆盖文件，所以打开文件时如果文件存在失败

　　ios::trunc：　　如果文件存在，把文件长度设为0
*/
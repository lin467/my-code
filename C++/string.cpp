#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";

    //length表示计算出前面字符串的长度（含空格）
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;

    phrase[0] = 'B';
    cout << phrase << endl;

    //find用于输出查询词组在字符串中从头开始到第一次出现的位置有几个单位
    cout << phrase.find("Academy",0) << endl;

    //substr寻找函数，在此处用于找到第8位字母，输出从第八位开始的3个字母
    cout << phrase.substr(8,3) << endl;

    string resprase;
    resprase = phrase.substr(8,3);

    cout << resprase;

    return 0;
}
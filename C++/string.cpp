#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";

    //length��ʾ�����ǰ���ַ����ĳ��ȣ����ո�
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;

    phrase[0] = 'B';
    cout << phrase << endl;

    //find���������ѯ�������ַ����д�ͷ��ʼ����һ�γ��ֵ�λ���м�����λ
    cout << phrase.find("Academy",0) << endl;

    //substrѰ�Һ������ڴ˴������ҵ���8λ��ĸ������ӵڰ�λ��ʼ��3����ĸ
    cout << phrase.substr(8,3) << endl;

    string resprase;
    resprase = phrase.substr(8,3);

    cout << resprase;

    return 0;
}
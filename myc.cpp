#include <iostream>

class Stu
{
public:
Stu()
{
cout<<"构造函数的调用"<<endl;
}
private:
int m_age;
}

int main()
{
Stu p1;
system("pause");
return 0;
}

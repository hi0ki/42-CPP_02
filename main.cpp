#include <iostream>

class myclass
{
private:
    static int i;
public:
    static void test();
    static void tes1();
};

int myclass::i = 10;

void myclass::test()
{
    i =11;
}
void myclass::tes1()
{
    std::cout << i << std::endl;
}

int main()
{
    myclass::test();
    myclass::tes1();
}
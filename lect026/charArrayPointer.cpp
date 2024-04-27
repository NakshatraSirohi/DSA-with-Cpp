#include <iostream>
using namespace std;

void charArrPtr()
{
    char ch[10] = "abcde";
    int num[10] = {1, 2, 3, 4, 5};

    cout << "printing num = " << num << endl;
    cout << "printing ch = " << ch << endl;
    cout << endl;

    char *cptr = &ch[0];
    cout << "*cptr = " << *cptr << endl;
    cout << "cptr = " << cptr << endl;
    cout << "&cptr = " << &cptr << endl;
    cout << endl;

    char tmp = 'z';
    char *cptr2 = &tmp;
    cout << "*cptr2 = " << *cptr2 << endl;
    cout << "cptr2 = " << cptr2 << endl;
    cout << "&cptr2 = " << &cptr2 << endl;
}

void charArrPtr2()
{
    char ch1[10] = "abcde";
    cout << "ch1 = " << ch1 << endl;

    // RISKY METHOD
    /*
    char *ch2 = "abcde";
    cout << "ch2 = " << ch2 << endl;
    */
}

int main()
{
    charArrPtr2();
    return 0;
}
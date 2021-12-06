#include <iostream>
#include "class.hpp"
using namespace std;

int main()
{
    cloth cl1(10.1, 4.5, black, cotton);
    cloth cl2(14, 5.6, red, lace);
    sewingmachine sw1(Singer, automated);
    patterned_cloth pc1(15, 12.2, yellow, silk, damask);

    if(cl2 > cl1)
    {
        cout << "cl2 is bigger than cl1" << endl;
    }
    else
    {
        cout << "cl2 is smaller than cl1" << endl;
    }
    

    return 0;
}

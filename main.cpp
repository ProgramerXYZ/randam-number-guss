#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <iostream>
using namespace std;

int main()
{

    srand(time(0)); // seed with current time

   

    cout << "welcome to randoum number gusser" << endl;
    cout << "plz select your difficulty 1 for easy \n2 for medium \n3 for hard \n5 for very hard \n 100 for almost impossible";
    int method_input;
    cin>>method_input;
    int max_range;
    if (method_input == 1)
    {
        max_range = 10;
    }
    else if (method_input == 2)
    {
        max_range = 20;
    }
    else if (method_input == 3)
    {
        max_range = 50;
    }
    else if (method_input == 5)
    {
        max_range = 100;
    }
    else if (method_input == 100)
    {
        max_range = 1000;
    }
    else
    {

        return 0;
    }
}
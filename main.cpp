#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <iostream>
using namespace std;

int main()
{
    srand(time(0)); // seed with current time
    
    int input;

    cout<<"welcome to randoum number gusser"<<endl;
    cout<<"plz select your difficulty 1 for easy \n2 for medium \n3 for hard ";
    cin>>input;
    if (input==1)
    {
        auto randam = rand(10);
    }
    

    return 0;
}

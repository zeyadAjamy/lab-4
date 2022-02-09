#include <iostream>
using namespace std;

int main()
{
    int space, height;

    cout << "Enter number of Hight: ";
    cin  >> height;

    for(int i = 1; i <= height; ++i)
    {
        for(space = 0; space < height-i; ++space)
            cout << "  ";

        for(int k =2*i; k>0; k--)
            cout << "* ";
            
        cout << endl;
    }    
    return 0;
}
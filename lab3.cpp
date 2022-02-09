#include <iostream>

using namespace std;
namespace pyr {
    void print_pyramid(){
        int height=0;
        cout << "Enter the height: ";
        cin >> height;
        for (int i =0; i<= height; i++){
            for (int m = 0; m < i; m++){
                cout << "* ";
            }
            cout << "\n";
        }
    }
}

int main()
{
    pyr::print_pyramid();
    return 0;
}
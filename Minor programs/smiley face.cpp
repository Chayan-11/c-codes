#include <iostream>
using namespace std;
int main()
{
    int smile;

    cout << "How many smiley faces do you want to see? \n";
    cin >> smile;

    for (int i=0; i<smile; i++)
    {
        cout << static_cast<char>(1) << "\t";
    }
    cout << endl;
    return 0;
}

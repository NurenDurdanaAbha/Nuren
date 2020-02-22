#include <iostream>

using namespace std;

class BrickWallPatterns
{
    int lengthOfWall;

public:

    void myFunction(int x)
    {
        lengthOfWall = x;

        int a = 0, b = 1, I = 0, numberOfPatterns;

        while(I < lengthOfWall)
        {
            numberOfPatterns = a + b;
            a = b;
            b = numberOfPatterns;
            I = I + 1;
        }

        cout << numberOfPatterns << endl;
    }
};

int main()
{
    long long int wallErLombayitto;

    while(1)
    {
        cin >> wallErLombayitto;

        if(wallErLombayitto == 0)
            break;

        BrickWallPatterns HackerErWall;

        HackerErWall.myFunction(wallErLombayitto);
    }

    return 0;
}

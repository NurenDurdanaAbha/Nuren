#include<iostream>

using namespace std;

int main()
{
    int m,n,x,y,test;

    while(1)
    {
        cin >> test;

        if(test==0)
            break;

            cin >> m >> n;

        while(test--)
        {
            cin >> x >> y;

                if(x>m && y>n)
                    cout << "NE" << endl;
                else if(x<m && y>n)
                    cout << "NO" << endl;
                else if(x<m && y<n)
                    cout << "SO" << endl;
                else if(x>m && y<n)
                    cout << "SE" << endl;
                else if(x==m || y==n || x==m && y==n)
                    cout << "divisa" << endl;
        }
    }

    return 0;
}

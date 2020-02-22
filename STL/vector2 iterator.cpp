#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    vector<int> vect;
    vector<int>::iterator it; ///data type er moto, pointer
                              ///it vector er element access krte parbe

    for(int i=1; i<=5; i++)
        vect.push_back(i);

    for(int i=0; i<vect.size(); i++)
        printf("%d  ",vect[i]);

    it = vect.begin(); ///vector er first element a point krbe
   // it++;
    cout<<endl<<*it<<endl;

//    it = vect.end();
//    cout<<*it<<endl;

        /// vect.end() hoile last element er porer cell ta

    for(it=vect.begin(); it<vect.end(); it++)
        printf("%d  ",*it);

    return 0;
}
vect.push_back(10);
    vect.push_back(432);
    vect.push_back(32);
    vect.push_back(52);
    vect.push_back(17);
    vect.push_back(50);

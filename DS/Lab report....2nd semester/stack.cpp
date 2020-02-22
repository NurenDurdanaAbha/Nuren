#include<stdio.h>
#include<stack>

using namespace  std;

int main()
{
    stack  <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    printf("%d ", s.top());

    s.pop();

    printf("%d ",s.top());

    return 0;
}

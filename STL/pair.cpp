#include<iostream>
#include<stdio.h>
#include<utility>
#include<vector>

using namespace std;

int main()
{
    pair<string,int>p; //("Nuren",124);

//    p.first="Nuren";
//    p.second=124;

    //  p = make_pair("Nuren",124);

  //  cout<<p.first<<" "<<p.second<<endl;

  vector<pair<int,string> >v;
  vector<pair<int,string> >::iterator it;

  v.push_back(make_pair(123,"Fahim"));
  v.push_back(make_pair(124,"Nuren"));
  v.push_back(make_pair(125,"Navel"));
  v.push_back(make_pair(127,"Soma"));

  for(it=v.begin(); it!=v.end(); it++)
    cout<<it->first<<" "<<it->second<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main ()
{
string s;
cout<<"Enter Your Text To Decrypt : "<<endl<<endl;
cin>>s;
cout<<"Enter Your Key : "<<endl;
reverse(s.begin(),s.end());
string t;
cin>>t;
vector<char>V;
for(int i=0;i<s.size();i++)
{
int k = i%t.length();
if(s[i]==33) V.push_back(0);
else if(s[i]>='a'&&s[i]<='z')
{
int P = s[i]-(t[k]-'0');
if(P<97) P=P-97+123;
V.push_back(P);
}
else if(s[i]>='A'&&s[i]<='Z')
{
int P = s[i]-(t[k]-'0');
if(P<65)P=P-65+91;
V.push_back(P);
}

}
cout<<endl<<endl;
for(int i=0;i<V.size();i++) cout<<V[i];
cout<<endl<<endl;
}

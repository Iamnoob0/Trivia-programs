#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int t;
cin >> t;
vector<string> v;
while(t--)
{
string s;
cin >> s;
v.push_back(s);
}
 
for(int i = 0; i < v.size(); ++i)
{
string s = v[i];
reverse(s.begin(), s.end());
auto it = find(v.begin(), v.end(), s);
if(it != v.end())
{
cout << s.length() << " " << s[s.length()/2];
break;
}
}
return 0;
}
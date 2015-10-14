#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()

{char *cp="hello world";
while(cp&&*cp)
	{cout<<cp<<"  "<<*cp<<endl;

*cp++;}


return 0;
}

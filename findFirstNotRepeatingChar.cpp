#include <iostream>
#include <string>

using namespace std;
class Solution {
	public:
	static int FirstNotRepeatingChar(string &str) {
			int a[256]={0};
			int i=0;
			while(str[i])
			{
				a[str[i]]++;
				i++;
			}
			i=0;
			while(str[i])
			{
				if(a[str[i++]]==1)
					return i;
			}
			return -1;
		 }
};
int main(int argc,char *argv[])
{
	string a;
	getline(cin,a);
	cout<<Solution::FirstNotRepeatingChar(a)<<endl;
	return 0;
}

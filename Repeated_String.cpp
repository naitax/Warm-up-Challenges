#include <iostream>
#include <string>

using namespace std;
	
int main()
{
	string s;
	cin>>s;
	long long n;
	cin >> n;
	long long count = 0, result=0;
	
	for (int i = 0; i <s.length(); i++) //count number of a's in original string 
	{
		if (s[i] == 'a') count++;
	}
	
	long long x = (n/s.length())*count; //number of a's in x repetitions
	
	for (int i = 0; i < n%s.length(); i++) //number of a's in remainder
	{
		if (s[i] == 'a') result++;
		
	}

	cout << result + x; 
	

	return 0;
}

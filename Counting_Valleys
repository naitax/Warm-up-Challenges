#include <iostream>

using namespace std;

int main()
{
	int current_position = 0, count = 0;
	int number_of_steps;
	string path;
	
	cin >> number_of_steps;
	cin >> path;

	for (int i = 0; i < path.length(); i++)
	{
		if (path[i] == 'D')
		{
			current_position--;
			
		}
		if (path[i]=='U')
		{
			if (current_position == -1)
			{
				count++;
			}
			current_position++;
			
		}

	}
	cout << count;
	return 0;
}

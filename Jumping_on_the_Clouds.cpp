#include <iostream>
#include <vector>

using namespace std;

int jumpingOnClouds(vector <int> c)
{
    int jumps = 0;
    int length = c.size();

    for (int i=1; i<length; jumps++)
    {

        if (c[i + 1] != 1 && i < length-1)
            i += 2;
        else i++;

    }
    return jumps;
}
int main()
{
   int N; //number of clouds
   cin>>N;
   vector <int> clouds(N);
   for (int i=0; i<N; i++)
   {
       cin>>clouds[i];
   }
   
   int result = jumpingOnClouds(clouds);
    cout << result;

 
    return 0;
}

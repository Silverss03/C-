#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n ; 
	cin >> n ; 
	vector<int> vt(n), res ;
	map<int, vector <int>> mp ; 
	for(int i = 0 ; i < n ; i++) cin >> vt[i] ; 
	for(int i = 0 ; i < n ; i++)
	{
		if(i == 0)
		{
			res.push_back(vt[i]) ;
			mp[i] = res ;
		}
		else
		{
			int s = res.size();
            if (vt[i] > res[s - 1])
            {
                res.push_back(vt[i]);
            }
            else
            {
                int left = 0, right = s - 1, pos = -1;
                while (left <= right)
                {
                    int mid = (left + right) / 2;
                    if (res[mid] < vt[i])
                    {
                        left = mid + 1;
                        pos = mid + 1;
                    }
                    else
                    {
                        right = mid - 1;
                        pos = mid;
                    }
                }
                res.insert(res.begin() + pos, vt[i]);
            }
			mp[i] = res ; 
		}
	}
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		cout << "Buoc " << i << ": " ;
		for(auto x : mp[i])
		{
			cout << x << " " ;
		}
		cout << endl;
	}
}


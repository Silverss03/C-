#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n ; 
	cin >> n ; 
	vector<int> vt(n), res ;
	for(int i = 0 ; i < n ; i++) cin >> vt[i] ; 
	for(int i = 0 ; i < n ; i++)
	{
		cout << "Buoc " << i << ": " ;
		if(i == 0)
		{
			cout << vt[i] << endl;
			res.push_back(vt[i]) ;
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

            for (auto x : res) cout << x << " ";
            cout << endl;
		}
	}
}


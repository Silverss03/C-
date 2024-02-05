#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    while(tests--) {
        int k;
        cin >> k ;
        string num ;
        cin >> num ;
        int i = 0 ;
		while(k > 0)
		{
			char tmp = '0' ;
			for(int j = i + 1 ; j < num.length() ; j++)
			{
				tmp = max(tmp, num[j]) ; 
			}
			if(num[i] >= tmp)
			{
				i++;
			}
			else
			{
				string res = num;
				for(int j = i + 1 ; j < num.length() ; j++)
				{
					if(num[j] == tmp)
					{
						string tmp = num ;
						swap(tmp[j], tmp[i]) ;
						res = max(res, tmp) ;
					}
				}
				num = res ;
				k-- ;
			}
		}
		cout << num << endl;  
    }
}

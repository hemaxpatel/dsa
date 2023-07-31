#include <iostream>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	char S[10][100]; 
	int T, i, j, flag=1;
	cin >> T;
	
	for(i=0; i<T; i++)
    {
        cin >> S[i];
    }
    for(i=0; i<T; i++)
    {
        for(j=0, flag=1; S[i][j] != '\0'; j++)
        {
            if(S[i][j] == '1')
            {
                if(flag >= 1)
                {
                    flag++;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else if(S[i][j] == '0' && flag > 1)
            {
                flag = -1;
            }
            
        }
        if(flag == 0 || flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
	
	return 0;
}
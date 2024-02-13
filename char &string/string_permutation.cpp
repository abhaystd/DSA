#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str1[500], str2[500];
    int freq[256];
    cin >> str1 >> str2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2){
        cout << "false" << endl;
    }
    else{
        for (int i = 0; i < 256; i++){
            freq[i] = 0;
        }

        for (int i = 0; i < len1; i++){
            freq[str1[i]] += 1;
        }

        for (int i = 0; i < len2; i++){
            freq[str2[i]] -= 1;
        }
        for (int i = 0; i < 256; i++){
            // cout<<freq[i]<<endl;
            if (freq[i] != 0){
                cout << "false" << endl;
                break;
            }
            else if (i == 255){
                cout << "true" << endl;
            }
        }
    }
}
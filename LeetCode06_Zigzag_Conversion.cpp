#include <iostream>

using namespace std;

string convert(string s, int numRows)
{
    if(numRows == 1)
    {
        return s;
    }

    string result = "";
    int cycle = 2 * numRows - 2;
    for(int i = 0; i < numRows; i++)
    {
        for(int j = i; j < s.length(); j += cycle)
        {
            result += s[j];
            if(i!= 0 && i!= numRows - 1 && j + cycle - 2 * i < s.length())
            {
                result += s[j + cycle - 2 * i];
            }
        }
    }
    return result;

}

int main()
{
    string s = "PAYPALISHIRING";
    cout<< convert(s, 3);
    return 0;
}
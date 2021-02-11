class Solution
{

public:
    string compress(string str)

    {
        string ans = "";
        int n = str.length();
        int i = n - 1;
        while (i >= 0)
        {
            if (i % 2 == 0)
            {
                ans = str.at(i) + ans;
                i--;
            }
            else
            {
                if (str.substr(0, i / 2 + 1) == str.substr(i / 2 + 1, i / 2 + 1))
                {
                    ans = "*" + ans;
                    i = i / 2;
                }
                else
                {
                    ans = str.at(i) + ans;
                    i--;
                }
            }
        }
        return ans;
    }
};
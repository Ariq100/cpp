// https://leetcode.com/problems/ipo/?envType=daily-question&envId=2024-06-15


class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) 
    {
        #include <iostream>
        #include <algorithm>
        #include <vector>
        using namespace std;
        int cap, MaxProfit, profit, projects, index, MaxProfitIndex;
        vector<int> indexUsed;

        MaxProfit = 0;
        //sort(begin(capital), end(capital));

        projects = capital.size();

        while (k > 0)
        {
            for (int i = 0; i < capital.size(); i++)
            {
                cap = capital[i];

                if (cap != -10)
                {
                    if (w >= cap)
                    {
                        profit = profits[i];
                        
                        if(profit > MaxProfit)
                        {
                            MaxProfit = profit;
                            MaxProfitIndex = i;
                        }
                    }
                }
            }

            for (int j = 0; j < indexUsed.size(); j++)
            {
                index = indexUsed[j];

                if (index != MaxProfitIndex)
                {
                    w = w + MaxProfit;
                    //capital[MaxProfitIndex] = 0;
                    indexUsed.push_back(MaxProfitIndex);
                }
            }
            k = k - 1;
            //index = index + 1;
        }

        return w;
    }
};
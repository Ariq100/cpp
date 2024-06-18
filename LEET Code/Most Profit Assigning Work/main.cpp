// https://leetcode.com/problems/most-profit-assigning-work/?envType=daily-question&envId=2024-06-18
// Problem assigning the maximum profit (cases when less difficult tasks have more profit than more difficult tasks)

// TestCase(problem):
// difficulty =
// [68,35,52,47,86]
// profit =
// [67,17,1,81,3]
// worker =
// [92,10,85,84,82]


class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) 
    { 
        int temp, temp1;
        bool Sorted, SortedOnce;
        long long TotalProfit;

        TotalProfit = 0;
        Sorted = false;
        SortedOnce = false;

        while (Sorted == false)
        {
            for(int i = 0; i < (difficulty.size()-1); i++)
            {
                if (difficulty[i] > difficulty[i+1])
                {
                    temp = difficulty[i];
                    difficulty[i] = difficulty[i+1];
                    difficulty[i+1] = temp;

                    temp1 = profit[i];
                    profit[i] = profit[i+1];
                    profit[i+1] = temp1;

                    SortedOnce = true;
                }

            }

            if(SortedOnce == true)
            {
                SortedOnce = false;
            }
            else
            {
                Sorted = true;
            }
        }

        for (int i = 0; i < worker.size(); i++)
        {
            //workcapability = worker[i];

            for(int j = 0; j < (difficulty.size()-1); j++)
            {
                //diff = difficulty[i];
                if (worker[i] <= difficulty[j+1] && worker[i] >= difficulty[j])
                {
                    if(worker[i] == difficulty[j+1])
                    {

                        TotalProfit = TotalProfit + profit[j+1];
                    }
                    else
                    {
                        TotalProfit = TotalProfit + profit[j];
                    }

                    break;
                }
                else if(worker[i] >= difficulty[(difficulty.size()-1)])
                {
                    TotalProfit = TotalProfit + profit[(difficulty.size()-1)];
                    break;
                }
            }
        }

        return TotalProfit;
    }
};
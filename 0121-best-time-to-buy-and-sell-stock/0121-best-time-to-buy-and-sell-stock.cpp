class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int max1 = 0;
        stack <int> st;

        st.push(prices[0]);

        for(int x: prices)
        {
            if(x > st.top()) max1 = max(max1, x-st.top());
            else st.push(x); 
        }

        return max1;    
    }
};
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st; // {start_index, height}
        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++) {
            int start = i;

            while (!st.empty() && st.top().second > heights[i]) {
                int index = st.top().first;
                int height = st.top().second;
                st.pop();

                int width = i - index;
                maxArea = max(maxArea, height * width);

                start = index;
            }

            st.push({start, heights[i]});
        }

        while (!st.empty()) {
            int index = st.top().first;
            int height = st.top().second;
            st.pop();

            int width = heights.size() - index;
            maxArea = max(maxArea, height * width);
        }

        return maxArea;
    }
};
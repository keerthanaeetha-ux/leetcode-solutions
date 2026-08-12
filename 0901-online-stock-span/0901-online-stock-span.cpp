#include <stack>
#include <utility>

class StockSpanner {
private:
    // Stack stores pairs: {price, span}
    std::stack<std::pair<int, int>> st;

public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        
        // Accumulate span of all previous smaller or equal prices
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        
        // Push the consolidated (price, span) pair
        st.push({price, span});
        
        return span;
    }
};
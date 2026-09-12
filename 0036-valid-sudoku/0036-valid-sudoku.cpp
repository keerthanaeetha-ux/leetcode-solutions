class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Track seen digits for rows, columns, and boxes
        bool seenRows[9][9] = {};      // [row_index][digit-1]
        bool seenCols[9][9] = {};      // [col_index][digit-1]
        bool seenBoxes[9][9] = {};     // [box_index][digit-1]

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char c = board[i][j];
                if (c == '.') continue; // Skip empty cells

                int digit = c - '1';    // Convert '1'-'9' to 0-8
                int boxIndex = (i / 3) * 3 + (j / 3);

                // Check if duplicate exists
                if (seenRows[i][digit]) return false;
                if (seenCols[j][digit]) return false;
                if (seenBoxes[boxIndex][digit]) return false;

                // Mark as seen
                seenRows[i][digit] = true;
                seenCols[j][digit] = true;
                seenBoxes[boxIndex][digit] = true;
            }
        }
        return true;
    }
};
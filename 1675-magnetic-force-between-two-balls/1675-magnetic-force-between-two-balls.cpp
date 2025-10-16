class Solution {
public:
        bool canPlace(vector<int>& pos ,int ball, int dist) {
            int count = 1; 
            int last = pos[0]; 

            for(int i = 1; i<pos.size(); i++) {
                if(pos[i] - last >= dist) {
                    count++; 
                    last = pos[i]; 
                }
                if (count >= ball) return true; 
            }
            return false; 
        }
    int maxDistance(vector<int>& position, int m) {


        sort(position.begin(), position.end()); 
        int left = 1, right = position.back() - position.front(); 
        int ans; 

        while(left<=right) {
            int mid = (left + right) / 2; 
            if(canPlace(position, m, mid)) {
                ans = mid; 
                left = mid+1; 
            }
            else {
                right = mid-1; 
            }
        }
        return ans; 
    }
};
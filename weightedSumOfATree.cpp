
    public:
        long long weightedSum(vector<int>& parent, vector<int>& nums) {
            int n = nums.size();
            if(n == 1) {
                return nums[0];
            }

            vector<int> depth(n);
            depth[0] = 1;

            int height = 1;
            for (int i = 1; i < n; i++) {
                depth[i] = 1 + depth[parent[i]];
                height = max(height, depth[i]);
            }

            long long ans = 0;
            for (int i = 0; i < n; i++) {
                ans += (nums[i] * (height - depth[i] + 1));
            }

            return ans;
        }

        int main() {

            return 0;
        }

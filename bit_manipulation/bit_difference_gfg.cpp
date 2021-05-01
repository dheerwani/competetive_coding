class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int ans = a^b;
        int cnt{};
        while(ans>0)
        {
            ans = ans & (ans-1);
            cnt++;
        }
        return cnt;
    }
};
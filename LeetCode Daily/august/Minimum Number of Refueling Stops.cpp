class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        //we are creating table for maximum fuel of each increasing refilling O(n2)
//         if(stations.size() == 0 and startFuel>=target)return 0;
//         long long dp[501];
//         memset(dp,0, sizeof(dp));
        
//         dp[0] = startFuel;
        
//         for(long long i = 0 ; i<stations.size() ; i++)
//         {
//             for(long long j = i ; j>=0 and dp[j] >= stations[i][0] ; j--)
//             {
//                 dp[j + 1] = max(dp[j+1], dp[j] + stations[i][1]);
//             }
//         }
//         for(int i =0 ; i<=stations.size() ; i++)
//         {
//             if(dp[i] >= target)
//                 return i;
//         }
//         return -1;
        
        
        //using priority queue O(nlogn)
        int i =0 , res=0;
        priority_queue<int>pq;
        int distance = startFuel;
        
        while(distance < target)
        {
            while(i<stations.size() and distance >= stations[i][0])
            {
                pq.push(stations[i][1]);
                    i++;
            }
            if(pq.empty()) return -1;
            
            distance += pq.top(); pq.pop();
            res++;
        }
        return res;
    }
};
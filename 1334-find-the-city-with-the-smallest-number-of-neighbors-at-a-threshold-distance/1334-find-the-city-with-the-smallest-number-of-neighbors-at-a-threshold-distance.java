class Solution {
    public int findTheCity(int n, int[][] edges, int distanceThreshold) {
        //鄰接矩陣
        int[][] d = new int[n][n];
        for(int i = 0; i< n; i++)
            for(int j = 0; j < n; j++)
                d[i][j] = 100000000;
        for(int i = 0; i<n; i++) d[i][i] = 0;
        for(int[] edge : edges){
            int x = edge[0];
            int y = edge[1];
            int z = edge[2];
            d[x][y] = d[y][x] = z;
        }
        //Floyd 算法
        for(int k = 0; k < n; k++)
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++)
                    d[i][j] = Math.min(d[i][j],d[i][k] + d[k][j]);
        //根據題意統計
        int minNeighbour = 100000000;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int neighbour = 0;
            for(int j = 0; j < n; j++)
                if(i !=j&& d[i][j] <= distanceThreshold) neighbour++;
            if(neighbour < minNeighbour || neighbour == minNeighbour && i > ans){
                minNeighbour = neighbour;
                ans = i;
            }
        } 
    return ans;        
    }
}
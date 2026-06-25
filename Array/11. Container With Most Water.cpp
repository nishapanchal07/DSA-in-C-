/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/

class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0;
        int n = h.size();
        
        int l =0;
         int r = n-1;

         while (l<r){
            int widht = r-l;
            int height = min(h[l] , h[r]);
            ans = max( ans , widht*height);

              if(h[l]<h[r])
                l++;
              else
                r--;
 }

 return ans;
           
    }
}; 
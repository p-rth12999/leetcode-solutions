class Solution {
public:
    int maxArea(vector<int>& height) {
int s = 0;
        int e =height.size()-1;

        int max_area =0;

while (s<e)
{max_area = max(max_area,min(height[s],height[e])*abs(e-s));
                if( height[s]>height[e])
                   { e-=1;}
                else{
                    s+=1;}
  }  return max_area;
    } 
};

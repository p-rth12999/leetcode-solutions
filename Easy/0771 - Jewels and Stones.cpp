class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       unordered_map<char,int> count;
       int counter=0;
       for(auto i:jewels)
       {
        count[i]++;
       } 
       for(auto j:stones)
       {
        if(count.find(j)!=count.end())
        {
            counter++;
        }
       }
    return counter;
    }
};

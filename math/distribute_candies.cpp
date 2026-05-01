 # Distribute Candies to People

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
      vector<int> result(num_people, 0);
    
    int give = 1;
    int i = 0;

    while (candies > 0) {
        int idx = i % num_people;
        
        if (candies >= give) {
            result[idx] += give;
            candies -= give;
        } else {
            result[idx] += candies;
            candies = 0;
        }
        
        give++;
        i++;
    }

    return result;   
    }
};

#include <vector>
#include <algorithm>

class Solution {
public:
    bool asteroidsDestroyed(int mass, std::vector<int>& asteroids) {
        // Step 1: Sort the asteroids in ascending order
        std::sort(asteroids.begin(), asteroids.end());
        
        // Step 2: Use long long to prevent integer overflow
        long long currentMass = mass;
        
        // Step 3: Sequentially absorb each asteroid
        for (int asteroid : asteroids) {
            if (asteroid > currentMass) {
                return false; // Planet is destroyed
            }
            currentMass += asteroid; // Planet absorbs the asteroid
        }
        
        return true; // All asteroids successfully destroyed
    }
};

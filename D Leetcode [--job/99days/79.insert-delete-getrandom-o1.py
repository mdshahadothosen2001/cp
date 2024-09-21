# 380. Insert Delete GetRandom O(1)
class RandomizedSet:

    def __init__(self):
        self.numberMap = {}
        self.numberList = []

    def insert(self, val: int) -> bool:
        present = val not in self.numberMap

        if present:
            self.numberMap[val] = len(self.numberList)
            self.numberList.append(val)
        
        return present

    def remove(self, val: int) -> bool:
        present = val in self.numberMap
        if present:
            index = self.numberMap[val]
            lastValue = self.numberList[-1]
            self.numberList[index] = lastValue
            self.numberList.pop()
            self.numberMap[lastValue] = index
            del self.numberMap[val]
        
        return present
        

    def getRandom(self) -> int:
        return random.choice(self.numberList)
        


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()


# Example 1:

# Input
# ["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
# [[], [1], [2], [2], [], [1], [2], []]
# Output
# [null, true, false, true, 2, true, false, 2]

# Explanation
# RandomizedSet randomizedSet = new RandomizedSet();
# randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
# randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
# randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
# randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
# randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
# randomizedSet.insert(2); // 2 was already in the set, so return false.
# randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.

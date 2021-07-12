// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Example 1:

// Input: s = "egg", t = "add"
// Output: true

// Example 2:

// Input: s = "foo", t = "bar"
// Output: false

// Example 3:

// Input: s = "paper", t = "title"
// Output: true

// Constraints:

// 1 <= s.length <= 5 * 104
// t.length == s.length
// s and t consist of any valid ascii character.

const isIsomorphic = (s, t) => {
    // 1. We create a new hashmap
    let stringMap = {};
    // 2. We loop through the entire array
    for (let i = 0; i < s.length; i++) {
        // 3. Does a property of [s] already exist?
        // console.log(stringMap[s[i]]);
        if (stringMap.hasOwnProperty(s[i])) {
            //4. If so, does it match with the element from t?
            if (stringMap[s[i]] != t[i]) {
                return false;
            }
        } else {
            //5. That property doesn't exist.
            // Do we have another property that matches t[i]?
            let lie = false;
            Object.keys(stringMap).forEach((property) => {
                // if so, then chain is not isomorphic
                if (stringMap[property] == t[i]) {
                    lie = true;
                }
            });
            if (lie) return false;
            //If it doesn't, we add a property
            stringMap[s[i]] = t[i];
        }
        // console.log(stringMap);
    }
    return true;
};

// A B B A
// E C C D

console.log(isIsomorphic("foo", "bar"));
console.log(isIsomorphic("egg", "add"));
console.log(isIsomorphic("abba", "ecca"));
console.log(isIsomorphic("badc", "baba"));

/*
392. Is Subsequence

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/

#include "IsSubsequence.hpp"
#include <string.h>

bool isSubsequence(std::string s, std::string t) {
        int si = 0, ti = 0;
        while(si < s.size() && ti < t.size()){
            if(s[si] == t[ti++]){
                si++;
            }
        }
        return si == s.size();
    }
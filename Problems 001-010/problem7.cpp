/* This question is asked by Facebook. Given a string and the ability to delete at 
 * most one character, return whether or not it can form a palindrome.
 * Note: a palindrome is a sequence of characters that reads the same forwards and 
 * backwards.
 */

#include <iostream>
#include <string>
using namespace std;

bool isPalin(string s, int left, int right) {
	while (left < right) {
		if (s[left] != s[right]) return false;
		left++;
		right--;
	}
	return true;
}

int main() {
    string str;
    cin>>str;

    int left = 0, right = str.length() - 1;
	while (left < right) {
		if (str[left] != str[right]) {
			return isPalin(str, left + 1, right) || isPalin(str, left, right - 1);
		}
		left++;
		right--;
	}
	return true;
}
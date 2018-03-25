#include <iostream>
// C++ program to demonstrate functionality of unordered_map
#include <bits/stdc++.h>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

int main() {
	// declare map that contains irrational numbers
	unordered_map<string, double> umap;

	// insert 5 elements into map
	umap["PI"] = 3.14, 3.14195;
	umap["root2"] = 1.414;
	umap["root3"] = 1.732;
	umap["log10"] = 2.302;
	umap["loge"] = 1.0;

	// using insert function to insert
	umap.insert(make_pair("e", 2.718));

	// find PI
	string key = "PI";
	if (umap.find(key) == umap.end()) {
		cout << key << " not found" << endl;
	} else {
		cout << "Found " << key << endl;
	}

	// find lambda
	key = "lambda";
	if (umap.find(key) == umap.end()) {
		cout << key << " not found" << endl;
	} else {
		cout << "Found " << key << endl;
	}

	// find root3 using an iterator
	key = "root3";
	auto it = umap.find("root3");
	if (it == umap.end()) {
		cout << key << " not found" << endl;
	} else {
		cout << "Found " << key << endl;
	}

	/// print size
	cout << "the size of the map is " << umap.size() << endl;

	// declare map that conatains letters of the alphabet
	unordered_map<char, int> abc;

	// declare vectors of keys and values
	vector<char> keys;
	keys.push_back('d');
	keys.push_back('c');
	keys.push_back('b');
	keys.push_back('a');
	vector<int> vals;
	vals.push_back(4);
	vals.push_back(3);
	vals.push_back(2);
	vals.push_back(1);

	// iterate through vectors of keys and values, inserting them into map
	for (int i = 0; i < keys.size(); i++) {
		abc.insert(make_pair(keys[i], vals[i]));
	}
	cout << "The maximum size of an unodered map is " << abc.max_size()
		 << " units" << endl;
	assert(!abc.empty());
	return 0;
}

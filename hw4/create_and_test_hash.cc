// Aida Jevric
//csci 335 Spring 2021

#include "quadratic_probing.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


template <typename HashTableType>
void TestFunctionForHashTable(HashTableType &hash_table, const string &words_filename, const string &query_filename) {
  cout << "TestFunctionForHashTables..." << endl;
  cout << "Words filename: " << words_filename << endl;
  cout << "Query filename: " << query_filename << endl;
  hash_table.MakeEmpty();  
  //..Insert your own code

  cout << "Number of items: " << endl;
  cout << "Size of hash table: " << endl;
  cout << "Load factor: " << endl;
  cout << "Average number of collisions: " << endl;
  cout << "Total number of collisions: " << endl;
}

// namespace PROTECTED {

int testHashingWrapper(int argument_count, char **argument_list) {
    const string words_filename(argument_list[1]);
    const string query_filename(argument_list[2]);
    const string param_flag(argument_list[3]);
    int R = 0;
    if (argument_count == 5) {
        const string rvalue(argument_list[4]);
        R = stoi(rvalue);
    }

    if (param_flag == "linear") {
        // cout << "Linear:" << endl;
        // HashTableLinear<string> linear_probing_table;
        // TestFunctionForHashTable(linear_probing_table, words_filename,
        //                         query_filename);
    } else if (param_flag == "quadratic") {
        // cout << "Quadratic:" << endl;
        HashTable<string> quadratic_probing_table;
        TestFunctionForHashTable(quadratic_probing_table, words_filename,
                                 query_filename);
    } else if (param_flag == "double") {
        // cout << "Double:" << endl;
        // cout << "r_value: " << endl;
        // HashTableDouble<string> double_probing_table;
        // double_probing_table.SetR(R);
        // TestFunctionForHashTable(double_probing_table, words_filename,
        //                         query_filename);
    } else {
        cout << "Unknown hash type " << param_flag
             << " (User should provide linear, quadratic, or double)" << endl;
    }
    return 0;
}

// Sample main for program create_and_test_hash.
// WE WILL NOT USE YOUR MAIN IN TESTING. DO NOT CODE FUNCTIONALITY INTO THE
// MAIN. WE WILL DIRECTLY CALL testHashingWrapper. ALL FUNCTIONALITY SHOULD BE
// THERE. This main is only here for your own testing purposes.
int main(int argc, char **argv) {
    if (argc != 4 and argc != 5) {
        cout << "Usage: " << argv[0]
             << " <wordsfilename> <queryfilename> <flag>" << endl;
        cout << "or Usage: " << argv[0]
             << " <wordsfilename> <queryfilename> <flag> <rvalue>" << endl;
        return 0;
    }

    testHashingWrapper(argc, argv);
    return 0;
}

//};  // namespace PROTECTED


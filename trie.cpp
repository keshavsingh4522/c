#include<bits/stdc++.h>
using namespace std;

// Trie node
struct TrieNode
{
    struct TrieNode *children[26];
    bool isEndOfWord;
};

// function to populate the trie
void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = new TrieNode();
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndOfWord = true;
}

// function to search a key in trie
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
        return false;
        pCrawl = pCrawl->children[index];
    }
    return (pCrawl != NULL && pCrawl->isEndOfWord);
}

// function to print words in trie
void printAllWords(struct TrieNode *root, string str)
{
    if (root->isEndOfWord)
    cout << str << endl;
    for (int i = 0; i < 26; i++)
    {
        if (root->children[i])
        printAllWords(root->children[i], str + char(i + 'a'));
    }
}

int main(){
    struct TrieNode *root = new TrieNode();
    insert(root, "hello");
    insert(root, "hell");
    insert(root, "he");
    insert(root, "hel");
    insert(root, "helo");
    insert(root, "hels");
    insert(root, "help");
    insert(root, "helpp");
    string key = "hel";
    if (search(root, key))
    cout << "Found " << key << endl;
    else
    cout << "Not Found " << key << endl;
    key = "heloo";
    if (search(root, key))
    cout << "Found " << key << endl;
    else
    cout << "Not Found " << key << endl;
    printAllWords(root, "");
    return 0;
}

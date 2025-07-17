
#include <iostream>
#include <list>
#include <vector>

class HashTable {
private:
    int capacity;
    std::vector<std::list<int>> table;

    int hashFunction(int key) {
        return key % capacity;
    }

public:
    HashTable(int size) {
        this->capacity = size;
        table.resize(size);
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void remove(int key) {
        int index = hashFunction(key);
        std::list<int> &chain = table[index];
        chain.remove(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (int k : table[index]) {
            if (k == key) {
                return true;
            }
        }
        return false;
    }

    void display() {
        for (int i = 0; i < capacity; i++) {
            std::cout << "table[" << i << "]";
            for (int key : table[i]) {
                std::cout << " --> " << key;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    HashTable ht(10);

    ht.insert(10);
    ht.insert(20);
    ht.insert(11);
    ht.insert(21);
    ht.insert(31);

    ht.display();

    std::cout << "Searching for 20: " << (ht.search(20) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 25: " << (ht.search(25) ? "Found" : "Not Found") << std::endl;

    ht.remove(20);
    ht.display();

    return 0;
}



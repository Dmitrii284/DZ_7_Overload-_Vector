//#include"Header.h"
//
//
//int main()
//{	
//	setlocale(LC_ALL, "Rus");
//	
//	
//
//	return 0;
//}

//Task1
#include <iostream>
#include <algorithm>
#include <vector>

class Collection {
private:
    std::vector<int> elements;

public:
    void  add(const Collection &collections)
    {
        std::for_each(collections.elements.begin(), collections.elements.end(), [this](int element) {elements.push_back(element);});
    };
    void add(int element) {
        elements.push_back(element);
    }

    void remove(int element) {
        for (auto it = elements.begin(); it != elements.end(); ++it) {
            if (*it == element) {
                elements.erase(it);
                break;
            }
        }
    }

    int operator[](int index) 
    {
        return elements[index];
    }

    int size() const
    {
        return elements.size();
    }

private:
    bool is_collection(int element) const {
        // Проверка типа элемента, например, можно проверить, является ли element экземпляром класса Collection
        return false; // Ваше условие проверки типа
    }
};

int main() {
    Collection collection;
    collection.add(1);
    collection.add(2);

    Collection nestedCollection;
    nestedCollection.add(3);
    nestedCollection.add(4);

    collection.add(nestedCollection);

    std::cout << "Size: " << collection.size() << std::endl; // Выводит 6

    return 0;
}
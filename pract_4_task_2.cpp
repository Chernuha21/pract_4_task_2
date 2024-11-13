#include <iostream>
#include <forward_list>

int main() {
    // 1. Створення однозв'язного списку з елементами {10, 20, 30}
    std::forward_list<int> flist = { 10, 20, 30 };

    // 2. Додавання 5 на початок списку
    flist.push_front(5);

    // Додавання 40 в кінець списку
    auto it = flist.before_begin();
    for (auto& elem : flist) {
        ++it;
    }
    flist.insert_after(it, 40);

    // Виведення списку до видалення першого елемента
    std::cout << "List before manipulation: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // 3. Видалення першого елемента списку
    flist.pop_front();

    // 4. Виведення списку після видалення першого елемента
    std::cout << "List after delete first item: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}

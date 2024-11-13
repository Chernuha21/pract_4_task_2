#include <iostream>
#include <forward_list>

int main() {
    // 1. ��������� ������'������ ������ � ���������� {10, 20, 30}
    std::forward_list<int> flist = { 10, 20, 30 };

    // 2. ��������� 5 �� ������� ������
    flist.push_front(5);

    // ��������� 40 � ����� ������
    auto it = flist.before_begin();
    for (auto& elem : flist) {
        ++it;
    }
    flist.insert_after(it, 40);

    // ��������� ������ �� ��������� ������� ��������
    std::cout << "List before manipulation: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // 3. ��������� ������� �������� ������
    flist.pop_front();

    // 4. ��������� ������ ���� ��������� ������� ��������
    std::cout << "List after delete first item: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}

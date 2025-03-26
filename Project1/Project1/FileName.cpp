#include <iostream>
using namespace std;

class Ram {
    char mem[100 * 1024]; // 100KB �޸�, �� ����Ʈ ���� ����
    int size;
public:
    Ram() { size = 100 * 1024; } // �޸� ũ�� ����
    char read(int address) { return mem[address]; } // �ּҿ��� ������ �б�
    void write(int address, char value) { mem[address] = value; } // �ּҿ� ������ ����
};

int main() {
    Ram ram;
    ram.write(100, 20); // 100������ 20 ����
    ram.write(101, 30); // 101������ 30 ����

    char res = ram.read(100); // 100���� �� �б�
    ram.write(102, res + ram.read(101)); // 102������ (20 + 30) ����

    cout << "102 ������ �� = " << (int)ram.read(102) << endl; // 102���� �� ���

    return 0;
}


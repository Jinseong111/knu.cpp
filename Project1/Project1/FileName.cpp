#include <iostream>
using namespace std;

class Ram {
    char mem[100 * 1024]; // 100KB 메모리, 한 바이트 단위 저장
    int size;
public:
    Ram() { size = 100 * 1024; } // 메모리 크기 설정
    char read(int address) { return mem[address]; } // 주소에서 데이터 읽기
    void write(int address, char value) { mem[address] = value; } // 주소에 데이터 저장
};

int main() {
    Ram ram;
    ram.write(100, 20); // 100번지에 20 저장
    ram.write(101, 30); // 101번지에 30 저장

    char res = ram.read(100); // 100번지 값 읽기
    ram.write(102, res + ram.read(101)); // 102번지에 (20 + 30) 저장

    cout << "102 번지의 값 = " << (int)ram.read(102) << endl; // 102번지 값 출력

    return 0;
}


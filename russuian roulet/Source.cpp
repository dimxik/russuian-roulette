#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    setlocale(0, "");
    srand(time(nullptr)); // ������������� ���������� ��������� �����

    int bulletPosition = rand() % 6 + 1; // ��������� ������� ���� (�� 1 �� 6)
    int playerChoice;
    int attempts = 0;

    cout << "����� ���������� � ���� ������� �������!" << endl;
    cout << "������� ������: � ��� ���� 6 �������� � ��������. ���� �� ���� ��������." << endl;
    cout << "���� ������ - �������� ��������." << endl;

    do {
        cout << endl;
        cout << "�������� ������� (1-6), ����� ����������: ";
        cin >> playerChoice;

        // �������� ������������ ������
        if (playerChoice < 1 || playerChoice > 6) {
            cout << "������������ �����. ������� ����� �� 1 �� 6." << endl;
            continue;
        }

        attempts++;

        // ���������, ������� �� ������
        if (playerChoice == bulletPosition) {
           cout << "���� ����������! �� ���������!" << endl;
            break;
        }
        else {
           cout << "����! �� ������." << endl;
        }
    } while (attempts < 6);

    if (attempts == 6) {
        cout << "�� ������ ��� 6 ������� ��� ���������. �����������, �� ��������!" << endl;
    }

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1; 

    int guess;
    int attempts = 0;

    cout << "Sayı Tahmin Oyununa Hoş Geldiniz!" << endl;
    cout << "1 ile 100 arasında bir sayı tuttum." << endl;

    do {
        cout << "Tahmininiz: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Daha küçük bir sayı girin." << endl;
        } else if (guess < secretNumber) {
            cout << "Daha büyük bir sayı girin." << endl;
        } else {
            cout << "Tebrikler! Doğru tahmin ettiniz." << endl;
            cout << "Toplam tahmin sayısı: " << attempts << endl;
        }
    } while (guess != secretNumber);
}

int main() {
    char choice;

    do {
        playGame();
        cout << "Tekrar oynamak ister misiniz? (E/H): ";
        cin >> choice;
    } while (choice == 'E' || choice == 'e');

    cout << "Oyun Bitti." << endl;
    return 0;
}

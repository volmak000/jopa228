#include <iostream>

class Singleton {
private:
    // Приватний конструктор, щоб заборонити створення екземплярів класу ззовні
    Singleton() {}

    // Єдиний екземпляр класу
    static Singleton* instance;

public:
    // Метод для отримання єдиного екземпляра класу
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    // Інші методи класу...
    void showMessage() {
        std::cout << "Привіт, я єдиний екземпляр класу Singleton!" << std::endl;
    }
};

// Ініціалізація статичної змінної класу
Singleton* Singleton::instance = nullptr;

int main() {
    // Отримання єдиного екземпляра класу
    Singleton* singletonInstance = Singleton::getInstance();

    // Виклик методу класу
    singletonInstance->showMessage();

    // Спроба створити ще один екземпляр класу
    // Singleton* anotherInstance = new Singleton(); // Помилка компіляції

    return 0;
}

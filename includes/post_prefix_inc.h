//
// Created by piok on 10.01.2026.
//
#pragma once
#include <iostream>
#include <ostream>

class Prefix_Postfix {
public:
    Prefix_Postfix(const int& prefix, const int& postfix) : prefix_(prefix), postfix_(postfix) {
        std::cout << ++prefix_ << std::endl; // Берет ссылку на адрес памяти (переменной) и работает с ней (получаем 6 (если передаем 5)
        int postfix_temp = postfix_++; // Создает дополнительную переменную для работы с ней и после выполняет + 1 (получаем 5 (если передаем 5)
        std::cout << postfix_temp << std::endl;
        std::cout << postfix_++ << std::endl; // НО тут получаем уже 6
    }
private:
    int prefix_;
    int postfix_;
};

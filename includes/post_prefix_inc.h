//
// Created by piok on 10.01.2026.
//
#pragma once
#include <iostream>

class Prefix_Postfix {
public:
    Prefix_Postfix(int& prefix, int& postfix) : prefix_(new int(prefix)), postfix_(new int(postfix)) { // метод получает аргументы ссылкой
                                                                                                // в момент инициализации списка мы задаем в prefix_/postfix_
                                                                                                // выделенную память в куче наших аргументов
        std::cout << "Операция (префикс):  " <<  ++(*prefix_)<< std::endl; // Берет ссылку на адрес памяти (переменной) и работает с ней (получаем 6 (если передаем 5)
        std::cout << "Вывод (префикс):  " <<  *prefix_ << std::endl;
        int postfix_temp = (*postfix_)++; // Создает дополнительную переменную для работы с ней и после выполняет + 1 (получаем 5 (если передаем 5)
        std::cout << "Копия (постфикс): " << postfix_temp << std::endl;
        std::cout << "Вывод основной (постфикс): " << *postfix_ << std::endl; // 6
        std::cout << "Операция инкремента (постфикс): " << (*postfix_)++ << std::endl; // 6
        std::cout << "Вывод основной (постфикс): " << *postfix_ << std::endl; // 7
    }

    ~Prefix_Postfix() {
        delete postfix_; // удаление выделенной памяти в кучи
        delete prefix_;
    }
private:
    int* prefix_ = new int;
    int* postfix_ = new int;
};

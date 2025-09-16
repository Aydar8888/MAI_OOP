# Лабораторная работа 01

## Цель

* Изучение системы сборки на языке C++ с использованием CMake
* Изучение систем контроля версий Git
* Изучение работы с памятью в C++
* Изучение работы с вводом/выводом в стандартный поток
* **Изучение unit-тестирования с использованием Google Test Framework**

## Задание

* Установить компилятор C++
* Установить систему сборки CMake
* Установить систему управления версиями Git
* Установить систему unit-тестирования Google Test
* Установить и настроить Visual Studio Code
* Написать программу согласно варианту задания
* Написать unit-тесты согласно варианту задания
* Завести аккаунт на GitHub (если нет) и опубликовать репозиторий
* Отправить ссылку на репозиторий в lms.mai.ru

## Структура проекта

```
lab1/
├── CMakeLists.txt          # Файл конфигурации CMake
├── main.cpp                # Основная программа
├── include/
│   └── isPalindrome.h        # Заголовочный файл с объявлениями функций
├── src/
│   └── isPalindrome.cpp      # Реализация функций
├── test/
│   └── tests_l1.cpp         # Unit-тесты с использованием Google Test
└── readme.md               # Данный файл
```

## Инструкции по установке

### Установка компилятора C++

Скачайте и установите актуальную версию C++:

* **Windows**: рекомендуется использовать [MinGW-w64](https://www.mingw-w64.org/downloads/) или Visual Studio Community
* **macOS**: рекомендуется установка "Xcode" и "Xcode Command Line Tools" с [developer.apple.com](https://developer.apple.com/xcode/)
* **Linux** (рекомендуется версия gcc 12 и выше):
  ```bash
  sudo apt update
  sudo apt install build-essential
  ```

### Установка CMake

Скачайте и установите актуальную версию CMake с [cmake.org](https://cmake.org/download/)

### Установка Git

Скачайте и установите актуальную версию Git под вашу операционную систему с [git-scm.com](https://git-scm.com/downloads)

### Установка Google Test

**Способ 1: Автоматическая установка (рекомендуется)**
Проект настроен на автоматическую загрузку Google Test через CMake. Никаких дополнительных действий не требуется.

**Способ 2: Ручная установка**
```bash
git clone https://github.com/google/googletest.git
cd googletest
mkdir build
cd build
cmake ..
make
make install
```

### Установка Visual Studio Code

* Скачайте и установите актуальную версию Visual Studio Code с [code.visualstudio.com](https://code.visualstudio.com/download)
* Установите расширение "C/C++ Extension Pack" (ms-vscode.cpptools-extension-pack)

## Сборка и запуск проекта

### Сборка проекта

```bash
# Создание директории для сборки
mkdir build
cd build

# Конфигурация проекта
cmake ..

# Сборка проекта
cmake --build .
```

### Запуск основной программы

```bash
# Из директории build
./gtest_exe
```

### Запуск тестов

```bash
# Из директории build
./tests

# Или через CTest
ctest --verbose
```

## Вариант 18

Написать функцию, которая осуществляет проверку на палиндром строки.


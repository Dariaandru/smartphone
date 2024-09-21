# smartphone
<div align="center">

МИНИСТЕРСТВО ОБРАЗОВАНИЯ НОВОСИБИРСКОЙ ОБЛАСТИ

Государственное автономное профессиональное образовательное учреждение Новосибирской области

«Новосибирский колледж печати и информационных технологий»

<br> <br> <br>

ОТЧЁТ

по лабораторной работе №1

«Реализация класса, моделирующий смартфон»

по дисциплине: «Основы алгоритмизации»

<br> <br>

Выполнил: <br> <br>
Студент гр. 9-22, ИСиП: <br>
Андрущук Д. В.	<br>
Вариант 2

Преподаватель: <br> <br>
Зеленев П.А. <br>

</div>

<br> <br> <br>

<p align="center">Новосибирск 2024 г</p>

<br> <br> <br>

# Оглавление



# Цель и задачи

Цель: разработать класс, который позволяет создавать объекты и хранить данные о них

Задачи:

1. Создание файла .h где будет создан класс Смартфон с необходимыми полями и методами

2. Создать файл .cpp и в нем написать реализацию методов класса

3. Написать функцию main, которая отражает работу всех методов класса.

4. Сделать обработку ошибок

# Тестовые данные и результаты программы

| Входные данные | ожидаемые результаты программы |
|----------------|---------------------------------|
| Ввод информации о телефоне со всеми характеристиками <br> <br> "Xiaomi", "Reami A2", "2,2 GHz", 8, 3, "DDR4", 32 "Android 12", 3, 70, 12345 |  manufactirer:  Xiaomi <br> model: Reami A2 <br> CPU_frequency: 2,2 GHz <br> cores: 8 <br> RAM:   3GB <br> RAM_type:  DDR4 <br> secondary_memory:  32GB  <br> OS:    Android 12 <br> installed_applications:    3 <br> occupied_RAM:  70GB   |
| Ввод информации без ОС и установленных приложений <br> <br>"Apple", "iPhone 11", "2,8 GHz", 8, 6, "DDR3", 64, 76895 <br> Установка ОС значение "IOS" <br>и 12 приложений, которые занимают 50 ГБ | manufactirer:  Apple <br> model: iPhone 11 <br> CPU_frequency: 2,8 GHz<br> cores: 8<br> RAM:   6GB<br> RAM_type:  DDR3<br> secondary_memory:  64GB<br> OS:    IOS<br> installed_applications:    12  <br>    occupied_RAM:  50GB |
| Ввод информации о телефоне без ОС и последущей установки <br> "Samsung", "Galaxi A73", "4,8 GHz", 8, 6, "DDR5", 256, 88897 <br> Установка 25 приложений, которые занимают 100 ГБ и расчет среднего количества приложений | manufactirer:  Samsung <br> model: Galaxi A73 <br>CPU_frequency: 4,8 GHz <br>cores: 8 <br>RAM:   6GB <br>RAM_type:  DDR5 <br>secondary_memory:  256GB <br> OS:    Without OS <br>installed_applications:    25   <br>   occupied_RAM:  100GB <br> Average quantity of applications will be installed:    39 |
| Удаление всех приложений с этого же телефона | manufactirer:  Samsung <br> model: Galaxi A73 <br> CPU_frequency: 4,8 GHz <br> cores: 8 <br> RAM:   6GB <br> RAM_type:  DDR5 <br> secondary_memory:  256GB <br> OS:    Without OS <br> installed_applications:    0 <br> occupied_RAM:  0GB <br>

 


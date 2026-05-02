#include<gtest/gtest.h>
#include"circual_loop.hpp"


TEST(Circual_Test, Exp_True_Arg){
// 1. Из условия LeetCode
std::vector<int> t1{2, -1, 1, 2, 2};
EXPECT_TRUE(circularArrayLoop(t1));

// 2. Положительный цикл длины 2 (массив ровно 2 элемента)
std::vector<int> t2{1, 1};
EXPECT_TRUE(circularArrayLoop(t2));

// 3. Отрицательный цикл длины 3
std::vector<int> t3{-1, -1, -1};
EXPECT_TRUE(circularArrayLoop(t3));

// 4. Положительный цикл с длинным входом
std::vector<int> t4{3, 1, 1, 1, 2};
EXPECT_TRUE(circularArrayLoop(t4));

// 5. Отрицательный цикл длины 2 (исправлено)
std::vector<int> t5{-1, -1};
EXPECT_TRUE(circularArrayLoop(t5));

// 6. Весь массив — один положительный цикл длины n
std::vector<int> t6{1, 1, 1, 1, 1};
EXPECT_TRUE(circularArrayLoop(t6));

// 7. Ещё один положительный цикл с подходом
std::vector<int> t7{2, 3, 1, 1, 1, 1};
EXPECT_TRUE(circularArrayLoop(t7));

// 8. Отрицательный цикл с подходом
std::vector<int> t8{-2, -3, -1, -1, -1};
EXPECT_TRUE(circularArrayLoop(t8));

// 9. Одинокий положительный цикл в большом массиве
std::vector<int> t9{7, 1, 1, 1, 1, 1, 1, 1};
EXPECT_TRUE(circularArrayLoop(t9));

// 10. Короткий отрицательный цикл (не все шаги равны)
std::vector<int> t10{-2, -1, -3};
EXPECT_TRUE(circularArrayLoop(t10));
}

TEST(Circual_Test, Exp_False_Arg){
// 1. Самопетля (цикл длины 1)
std::vector<int> f1{-1, 2};
EXPECT_FALSE(circularArrayLoop(f1));

// 2. Пример со сменой знака в цикле (из условия)
std::vector<int> f2{-2, 1, -1, -2, -2};
EXPECT_FALSE(circularArrayLoop(f2));

// 3. Смешанный цикл
std::vector<int> f3{2, -1, 1, -1};
EXPECT_FALSE(circularArrayLoop(f3));

// 4. Ещё один смешанный цикл (исправлено)
std::vector<int> f4{2, 1, -1};
EXPECT_FALSE(circularArrayLoop(f4));

// 5. Два смешанных цикла
std::vector<int> f5{1, -1, 1, -1};
EXPECT_FALSE(circularArrayLoop(f5));

// 6. Цикл, где знак меняется внутри
std::vector<int> f6{2, 3, -2, -1};
EXPECT_FALSE(circularArrayLoop(f6));

// 7. Нет цикла нужной длины (самопетли)
std::vector<int> f7{2, -1};
EXPECT_FALSE(circularArrayLoop(f7));

// 8. Длинный путь к смешанному циклу
std::vector<int> f8{3, -1, 1, -1, 2};
EXPECT_FALSE(circularArrayLoop(f8));

// 9. Пути, ведущие в смешанные петли
std::vector<int> f9{1, -1, 2, -2};
EXPECT_FALSE(circularArrayLoop(f9));

// 10. Массив из одного элемента (цикл длины 1)
std::vector<int> f10{5};
EXPECT_FALSE(circularArrayLoop(f10));
}

TEST(Circual_Test, Min_Max){
std::vector<int> max_true(5000, 1);     // EXPECT_TRUE
std::vector<int> min_false{42};         // EXPECT_FALSE
}

TEST(Circual_Test, NoTypical){
// 1. Самопетля + отдельный валидный цикл
std::vector<int> e1{1, 4, 1, 3};
EXPECT_TRUE(circularArrayLoop(e1));

// 2. Длинный подход к положительному циклу
std::vector<int> e2{1, 1, 1, 1, 1, 4};
EXPECT_TRUE(circularArrayLoop(e2));

// 3. Несколько циклов, один валидный
std::vector<int> e3{1, 4, 1, -1, 5};
EXPECT_TRUE(circularArrayLoop(e3));

// 4. Подход к смешанному циклу (false)
std::vector<int> e4{2, 2, 1, 1, 1, -1};
EXPECT_FALSE(circularArrayLoop(e4));

// 5. Смешанный цикл после положительного пути
std::vector<int> e5{1, 2, 1, -1, -2};
EXPECT_FALSE(circularArrayLoop(e5));
}
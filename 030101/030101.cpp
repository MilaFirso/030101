#include <iostream>

class Calculator {
private:
    double num1;
    double num2;
public:
         
    void vvod1() {
        std::cout << "Введите num1: " << std::endl;
        std::cin >> num1;
        

    }
    void vvod2() {
        std::cout << "Введите num2: " << std::endl;
        std::cin >> num2;
    }

    bool set_num1(double num1) {
        this->num1 = num1;
        if ((this->num1 = num1) != 0)return true;
               else         
        {
            std::cout << "Неверный ввод" << std::endl;
            vvod1();
            return false;

               }
        }
    bool set_num2(double num2) {
        if((this->num2 = num2)!=0) return true;
         else
        {
            std::cout << "Неверный ввод" << std::endl;
           vvod2();
              return false;
        }
    }
    void add() {
        std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
      }
    void multiply() {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
    }
    void subtract_1_2() {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
    }
    void subtract_2_1() {
        std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
    }
    void divide_1_2() {
        
            std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
     }
    void divide_2_1() {
       
            std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        }
        
      
};

int main()
{
    double num1;
    double num2;

    setlocale(LC_ALL, "rus");
    std::cout << "Введите num1: " << std::endl;
    std::cin >> num1;
    std::cout << "Введите num2: " << std::endl;
    std::cin >> num2;

    Calculator calc;
    
    calc.set_num1(num1) ;
    calc.set_num2(num2);
    calc.add();
    calc.multiply();
    calc.subtract_1_2();
    calc.subtract_2_1();
    calc.divide_1_2();
    calc.divide_2_1();
    main();

    
    //std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
    //return 0;
}


# include <iostream>

enum class Operation {ADD, SUBTRACT, MULTIPLY, DIVIDE};

struct Calculator{
    public:
        Calculator(Operation operation);
        int calculate(int a, int b);
        Operation get_operation(){return m_operation;}
    
    private:
        Operation m_operation;};
        

Calculator::Calculator(Operation operation)
    : m_operation{operation} { }
    

int Calculator::calculate(int a, int b){
    switch(get_operation()){
        case Operation::ADD: {return a + b;}
        case Operation::SUBTRACT: {return a - b;}
        case Operation::MULTIPLY: {return a * b;}
        case Operation::DIVIDE: {return a / b;}
        default: {
            std::cout << "NOT A VALID OPERATOR.\n" << std::endl;
            return 0;}}}

            
int main(){
    Calculator calc1{Operation::ADD}; 
    std::cout << "ADD: " << calc1.calculate(5, 6) << '\n';

    Calculator calc2{Operation::SUBTRACT}; 
    std::cout << "SUBTRACT: " << calc2.calculate(6, 3) << '\n';

    Calculator calc3(Operation::MULTIPLY); 
    std::cout << "MULTIPLY: " << calc3.calculate(5, 5) << '\n';

    Calculator calc4(Operation::DIVIDE); 
    std::cout << "DIVIDE: " << calc4.calculate(10, 5) << '\n';

    return 0;
}
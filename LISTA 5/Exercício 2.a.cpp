
#include <iostream>
#include <cmath>

bool is_prime(int n) {
    // Um número menor ou igual a 1 não é primo
    if (n <= 1) {
        return false;
    }
    
    // Verificar divisibilidade até a raiz quadrada de n
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            return false;  // Se n for divisível por i, não é primo
        }
    }
    
    return true;  // Se não encontrar divisores, o número é primo
}

int main() {
    int num;
    
    std::cout << "Digite um número: ";
    std::cin >> num;
    
    if (is_prime(num)) {
        std::cout << num << " é primo." << std::endl;
    } else {
        std::cout << num << " não é primo." << std::endl;
    }
    
    return 0;
}

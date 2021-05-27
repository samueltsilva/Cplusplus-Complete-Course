// First_Program.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <iostream>

using namespace std;

class Entity {
public:
    virtual string GetName() = 0;
};


class Player : public Entity {
private:
    string m_Name;
public:
    Player(const string name) {
        m_Name = name;
    }

    string GetName() { return m_Name; }
};

int main() {

    
    Player* p = new Player("Harley");

    cout << p->GetName() <<  "\n";

    return 0;

    int favorite_number;
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "Amazing!! That's my favorite number too!" << std::endl;
    cout << "No, really!! " << favorite_number << " is my favorite number!" << std::endl;

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
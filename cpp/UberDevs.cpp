#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definição da estrutura do usuário
struct Usuario
{
    string nome;
    string telefone;
    string endereco;
    string username;
    string senha;
};

// Função para realizar o login do usuário
bool fazerLogin(const vector<Usuario>& usuarios, const string& username, const string& senha) {
    for (const Usuario& usuario : usuarios) {
        // Verifica se o nome de usuário e senha fornecidos correspondem a um usuário no vetor
        if (usuario.username == username && usuario.senha == senha) {
            return true; // Login bem-sucedido
        }
    }
    return false; // Login falhou
}

int main() {
    vector<Usuario> usuarios; // Vetor para armazenar os usuários registrados

    bool primeiroAcesso = true;
    string username, senha;

    while (primeiroAcesso) {
        cout << "Bem-vindo ao UBERDEVS!" << endl;
        cout << "Autor: Samuel Ribeiro" << endl;
        cout << "\n\n";
        cout << "Digite seu nome: ";
        string nome;
        getline(cin, nome);

        cout << "Digite seu telefone: ";
        string telefone;
        getline(cin, telefone);

        cout << "Digite seu endereco: ";
        string endereco;
        getline(cin, endereco);

        cout << "Crie um nome de usuario: ";
        getline(cin, username);

        cout << "Crie uma senha: ";
        getline(cin, senha);

        Usuario novoUsuario = {nome, telefone, endereco, username, senha};
        usuarios.push_back(novoUsuario);

        cout << "Cadastro realizado com sucesso!" << endl;
        primeiroAcesso = false;
    }

    bool loggedIn = false;
    double valorTotal1 = 0.0; // Inicializa o valor total para comida
    double valorTotal2 = 0.0; // Inicializa o valor total para documento
    double valorTotal3 = 0.0; // Inicializa o valor total para localização

    while (!loggedIn) {
        cout << "Faca login para continuar." << endl;
        cout << "Usuario: ";
        getline(cin, username);

        cout << "Senha: ";
        getline(cin, senha);

        loggedIn = fazerLogin(usuarios, username, senha);

        if (!loggedIn) {
            cout << "Usuário ou senha incorretos. Tente novamente." << endl;
        }
    }

    double valorTotalMAX = 0.0; // Inicializa o valor total geral

    while (loggedIn) {
        int escolha;

        do {
            cout << "\nMENU DE OPCOES" << endl;
            cout << "1. COMIDA" << endl;
            cout << "2. DOCUMENTO" << endl;
            cout << "3. LOCALIZACAO" << endl;
            cout << "4. PAGAMENTO" << endl;
            cout << "5. SAIR" << endl;
            cout << "Escolha uma opcao: ";
            cin >> escolha;

        } while (escolha < 1 || escolha > 5);

        switch (escolha) {
            case 1:
                cout << "\nMENU DE COMIDA" << endl;
                cout << "A. MARMITA EXECUTIVO R$15,00" << endl;
                cout << "B. SANDUiCHE NATURAL R$10,00" << endl;
                cout << "C. X-TUDO R$25,00" << endl;

                char escolhaComida;
                cout << "Escolha um item do menu de comida (A - C): ";
                cin >> escolhaComida;

                switch (escolhaComida) {
                    case 'A':
                        cout << "Pedido da Marmita Executivo realizado com sucesso!" << endl;
                        valorTotal1 += 15.0;
                        break;
                    case 'B':
                        cout << "Pedido do Sanduiche Natural realizado com sucesso!" << endl;
                        valorTotal1 += 10.0;
                        break;
                    case 'C':
                        cout << "Pedido do X-TUDO realizado com sucesso!" << endl;
                        valorTotal1 += 25.0;
                        break;
                    default:
                        cout << "Opção invalida no menu de comida." << endl;
                }
                break;
            case 2:
                cout << "\nMENU DE DOCUMENTO" << endl;
                cout << "D. Impressão em preto e branco R$5,00" << endl;
                cout << "E. Impressão colorida R$10,00" << endl;
                cout << "F. Digitalizacao R$3,00" << endl;

                char escolhaDocumento;
                cout << "Escolha um item do menu de documento (D - F): ";
                cin >> escolhaDocumento;

                switch (escolhaDocumento) {
                    case 'D':
                        cout << "Impressão em preto e branco realizada com sucesso!" << endl;
                        valorTotal2 += 5.0;
                        break;
                    case 'E':
                        cout << "Impressão colorida realizada com sucesso!" << endl;
                        valorTotal2 += 10.0;
                        break;
                    case 'F':
                        cout << "Digitalizacao realizada com sucesso!" << endl;
                        valorTotal2 += 3.0;
                        break;
                    default:
                        cout << "Opção invalida no menu de documento!" << endl;
                }
                break;
            case 3:
                cout << "MENU DE TAXAS (SUA LOCALIDADE)" << endl;
                cout << "G. ZONA SUL R$15,00" << endl;
                cout << "H. ZONA NORTE R$10,00" << endl;
                cout << "I. ZONA CENTRAL R$20,00" << endl;
                cout << "J. ZONA LESTE R$5,00" << endl;
                cout << "K. ZONA OESTE R$30,00" << endl;

                char escolhaLocalidade;
                cout << "Escolha uma zona (G - K): ";
                cin >> escolhaLocalidade;

                switch (escolhaLocalidade) {
                    case 'G':
                        cout << "Taxa da ZONA SUL aplicada com sucesso!" << endl;
                        valorTotal3 += 15.0;
                        break;
                    case 'H':
                        cout << "Taxa da ZONA NORTE aplicada com sucesso!" << endl;
                        valorTotal3 += 10.0;
                        break;
                    case 'I':
                        cout << "Taxa da ZONA CENTRAL aplicada com sucesso!" << endl;
                        valorTotal3 += 20.0;
                        break;
                    case 'J':
                        cout << "Taxa da ZONA LESTE aplicada com sucesso!" << endl;
                        valorTotal3 += 5.0;
                        break;
                    case 'K':
                        cout << "Taxa da ZONA OESTE aplicada com sucesso!" << endl;
                        valorTotal3 += 30.0;
                        break;
                    default:
                        cout << "Opção invalida na escolha da zona!" << endl;
                }
                break;
            case 4:
                {
                    char escolhaPagamento;
                    cout << "\nMENU DE PAGAMENTO" << endl;
                    cout << "L. Debito" << endl;
                    cout << "M. Credito" << endl;
                    cout << "N. Dinheiro" << endl;
                    cout << "Escolha uma opção de pagamento (L - N): ";
                    cin >> escolhaPagamento;

                    switch (escolhaPagamento) {
                        case 'L':
                            cout << "Pagamento via Debito realizado com sucesso!" << endl;
                            break;
                        case 'M':
                            cout << "Pagamento via Credito realizado com sucesso!" << endl;
                            break;
                        case 'N':
                            cout << "Pagamento em Dinheiro realizado com sucesso!" << endl;
                            break;
                        default:
                            cout << "Opção invalida no menu de pagamento!" << endl;
                    }

                    valorTotalMAX = valorTotal1 + valorTotal2 + valorTotal3;
                }
                break;
            case 5:
                cout << "VALOR TOTAL: R$" << valorTotalMAX << endl;
                loggedIn = false;
                break;
        }
    }

    return 0;
}

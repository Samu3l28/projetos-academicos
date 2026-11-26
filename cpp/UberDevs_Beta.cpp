#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, senha;
    int escolha1, escolha2;
    float km, comida = 5, documentos = 15, total;

    printf("BEM VINDO AO PROGRAMA UBERDEVS\n\n");
    printf("Autor: Samuel Ribeiro\n");
    printf("VERSAO BETA\n\n");

    printf("|||||||IMPORTANTE ----- PARA EFETUAR LOGIN DIGITE 'usuario' NO CAMPO USUARIO e 'senha' NO CAMPO SENHA|||||||||||\n\n");
    printf("SE OCORRER ALGUM ERRO, ENTRE EM CONTATO COM A NOSSA EQUIPE UBERDEVS OU DEIXE O FEEDBACK\n");
    printf("EM NOSSO EMAIL samuelrndm@gmail.com\n\n");

    // Tela de Login
    cout << "LOGIN\n";

    cout << "Nome de Usuario: ";
    cin >> nome;

    cout << "\nSenha: ";
    cin >> senha;
        //verificação
    if (nome != "usuario" || senha != "senha") {
        cout << "Login falhou. Nome de usuário ou senha incorretos." << endl;
        return 1;
    }

    // Menu de opção
    cout << "\nMENU\n";
    cout << "1. COMIDA\n";
    cout << "2. DOCUMENTOS\n";
    cout << "3. SAIR\n";

    cout << "ESCOLHA UMA DAS OPCOES: ";
    cin >> escolha1;

    switch (escolha1) {
    case 1:
        cout << "VALOR DA COMIDA R$5.00\n";
        cout << "Quilometros do restaurante ate o local da entrega: ";
        cin >> km;
        total = km * comida;
        break;
    case 2:
        cout << "DOCUMENTOS = R$15.00\n";
        cout << "Quilometros do tabelionato ate o local da entrega: ";
        cin >> km;
        total = km * documentos;
        break;
    case 3:
        cout << "Saindo do programa. Até logo!\n";
        return 0;
    default:
        cout << "Opção inválida. Saindo do programa.\n";
        return 1;
    }

    cout << "\nValor TOTAL: R$" << total << endl;

    cout << "\nFORMA DE PAGAMENTO\n";
    cout << "1. DINHEIRO\n";
    cout << "2. PIX\n";
    cout << "3. DEBITO\n";
    cout << "4. CREDITO\n";

    cout << "\nESCOLHA A FORMA DE PAGAMENTO: ";
    cin >> escolha2;
//Formas de pagamento
    switch (escolha2) {
    case 1:
        cout << "DINHEIRO\n";
        break;
    case 2:
        cout << "PIX\n";
        break;
    case 3:
        cout << "DEBITO\n";
        break;
    case 4:
        cout << "CREDITO\n";
        break;
    default:
        cout << "Opção de pagamento inválida.\n";
    }

    return 0;
}

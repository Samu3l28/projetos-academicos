import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char continuar;

        System.out.println("Bem vindo ao cálculo de Média");

        do {
            double a, b, c;
            double media;

            System.out.println("Escreva a primeira nota:");
            a = scanner.nextDouble();

            System.out.println("Escreva a segunda nota:");
            b = scanner.nextDouble();

            System.out.println("Escreva a terceira nota:");
            c = scanner.nextDouble();

            media = (a + b + c) / 3;
            double mediaArredondada = Math.round(media * 100.0) / 100.0; // Arredondamento para duas casas decimais
            System.out.println("A média das notas é: " + mediaArredondada);

            if(media >= 7) {
                System.out.println("Aprovado");
            } else {
                System.out.println("Reprovado");
            }

            System.out.println("Deseja calcular a média novamente? (s/n)");
            continuar = scanner.next().charAt(0); // Lê o primeiro caractere da entrada do usuário

        } while(continuar == 's' || continuar == 'S');

        // Fechando o scanner após o loop para liberar recursos
        scanner.close();
    }
}

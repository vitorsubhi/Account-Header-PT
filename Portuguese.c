#include "Header.h"
#include "Accounts.h"

int main()
{
	int menu, connected; // Variáveis Locais
	do
	{ // Mostrar Menu
		clearscreen();
		printf (" _____________________ \n");
		printf ("|                     |\n");
		printf ("| 1 - Login           |\n");
		printf ("| 2 - Registrar       |\n");
		printf ("| 3 - Remover conta   |\n");
		printf ("| 4 - Recuperar senha |\n");
		printf ("|                     |\n");
		printf ("| 0 - Sair            |\n");
		printf ("|_____________________|\n");
		printf ("Escolha:");
		scanf ("%d", &menu); // Escolher Opção do Menu
	}while (menu<0 || menu>4);

	if (menu != 0)
	{
		authenticate();
	}

	switch (menu)
	{
		case 0:
			exit (EXIT_SUCCESS); // Sair do Programa
		break;
		case 1:
			connected = login (username, password); // Verificar se Usuário e Senha estão corretos.
			if (connected == TRUE) // Verificar se usuário está conectado
			{
				clearscreen();
				printf ("Você se conectou como: %s\n", username);
			}
		break;
		case 2:
			newuser (username, password); // Criar novo Usuário
		break;
		case 3:
			deluser (username, password);
		break;
		case 4:
			printf ("Nova Senha:");
			scanf ("%s", &newpassword[0]);
			edituser (username, password, newpassword);
		break;
	}
	#ifdef _WIN32
		system ("PAUSE");
	#endif
	return 0;
}

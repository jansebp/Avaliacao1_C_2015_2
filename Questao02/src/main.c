#include <stdio.h>
#include <string.h>
#include "lampada.h"
#include "menu.h"

int main(void)
{
	char lampada[8] = {0,0,0,0,0,0,0,0};
	int* idx;
	
	int op;
	S_Menu menu;

	memset(&menu, 0, sizeof(S_Menu));

	create_item(&menu, "Ligar Lampada", ligarLampada);
	create_item(&menu, "Desligar Lampada", desligarLampada);
	create_item(&menu, "Checar Estado da Lampada", checaEstado);

	do
	{
		op = show_menu(&menu);

		if (op != 0)
		{
			printf("Qual lampada voce deseja alterar (0 a 7)? ");
			scanf("%d", idx);

			menu.items[op-1].func(lampada, idx);
		}
	} while (op != 0);

	destroy_menu(&menu);

	return 0;
}
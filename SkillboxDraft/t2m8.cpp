#include <iostream>

int main()
{
	float hp, resist;
	float totalDamage = 0;

	while (true)
	{
		std::cout << "Enter hp and resist: ";
		std::cin >> hp >> resist;
		if (hp <= 1 && hp > 0 || resist <= 1 && resist >= 0)
		{
			while (true)
			{
				float fp;
				std::cout << "Enter fireball power: ";
				std::cin >> fp;

				if (fp <= 1 && fp >= 0)
				{
					hp -= fp - resist;
					totalDamage += fp - resist;
					if (hp <= 0 || hp > 1) break;
					else 
					{
						std::cout << "Hp left: " << hp << "\n";
						std::cout << "Fireball damage: " << fp - resist << "\n";
					}

				}
				else std::cout << "Try again\n";
			}
		}
		else std::cout << "Try again\n";
		if (hp <= 0 || hp > 1)
		{
			if (totalDamage < 0) totalDamage = 0;
			std::cout << "Total damage: " << totalDamage << "\n";
			break;
		}
	}
}

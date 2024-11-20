#include <stdio.h>

void damage_dealt()
{
    float attack, mp;
    printf("Enter Pokemons Attack Stat: ");
    scanf("%f", &attack);
    printf("Enter the move's Power: ");
    scanf("%f", &mp);
    float dmg = attack * mp / 50;
    printf("Damage dealt by the pokemon: %.2f", dmg);
}

void speed_diff()
{
    float a, b;
    printf("Enter first Pokemon's Speed: ");
    scanf("%f", &a);
    printf("Enter second Pokemon's Speed: ");
    scanf("%f", &b);
    float diff;
    if (a > b)
    {
        diff = a - b;
    }
    else
    {
        diff = b - a;
    }
    printf("Speed difference is: %.2f", diff);
}

void distance()
{
    float speed, time;
    printf("Enter Speed of Pokemon: ");
    scanf("%f", &speed);
    printf("Enter Time travelled: ");
    scanf("%f", &time);
    printf("Distance travelled by Pokemon: %.2f", speed * time);
}

int main()
{
    printf("Pokemon Training Menu:\n");
    printf("1. Calculate Damage Dealth by Pokemon Attack\n");
    printf("2. Calculate Speed Difference Between Two Pokemon\n");
    printf("3. Calculate Distance Traveled by a Pokemon\n");
    printf("Enter your choice: ");
    int option;
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        damage_dealt();
        break;

    case 2:
        speed_diff();
        break;

    case 3:
        distance();
        break;
    default:
        printf("Invalid option number!");
        return 1;
        break;
    }
    return 0;
}
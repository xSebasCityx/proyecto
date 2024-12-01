#include <stdio.h>

// Función para calcular el tiempo máximo de supervivencia
int maxSurvivalTime(int health, int armor) {
    int time = 0;
    // Las tres opciones que puedes tomar
    while (health > 0 && armor > 0) {
        if (time % 2 == 0) {
            // Primera opción: entrar al aire
            health += 3;
            armor += 2;
        } else {
            // Alternar entre agua y fuego para minimizar daño
            if (armor > 10) {
                health -= 5;
                armor -= 10; // Entrar al agua
            } else {
                health -= 20;
                armor += 5; // Entrar al fuego
            }
        }
        if (health > 0 && armor > 0) {
            time++;
        }
    }
    return time;
}

int main() {
    int t;
    scanf("%d", &t); // Número de casos de prueba

    while (t--) {
        int H, A;
        scanf("%d %d", &H, &A); // Salud y armadura iniciales
        printf("%d\n", maxSurvivalTime(H, A));
    }

    return 0;
}
#include <iostream>
using namespace std;

void FindMinMax(float* tab, int size, float* min, float* max) {

    *min = tab[0];
    *max = tab[0];

    for (int i = 1; i < size; i++) {
        if (tab[i] < *min) {
            *min = tab[i];
        }
        if (tab[i] > *max) {
            *max = tab[i];
        }

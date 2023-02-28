#include <stdio.h>

int main() {
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    float total = sp + rj + mg + es + outros;
    float percentual_sp = (sp / total) * 100;
    float percentual_rj = (rj / total) * 100;
    float percentual_mg = (mg / total) * 100;
    float percentual_es = (es / total) * 100;
    float percentual_outros = (outros / total) * 100;
    
    printf("Percentual de representação de cada estado:\n");
    printf("SP: %.2f\n", percentual_sp);
    printf("RJ: %.2f\n", percentual_rj);
    printf("MG: %.2f\n", percentual_mg);
    printf("ES: %.2f\n", percentual_es);
    printf("Outros: %.2f\n", percentual_outros);
    
    return 0;
}


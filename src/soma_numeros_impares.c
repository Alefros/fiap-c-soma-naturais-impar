
int somaNumerosImpares(int iInicial, int iFinal) {

    int iSomaImpar = 0, iContador = 0;
    for(iContador = iInicial; iContador <= iFinal; iContador ++) {

        if(ehImpar(iContador)) {
            iSomaImpar = iSomaImpar + iContador;
        }
    }
    return iSomaImpar;
}

int ehImpar(int iNum) {
    return (iNum % 2);
}

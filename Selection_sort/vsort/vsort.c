void vsort_ordina(int v[], const int size)
{
  int pass;
  int i;
  int temp;
  int controllore;

  for (pass = 1; pass < size; pass++) {
    controllore = 0;

    for (i = 0; i < size-pass; i++) {
      if (v[i] > v[i+1]) {
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;

        controllore = 1;
      }
    }
    if(controllore == 0) break;
  }
}

void vsort_ordinaMeglio(int vettore[], const int n_elem, int celltostart, int conta)
{
  int temp;

  if( celltostart + conta == n_elem- 1 ){
    vsort_ordinaMeglio(vettore, n_elem, celltostart++, 1);
  }

  else if( vettore[celltostart] < vettore[celltostart + conta] ){
    temp = vettore[celltostart];
    vettore[celltostart] = vettore[celltostart + conta];
    vettore[celltostart + conta] = temp;

    vsort_ordinaMeglio(vettore, n_elem, celltostart, conta++);
  }
}


      





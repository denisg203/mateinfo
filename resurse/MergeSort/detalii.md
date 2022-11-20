/*Sortarea prin interclasare, sau Mergesort este o metodă eficientă de sortare a elementelor unui tablou, bazată pe următoarea idee: dacă prima jumătate a tabloului are elementele sortate și a doua jumătate are de asemenea elementele sortate, prin interclasare se va obține tabloul sortat.

Sortarea prin interclasare este un exemplu tipic de algoritm divide et impera: se sortează o secvență delimitată de indicii st și dr:

dacă st <= dr, problema este elementară, secvența fiind deja sortată
dacă st < dr:
se împarte problema în subprobleme, identificând mijlocul secvenței, m = (st + dr) / 2;
se rezolvă subproblemele, sortând secvența delimitată de st și m, respectiv secvența delimitată de m+1 și dr – apeluri recursive;
se combină soluțiile, interclasând cele două secvențe; în acest fel, secvența delimitată de st și dr este sortată.
În secvența următoare tabloul tmp se consideră declarat global, de aceeași dimensiune ca v:
*/
int tmp[];

void MergeSort(int v[], int st, int dr)
{
	if(st < dr)
	{
		int m = (st + dr) / 2;
		MergeSort(v, st , m);
		MergeSort(v, m + 1 , dr);
		//Interclasare
		int i = st, j = m + 1, k = 0;
		while( i <= m && j <= dr )
			if( v[i] < v[j])
				tmp[++k] = v[i++];
			else
				tmp[++k] = v[j++];
		while(i <= m)
			tmp[++k] = v[i++];
		while(j <= dr)
			tmp[++k] = v[j++];
		for(i = st , j = 1 ; i <= dr ; i ++ , j ++)
			v[i] = tmp[j];
	}
}
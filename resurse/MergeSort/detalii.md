Sortarea prin interclasare, sau Mergesort este o metodă eficientă de sortare a elementelor unui tablou, bazată pe următoarea idee: dacă prima jumătate a tabloului are elementele sortate și a doua jumătate are de asemenea elementele sortate, prin interclasare se va obține tabloul sortat.

Sortarea prin interclasare este un exemplu tipic de algoritm divide et impera: se sortează o secvență delimitată de indicii st și dr:

dacă st <= dr, problema este elementară, secvența fiind deja sortată
dacă st < dr:
se împarte problema în subprobleme, identificând mijlocul secvenței, m = (st + dr) / 2;
se rezolvă subproblemele, sortând secvența delimitată de st și m, respectiv secvența delimitată de m+1 și dr – apeluri recursive;
se combină soluțiile, interclasând cele două secvențe; în acest fel, secvența delimitată de st și dr este sortată.
În secvența următoare tabloul tmp se consideră declarat global, de aceeași dimensiune ca v:

Observații:

complexitatea sortării prin interclasare este O(n⋅logn);
pentru interclasare este este necesar un spațiu de memorie suplimentar, de dimensiunea tabloului care se sortează;
în secvența de mai sus tabloul tmp a fost declarat global; declararea sa locală poate duce la depășirea stivei; o soluție pentru această situație poate fi alocarea dinamică a tabloului auxiliar.
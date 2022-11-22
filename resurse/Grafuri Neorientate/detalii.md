Graf parțial. Subgraf. Graf complementar


Teoremă: Fie G un graf neorientat cu n vârfuri și m muchii. Atunci:

graful G admite 2m grafuri parțiale;
graful G admite 2n–1 subgrafuri;
graful G admite un unic graf complementar.


Graf nul. Graf complet. Graf regulat. Graf bipartit


Definiție: Un graf neorientat se numește graf nul dacă mulțimea muchiilor este vidă.

Definiție. Fie G=(X, U) un graf neorientat. Graful G se numește graf complet dacă oricare două vârfuri
distincte ale sale sunt adiacente. Un graf complet cu n vârfuri se notează Kn.

Într-un graf complet cu n vârfuri sunt n∗(n−1)/2 muchii și fiecare vârf are gradul n-1.

Propoziție: Sunt 2^n∗(n−1)/2 grafuri neorientate distincte cu n vârfuri.

Definiție: Un graf în care toate nodurile au acelaşi grad se numește graf regulat.

Definiţie: Un graf G=(X, U) se numește graf bipartit dacă există două mulţimi nevide A și B astfel încât X=A ∪ B, A ∩ B = ∅ şi orice muchie u a lui G are o extremitate în A iar cealaltă în B. Mulţimile A şi B formează o partiţie a lui X.

Exemplu: Graful următor este bipartit. A={1,2,5,7} și B={3,4,6}.

Definiție: Un graf bipartit G=(X,U) se numește bipartit complet dacă pentru oricare două vârfuri x∈A și y∈B, există în graf muchia [x,y]; adică [x,y]∈U.


Graf conex. Componente conexe


Definiție: Un graf neorientat se numește graf conex dacă pentru oricare două vârfuri x și y diferite ale sale, există cel puțin un lanț care le leagă, adică x este extremitatea inițială și y este extremitatea finală.

Un graf cu un singur nod este, prin definiție, conex.

Definiție: Se numește componentă conexă a unui graf G=(X,U) un subgraf H=(Y, V), conex, al lui G
care are proprietatea că nu există nici un lanț în G care să lege un vârf din Y cu un vârf din X – Y.

Subgraful H este conex și maximal cu această proprietate (dacă s-ar mai adăuga un vârf nu ar mai fi conex.)

Un graf este conex dacă admite o singură componentă conexă.

Definiție: Un graf este biconex dacă este conex şi pentru orice vârf eliminat subgraful generat îşi păstrează proprietatea de conexitate.


Graf hamiltonian. Graf eulerian


Definiție: Se numește graf hamiltonian un graf care conține un ciclu hamiltonian. Se numește ciclu hamiltonian un ciclu elementar care conține toate vârfurile grafului.

Teoremă: Un G un graf neorientat. Dacă are n≥3 vârfuri şi gradul oricărui vârf verifică inegalitatea d(x)≥n/2 atunci G este hamiltonian. d(x)=gradul varfului x

Definiție: Se numește graf eulerian un graf care conține un ciclu eulerian. Se numește ciclu eulerian un ciclu care conține toate muchiile grafului.

Teoremă: Un graf G = (X,U), fără vârfuri izolate, este eulerian dacă şi numai dacă este conex şi
gradele tuturor vârfurilor sale sunt numere pare.
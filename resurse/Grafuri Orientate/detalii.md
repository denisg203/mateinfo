Graf complet. Graf turneu.


Definiție. Fie G=(V, U) un graf orientat. Graful G se numește graf complet dacă oricare două vârfuri distincte ale sale sunt adiacente.

Teoremă: Numărul de grafuri orientate complete cu n noduri este 3^(n*(n-1)/2).

Definiție: Un graf orientat este turneu, dacă oricare ar fi două vârfuri i şi j, i≠j, între ele există un singur arc: arcul (i,j) sau arcul (j,i).

Proprietăți:

Orice graf turneu este graf complet.
Avem 2^(n*(n-1)/2) grafuri turneu cu n noduri.
În orice graf turneu există un drum elementar care trece prin toate vârfurile grafului.


Circuit


Definiție: Se numește circuit un drum simplu în care extremitatea inițială și finală sunt egale. Se numește circuit elementar un circuit în care, cu excepția extremităților, nu se repetă noduri.

Lungimea unui circuit este reprezentată de numărul de arce din care acesta este alcătuit.


Conexitate. Tare conexitate


Definiții: Fie G=(V,U) un graf orientat.

Graful se numește tare conex dacă între oricare două noduri distincte există cel puțin un drum.

Se numește componentă tare conexă un subgraf tare conex și maximal cu această calitate – dacă am mai adauga un nod, n-ar mai fi tare conex.

Observație: Un nod al grafului face parte dintr-o singură componentă tare conexă. Dacă ar face parte din două compoennte tare conexe, ele s-ar “reuni” prin intermediul acelui nod.


Graf hamiltonian. Graf eulerian


Definiții: Fie un graf orientat G=(V,U).

Un drum elementar care conține toate nodurile grafului se numește drum hamiltonian.

Un circuit elementar care conține toate nodurile grafului se numește circuit hamiltonian.

Un graf care conține un circuit hamiltonian se numește graf hamiltonian.


Definiții: Fie un graf orientat G=(V,U).

Un drum care conține toate arcele grafului se numește drum eulerian.

Un circuit care conține toate arcele grafului se numește circuit eulerian.

Un graf care conține un circuit eulerian se numește graf eulerian.

Teoremă: Un graf fără noduri izolate este eulerian dacă și numai dacă este conex și pentru fiecare nod, gradul interior este egal cu cel exterior.
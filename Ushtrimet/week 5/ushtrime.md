# Ushtrime 

## 1. `std::array`

`std::array` eshte nje kontejner me madhesi fikse qe definohet ne kohen e kompilimit. Perdoret kur e dime paraprakisht sa elemente na duhen.

```cpp
array<int, 5> arr = {1, 2, 3, 4, 5};
```

### Metodat kryesore

| Metoda       | Pershkrimi                                      |
|--------------|--------------------------------------------------|
| `size()`     | Kthen numrin e elementeve ne array               |
| `at(i)`      | Kthen elementin ne poziten `i` (me kontroll kufijsh) |
| `front()`    | Kthen elementin e pare                           |
| `back()`     | Kthen elementin e fundit                         |
| `fill(val)`  | Mbush te gjithe array-n me vleren `val`          |
| `empty()`    | Kthen `true` nese array eshte bosh               |

### Detyra

**Objektivi:** Shkruaj nje program ne C++ qe perdor `std::array` per te ruajtur dhjete numra te plote. Programi duhet te inicializoje `std::array` me vlera, te llogarise mesataren e ketyre vlerave dhe pastaj te numroje sa numra jane mbi mesatare. Printo mesataren dhe numrin e numrave qe jane mbi mesatare.

---

## 2. `std::vector`

`std::vector` eshte nje kontejner me madhesi dinamike qe mund te rritet ose te zvogelohet gjate ekzekutimit. Perdoret kur nuk e dime sa elemente do te kemi.

```cpp
vector<int> v = {1, 2, 3};
vector<int> v2;          // vektor bosh
v2.push_back(10);        // shton elemente me vone
```

### Metodat kryesore

| Metoda          | Pershkrimi                                         |
|-----------------|-----------------------------------------------------|
| `size()`        | Kthen numrin e elementeve ne vektor                 |
| `push_back(val)`| Shton nje element ne fund te vektorit               |
| `pop_back()`    | Heq elementin e fundit                              |
| `at(i)`         | Kthen elementin ne poziten `i` (me kontroll kufijsh)|
| `front()`       | Kthen elementin e pare                              |
| `back()`        | Kthen elementin e fundit                            |
| `empty()`       | Kthen `true` nese vektori eshte bosh                |
| `clear()`       | Fshin te gjithe elementet                           |
| `insert(pos, val)` | Fut nje element ne poziten e dhene              |
| `erase(pos)`    | Fshin elementin ne poziten e dhene                  |

### Detyra

**Objektivi:** Shkruaj nje program ne C++ qe perdor nje `std::vector` per te ruajtur disa numra te plote te futur nga perdoruesi (perdoruesi mund te tregoje fundin e inputit duke futur nje numer specifik, p.sh., `-1`). Pastaj, implemento nje funksion per te gjetur numrin me te vogel ne vektor.

---

## 3. Iteratoret

Nje **iterator** eshte nje objekt qe na lejon te kalojme neper elementet e nje kontejneri (si `array`, `vector`, etj.) nje nga nje, pa pasur nevoje te perdorim indeksa.

### Si funksionojne

- `begin()` - kthen nje iterator qe tregon elementin e **pare**
- `end()` - kthen nje iterator qe tregon **pas elementit te fundit** (jo elementin e fundit!)

```
array: [ 1 | 2 | 3 | 4 | 5 ]
        ^                       ^
      begin()                 end()
```

### Operacionet baze me iteratore

| Operacioni | Pershkrimi |
|------------|------------|
| `*it`      | Merr vleren ku tregon iteratori (dereferencing) |
| `it++`     | Leviz iteratorin ne elementin tjeter |
| `it--`     | Leviz iteratorin ne elementin e meparshem |
| `it != end`| Kontrollon nese iteratori ka arritur ne fund |

### Shembull

```cpp
vector<int> v = {10, 20, 30};

for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";  // Output: 10 20 30
```

> `auto` na kursen nga shkruajtja e tipit te plote `vector<int>::iterator`.

---

## 4. Kerkimi (Searching)

Kerkimi eshte nje nga operacionet me te rendesishme ne programim — gjetja e nje elementi brenda nje koleksioni te dhenash.

### Linear Search (Kerkimi Linear)

Kalon neper **cdo element** nje nga nje derisa ta gjeje ose te mbaroje lista. Funksionon me **cdo** liste, e renditur ose jo.

- **Kompleksiteti:** O(n) — ne rastin me te keq kontrollon te gjithe elementet
- **Avantazhi:** I thjeshte, funksionon me lista te parenditura
- **Disavantazhi:** I ngadalte per lista te medha

```cpp
bool search(vector<int> v, int x)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == x)
            return true;
    }
    return false;
}
```

### Binary Search (Kerkimi Binar)

Ndane listen ne gjysme ne cdo hap — kontrollon elementin e mesit dhe vendos nese duhet te kerkoje ne gjysmen e majte apo te djathte. Funksionon **vetem me lista te renditura**.

- **Kompleksiteti:** O(log n) — shume me i shpejte se linear per lista te medha
- **Avantazhi:** Shume efikas per lista te medha
- **Disavantazhi:** Lista duhet te jete e renditur paraprakisht

```
Kerkojme 70 ne: [-100, 1, 10, 11, 30, 50, 70, 100, 232, 400]

Hapi 1: mid = 30  → 70 > 30  → kerkojme djathtas
Hapi 2: mid = 70  → 70 == 70 → u gjet!
```

### Krahasimi

| | Linear Search | Binary Search |
|--|---------------|---------------|
| **Kompleksiteti** | O(n) | O(log n) |
| **Lista e renditur?** | Jo, nuk nevojitet | Po, duhet patjeter |
| **Per 1000 elemente** | Deri ne 1000 hapa | Deri ne ~10 hapa |
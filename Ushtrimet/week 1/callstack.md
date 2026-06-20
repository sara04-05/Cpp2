## Call Stack — Frames dhe Adresa

Kur ekzekutojmë një program, memoria organizohet në disa pjesë. Një nga pjesët më të rëndësishme është **Call Stack** (steku i thirrjeve).

### Si funksionon Call Stack-u

Çdo herë që thirret një funksion, krijohet një **stack frame** (kornizë) në stek. Ky frame përmban:

- Variablat lokale të funksionit
- Parametrat e funksionit
- Adresën e kthimit (ku të kthehet programi pasi funksioni përfundon)

Adresa e çdo variable rritet sipas madhësisë në bajta të tipit (`int` = 4 bajta, `double` = 8 bajta, `char` = 1 bajt).

```
┌──────────────────────────────┐  Adresat e larta
│         ...                  │
├──────────────────────────────┤
│  Frame: main()               │
│    int a = 5    [0x1000]     │  ← 4 bajta (0x1000 - 0x1003)
│    int b = 10   [0x1004]     │  ← 4 bajta (0x1004 - 0x1007)
├──────────────────────────────┤
│  Frame: shuma(a, b)          │
│    int x = 5    [0x1008]     │  ← 4 bajta (0x1008 - 0x100B)
│    int y = 10   [0x100C]     │  ← 4 bajta (0x100C - 0x100F)
│    int rez = 15 [0x1010]     │  ← 4 bajta (0x1010 - 0x1013)
├──────────────────────────────┤  Adresat e ulta
```

### Shembull

```cpp
#include <iostream>
using namespace std;

int shuma(int x, int y) {
    int rez = x + y;  // rez, x, y jetojnë në frame-in e shuma()
    return rez;
}

int main() {
    int a = 5;         // a jeton në frame-in e main()
    int b = 10;        // b jeton në frame-in e main()
    int c = shuma(a, b);
    cout << "Shuma: " << c << endl;
    return 0;
}
```

Kur `main()` thirr `shuma(a, b)`:
1. Krijohet një frame i ri në stek për `shuma()`
2. Vlerat e `a` dhe `b` kopjohen në parametrat `x` dhe `y`
3. Çdo variabël ka adresën e vet në memorie (p.sh. `a` ndodhet në `0x1000`, `x` në `0x1008`)
4. Kur `shuma()` përfundon, frame-i i saj hiqet nga steku

### Çdo variabël ka një adresë

Çdo variabël që deklarojmë ruhet diku në memorie, dhe ajo lokacion ka një adresë numerike. Kjo adresë është pikërisht ajo që pointerat ruajnë — dhe kjo na çon te tema kryesore.

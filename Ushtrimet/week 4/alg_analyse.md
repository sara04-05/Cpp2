# Analiza e algoritmeve

## Cfare eshte Big O?

Big O eshte nje notacion matematikor qe perdoret ne shkencen kompjuterike per te pershkruar **kompleksitetin e algoritmeve**.

## Karakteristikat kryesore te Big O

- **Tregon rritjen relative te kostos**: Big O pershkruan se si rritet koha e ekzekutimit ose perdorimi i memories kur madhesia e hyrjes rritet shume.

- **Nuk tregon kohen e sakte**: Big O nuk e jep kohen e sakte te ekzekutimit, por tregon ritmin me te cilin ajo rritet ne raport me madhesine e hyrjes.

- **Varet nga madhesia e hyrjes**: Kompleksiteti i nje algoritmi shprehet ne varesi te madhesise se hyrjes, qe zakonisht shenohet me `n`.

- **Fokusohet te hyrjet e medha**: Big O eshte me i dobishem kur analizojme sjelljen e algoritmit per vlera te medha te `n`. Disa hapa mund te duken te kushtueshem per hyrje te vogla, por behen te paperfillshem kur hyrja rritet.

## Kompleksitetet me te zakonshme ne C++

| Notacioni  | Emri                      | Shembull                                                             |
| ---------- | ------------------------- | -------------------------------------------------------------------- |
| O(1)       | Kompleksitet konstant     | Qasja ne nje element te vektorit permes indeksit                     |
| O(log n)   | Kompleksitet logaritmik   | Kerkimi binar ne nje vektor te renditur                              |
| O(n)       | Kompleksitet linear       | Kerkimi sekuencial ne nje vektor                                     |
| O(n log n) | Kompleksitet `n log n`    | Algoritme renditjeje si merge sort dhe quick sort                    |
| O(n^2)     | Kompleksitet kuadratik    | Algoritme si bubble sort ose insertion sort                          |
| O(2^n)     | Kompleksitet eksponencial | Gjenerimi i te gjitha nenbashkesive te nje bashkesie me `n` elemente |
| O(n!)      | Kompleksitet faktorial    | Zgjidhja brute force e problemit te shitësit udhetar                 |

Per me shume informacione, mund te lexoni edhe kete burim: [Nje shpjegim i thjeshtuar i notacionit Big O](https://medium.com/karuna-sehgal/a-simplified-explanation-of-the-big-o-notation-82523585e835)
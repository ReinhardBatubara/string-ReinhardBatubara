# T04 String

Pada sesi ini anda diminta untuk menyelesaikan dua buah persoalan yang akan melatih abstraksi serta kemampuan anda dalam memanipulasi string. Pada dasarnya string adalah a sequence of char-typed values yang diakhiri dengan ```\0```. Karakteristik string memungkinkan array digunakan sebagai media penyimpanan string.

Untuk dapat menyelesaikan kedua persoalan berikut, anda harus memiliki penguasaan yang baik terhadap konsep Memory Allocation, dan Array.

## Tugas 1: Boxed String (t04_01.c, 100 points)

Pada tugas ini anda akan diminta untuk mengembangkan sebuah solusi yang akan memecah sebuah string dengan panjang ```l```, di mana ```l``` adalah sebuah bilangan bulat positif. Nilai ```l``` dimasukkan dalam bentuk command line argument. Selanjutnya, solusi akan membaca sebaris masukkan dengan panjang tak lebih dari 100 karakter. Nasukkan selanjutnya akan dipecah sepanjang ```l``` sehingga terbentuk ```n``` buah string. Bila pada string ke-```n``` tidak memenuhi panjang ```l``` maka akan diisi dengan tanda hash (```#```). Solusi kemudian akan menampilkan seluruh string hasil pemecahan, setiap string ditampilkan dalam satu baris keluaran.

**Example 1**
Perhatikan contoh eksekusi berikut.

```bash
t04_01 7

```

Dengan demikian, nilai ```l``` adalah 7. Selanjutnya diberikan masukkan sebagai berikut.

```bash
Jaka Sembung bawa golok.

```

Solusi kemudian akan memberikan keluaran sebagai berikut.

```bash
Jaka Se
mbung b
awa gol
ok.####

```

Perhatikan bahwa setiap baris keluaran berisi string sepanjang ```l``` dan pada akhir dari baris ke-```n``` diisi dengan ```#``` karena tidak memenuhi kriteria, yakni sepanjang ```l```.

**Example 2**
Perhatikan contoh eksekusi berikut.

```bash
t04_01 9

```

Pada contoh ini, nilai ```l``` adalah 9. Selanjutnya diberikan masukkan sebagai berikut.

```bash
Jaka Sembung bawa golok.

```

Solusi kemudian akan memberikan keluaran sebagai berikut.

```bash
Jaka Semb
ung bawa 
golok.###

```

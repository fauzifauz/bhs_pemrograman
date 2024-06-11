Array (Array):

Struktur yang digunakan untuk menyimpan dan mengorganisir kumpulan data.
Sangat penting bagi seorang programmer untuk memahami konsep struktur data.
Array dalam Python tidak sepopuler dalam bahasa pemrograman lainnya seperti C atau Java, namun Python memiliki banyak struktur data lain yang dapat digunakan.

Set (Set):

Jenis data kolektif yang digunakan untuk menyimpan beberapa nilai dalam satu variabel dengan kondisi-kondisi tertentu.
Nilai-nilai yang disimpan dalam set harus unik (tidak ada duplikat) dan tidak bisa diubah.
Set tidak berurutan, artinya tidak bisa diakses dengan indeks.

# use curly braces

student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'} print(student_set)

# convert list into set

fruit_set = set(['mango', 'Apple']) print(set_fruit)

# sets with different data types

set_mix = {'man', 'animal', 5, True, ('A', 'B')}

print(set_mix)

Output :

{'Wahid', 'Lendis', 'Basith', 'Huda'}

{'apel', 'mangga'}

(True, 5, ('A', 'B'), 'hewan', 'manusia'

Unordered Set 

Unordered Set adalah kumpulan elemen-elemen unik tanpa urutan tertentu, yang berarti elemen-elemennya tidak diatur dalam urutan tertentu dan setiap elemen hanya muncul sekali dalam set tersebut.

my_set = {'a'}

print(my_set[8])

Error message:

Traceback (most recent call last):

File "<stdin>", line 1, in <module>

TypeError: 'set' object is note subscriptable

We can also look at the program code that we created earlier:

student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'} print(student_set)

Outputs:

000

"Wahid", "Lendis", "Basith", "Huda"}

Consider the following example:

#set members must be of immutable data type set_fruit = { 'mango', 'lemon', 'avocado', True, 1, 2, 3)

#we can make tuple a member #because it is immutable

keyboard_= {

(1, 2, 3),

(4, 5, 6),

(7, 8, 9),

(8)

}

But we can't include list as a member because list is mutable. Consider the following example:

x set 35, 108, ['a', 'b'] }

Error message:

Unggu

Traceback (most recent call last): File "<stdin>", line 1, in <module> TypeError: unhashable type: 'list'

No duplicate values :

Set (kumpulan) tanpa nilai ganda berarti setiap elemen dalam kumpulan hanya muncul sekali, tidak ada duplikat nilai.

unique_word={ 'morning', 'this', 'is', 'morning', 'which', 'very', 'bright'}

print(unique_word)

Add/Update Set Elements

meskipun nilai set tidak dapat diubah, kita masih dapat menambahkan dan menghapus elemen. Kita bisa menambahkan anggota baru ke dalam set dengan menggunakan fungsi add() dan update().

alphabet_set = {'a', 'b', 'c'}

print(alphabetical set)

#add one by one

set_abjad.add('d')

set_abjad.add('e')

#add more than one member at a time

set_abjad.update({ 'f', 'g' })

# can also use lists

set_abjad.update(['h', 'i'])

print(alphabetical set)

Delete/remove Set Elements :

Untuk menghapus anggota dari sebuah set, terdapat 4 fungsi yang dapat kita gunakan:

remove(value): Untuk menghapus nilai yang dicari. Jika nilai yang dicari tidak ada, maka akan terjadi kesalahan.

discard(value): Untuk menghapus nilai yang dicari. Jika nilai yang dicari tidak ada, tidak akan ada kesalahan.

pop(): Mengambil dan menghapus nilai di bagian kiri.

clear(): Menghapus semua anggota.

#will error if the value 100 is not in the set

set.remove(100)

print(set)

#will not error if ('a', 'b') is not in the set set.discard(('a', 'b'))

print(set)

#remove the value on the left

Removedvalue = set.pop()

print('Removed value', valueDeleted) print(set)

#delete all values

set.clear()

print(set)

Outputs: Universitas

(False, True, 100, maya', 'budi", ('a', 'b')} (False, True, 'maya", 'budi", ('a', 'b')) (False, True, 'maya", 'budi') nilai Yang Dihapus = False (True, 'maya', 'budt'} set()

Dictionary (Dictionary):

Tipe data yang digunakan untuk menyimpan kumpulan data atau nilai dengan pendekatan "pasangan kunci-nilai".
Setiap item dalam dictionary memiliki dua komponen inti: kunci dan nilai.
Unordered (tidak berurutan), berarti kunci tidak dapat diakses menggunakan indeks.
Bisa diubah (changeable), sehingga nilai yang disimpan dapat diubah.
Unik, artinya tidak bisa memiliki dua kunci yang sama.

Ringkasan Fungsi (Function Summary):

Setiap jenis struktur data memiliki berbagai fungsi bawaan untuk melakukan operasi tertentu, seperti menambah, menghapus, atau memeriksa keanggotaan.
Contoh fungsi untuk set meliputi add(), remove(), dan clear().
Fungsi untuk dictionary meliputi get(), pop(), dan clear().
Dengan pemahaman ini, Anda dapat memanfaatkan array, set, dan dictionary dalam pengembangan Python Anda dengan lebih efisien.
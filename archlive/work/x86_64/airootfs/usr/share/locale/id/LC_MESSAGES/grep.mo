��    m      �  �   �      @	  �   A	  �   
  �  �
     �  /  �  �  �  Q  �  �  �  k  �  G  �     B  0   V     �     �  ,   �  ,   �  ,     '   G  -   o      �  (   �  (   �          0     P  q   R     �     �     �  Q   �  ?   C     �     �     �     �  $   �          "     =     N     [     d  :   �     �     �  #   �          "  3   9     m     u  &   �     �     �     �     �     �  (        0    E     R  ;   i  3   �  /   �  +   	  '   5  #   ]     �     �     �     �     �  4   �     !  "   @  !   c  0   �  -   �      �          !     9  $   H     m     �     �     �     �     �        $         =      J      [   >   o      �      �   P   �   ,   3!  *   `!     �!     �!     �!     �!     �!     �!     �!     "  �  "  �   �#  �   g$  �  \%     ,'  /  C'  �  s(  Q  **  {  |+  �  �,  G  �.     �/  4   �/     40     T0  1   p0  !   �0  1   �0  +   �0  2   "1     U1  ,   m1  *   �1     �1     �1     2  �   2     �2     �2     �2  L   �2  E   3     H3     d3     �3     �3  (   �3     �3     �3     4     *4     74  "   C4  ?   f4     �4  "   �4  '   �4     5     ,5  :   J5     �5     �5  /   �5     �5     �5     6     6     16  *   @6     k6  '  �6      �7  C   �7  =   8  ;   U8  5   �8  ,   �8  -   �8  )   "9  %   L9     r9     �9  ,   �9  H   �9  #   :  "   (:  !   K:  0   m:  2   �:  #   �:  $   �:     ;     3;  $   C;  (   h;  *   �;     �;     �;  #   �;     <     1<  6   M<     �<     �<  '   �<  >   �<     =     &=  O   B=  +   �=  0   �=     �=      >     >     ">      :>     [>     w>     �>     ^   J       6      >   M   +   Y   k   ,               d   B               Z         G   8           c             U   _   e   S   I      	   L      5   *          ;      /   :          "   i       .   %           E   7       N           R   @      Q   b           9   O       '   `       3      P   -             F         &   4       [   ?   \          f      H   C   A           !       =   )           W      1   a   #   2   
       X   m   V      $          g          D       T   <             (           ]   j       0                    K      l       h    
Context control:
  -B, --before-context=NUM  print NUM lines of leading context
  -A, --after-context=NUM   print NUM lines of trailing context
  -C, --context=NUM         print NUM lines of output context
 
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

 
Output control:
  -m, --max-count=NUM       stop after NUM matches
  -b, --byte-offset         print the byte offset with output lines
  -n, --line-number         print line number with output lines
      --line-buffered       flush output on every line
  -H, --with-filename       print the file name for each match
  -h, --no-filename         suppress the file name prefix on output
      --label=LABEL         use LABEL as the standard input file name prefix
 
Report bugs to: %s
       --include=FILE_PATTERN  search only files that match FILE_PATTERN
      --exclude=FILE_PATTERN  skip files and directories matching FILE_PATTERN
      --exclude-from=FILE   skip files matching any file pattern from FILE
      --exclude-dir=PATTERN  directories that match PATTERN will be skipped.
   -I                        equivalent to --binary-files=without-match
  -d, --directories=ACTION  how to handle directories;
                            ACTION is 'read', 'recurse', or 'skip'
  -D, --devices=ACTION      how to handle devices, FIFOs and sockets;
                            ACTION is 'read' or 'skip'
  -r, --recursive           like --directories=recurse
  -R, --dereference-recursive  likewise, but follow all symlinks
   -L, --files-without-match  print only names of FILEs containing no match
  -l, --files-with-matches  print only names of FILEs containing matches
  -c, --count               print only a count of matching lines per FILE
  -T, --initial-tab         make tabs line up (if needed)
  -Z, --null                print 0 byte after FILE name
   -NUM                      same as --context=NUM
      --color[=WHEN],
      --colour[=WHEN]       use markers to highlight the matching strings;
                            WHEN is 'always', 'never', or 'auto'
  -U, --binary              do not strip CR characters at EOL (MSDOS/Windows)
  -u, --unix-byte-offsets   report offsets as if CRs were not there
                            (MSDOS/Windows)

   -e, --regexp=PATTERN      use PATTERN for matching
  -f, --file=FILE           obtain PATTERN from FILE
  -i, --ignore-case         ignore case distinctions
  -w, --word-regexp         force PATTERN to match only whole words
  -x, --line-regexp         force PATTERN to match only whole lines
  -z, --null-data           a data line ends in 0 byte, not newline
   -o, --only-matching       show only the part of a line matching PATTERN
  -q, --quiet, --silent     suppress all normal output
      --binary-files=TYPE   assume that binary files are TYPE;
                            TYPE is 'binary', 'text', or 'without-match'
  -a, --text                equivalent to --binary-files=text
 %s home page: <%s>
 %s home page: <http://www.gnu.org/software/%s/>
 %s%s argument '%s' too large %s: invalid option -- '%c'
 %s: option '%c%s' doesn't allow an argument
 %s: option '%s' is ambiguous; possibilities: %s: option '--%s' doesn't allow an argument
 %s: option '--%s' requires an argument
 %s: option '-W %s' doesn't allow an argument
 %s: option '-W %s' is ambiguous
 %s: option '-W %s' requires an argument
 %s: option requires an argument -- '%c'
 %s: unrecognized option '%c%s'
 %s: unrecognized option '--%s'
 ' 'egrep' means 'grep -E'.  'fgrep' means 'grep -F'.
Direct invocation as either 'egrep' or 'fgrep' is deprecated.
 (C) (standard input) Binary file %s matches
 Example: %s -i 'hello world' menu.h main.c

Regexp selection and interpretation:
 General help using GNU software: <http://www.gnu.org/gethelp/>
 Invalid back reference Invalid character class name Invalid collation character Invalid content of \{\} Invalid preceding regular expression Invalid range end Invalid regular expression Memory exhausted Mike Haertel No match No previous regular expression PATTERN is, by default, a basic regular expression (BRE).
 Packaged by %s
 Packaged by %s (%s)
 Premature end of regular expression Regular expression too big Report %s bugs to: %s
 Search for PATTERN in each FILE or standard input.
 Success Trailing backslash Try '%s --help' for more information.
 Unknown system error Unmatched ( or \( Unmatched ) or \) Unmatched [ or [^ Unmatched \{ Usage: %s [OPTION]... PATTERN [FILE]...
 Valid arguments are: When FILE is -, read standard input.  With no FILE, read . if a command-line
-r is given, - otherwise.  If fewer than two FILEs are given, assume -h.
Exit status is 0 if any line is selected, 1 otherwise;
if any error occurs and -q is not given, the exit status is 2.
 Written by %s and %s.
 Written by %s, %s, %s,
%s, %s, %s, %s,
%s, %s, and others.
 Written by %s, %s, %s,
%s, %s, %s, %s,
%s, and %s.
 Written by %s, %s, %s,
%s, %s, %s, %s,
and %s.
 Written by %s, %s, %s,
%s, %s, %s, and %s.
 Written by %s, %s, %s,
%s, %s, and %s.
 Written by %s, %s, %s,
%s, and %s.
 Written by %s, %s, %s,
and %s.
 Written by %s, %s, and %s.
 Written by %s.
 ` ambiguous argument %s for %s character class syntax is [[:space:]], not [:space:] conflicting matchers specified exceeded PCRE's backtracking limit exceeded PCRE's line length limit failed to allocate memory for the PCRE JIT stack failed to return to initial working directory input file %s is also the output input is too large to count internal PCRE error: %d internal error internal error (should never happen) invalid %s%s argument '%s' invalid argument %s for %s invalid character class invalid content of \{\} invalid context length argument invalid matcher %s invalid max count invalid suffix in %s%s argument '%s' lseek failed memory exhausted no syntax specified others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS> recursive directory loop regular expression too big support for the -P option is not compiled into this --disable-perl-regexp binary the -P option only supports a single pattern unable to record current working directory unbalanced ( unbalanced ) unbalanced [ unfinished \ escape unknown binary-files type unknown devices method warning: %s: %s write error Project-Id-Version: grep 2.19.12
Report-Msgid-Bugs-To: bug-grep@gnu.org
POT-Creation-Date: 2015-11-01 17:26-0800
PO-Revision-Date: 2014-08-05 07:00+0700
Last-Translator: Arif E. Nugroho <arif_endro@yahoo.com>
Language-Team: Indonesian <translation-team-id@lists.sourceforge.net>
Language: id
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
 
Context control:
  -B, --before-context=NUM  print NUM lines of leading context
  -A, --after-context=NUM   print NUM lines of trailing context
  -C, --context=NUM         print NUM lines of output context
 
Lisensi GPLv3+; GNU GPL versi 3 atau lebih lanjut <http://gnu.org/licenses/gpl.html>
Ini adalah aplikasi bebas; anda bebas untuk mengubah dan meredistribusikannya.
TIDAK ADA GARANSI disini, sampai batas yang diijinkan oleh hukum yang berlaku.
 
Output control:
  -m, --max-count=NUM       stop after NUM matches
  -b, --byte-offset         print the byte offset with output lines
  -n, --line-number         print line number with output lines
      --line-buffered       flush output on every line
  -H, --with-filename       print the file name for each match
  -h, --no-filename         suppress the file name prefix on output
      --label=LABEL         use LABEL as the standard input file name prefix
 
Laporkan bugs ke: %s
       --include=FILE_PATTERN  search only files that match FILE_PATTERN
      --exclude=FILE_PATTERN  skip files and directories matching FILE_PATTERN
      --exclude-from=FILE   skip files matching any file pattern from FILE
      --exclude-dir=PATTERN  directories that match PATTERN will be skipped.
   -I                        equivalent to --binary-files=without-match
  -d, --directories=ACTION  how to handle directories;
                            ACTION is 'read', 'recurse', or 'skip'
  -D, --devices=ACTION      how to handle devices, FIFOs and sockets;
                            ACTION is 'read' or 'skip'
  -r, --recursive           like --directories=recurse
  -R, --dereference-recursive  likewise, but follow all symlinks
   -L, --files-without-match  print only names of FILEs containing no match
  -l, --files-with-matches  print only names of FILEs containing matches
  -c, --count               print only a count of matching lines per FILE
  -T, --initial-tab         make tabs line up (if needed)
  -Z, --null                print 0 byte after FILE name
   -NUM                      sama seperti --context=NUM
      --color[=WHEN],
      --colour[=WHEN]       gunakan penanda untuk membedakan string yang cocok
                            WHEN dapat berupa 'always', 'never', atau 'auto'
  -U, --binary              jangan hapus karakter CR di EOL (MSDOS)
  -u, --unix-byte-offsets   laporkan ofset seperti bila CR tidak ada (MSDOS)

   -e, --regexp=POLA         gunakan POLA untuk pencocokan
  -f, --file=BERKAS         dapatkan pola dari BERKAS
  -i, --ignore-case         abaikan perbedaan besar huruf
  -w, --word-regexp         paksa POLA hanya untuk pencocokan dengan keseluruhan kata
  -x, --line-regexp         paksa POLA hanya untuk pencocokan dengan keseluruhan baris
  -z, --null-data          baris data berakhir dalam 0 byte, bukan baris-baru

   -o, --only-matching       show only the part of a line matching PATTERN
  -q, --quiet, --silent     suppress all normal output
      --binary-files=TYPE   assume that binary files are TYPE;
                            TYPE is 'binary', 'text', or 'without-match'
  -a, --text                equivalent to --binary-files=text
 Halaman rumah %s: <%s>
 Halaman rumah %s: <http://www.gnu.org/software/%s/>
 %s%s argumen '%s' terlalu besar %s: opsi tidak valid -- %c
 %s: opsi `%c%s' tidak mengijinkan sebuah argumen
 %s: opsi `%s' rancu; kemungkinan: %s: opsi `--%s' tidak mengijinkan sebuah argumen
 %s: opsi `--%s' membutuhkan sebuah argumen
 %s: opsi `-W %s' tidak mengijinkan sebuah argumen
 %s: opsi `-W %s' rancu
 %s: opsi `-W %s' membutuhkan sebuah argumen
 %s: opsi membutuhkan sebuah argumen -- %c
 %s: opsi tidak dikenal `%c%s'
 %s: opsi tidak dikenal `--%s'
 ' `egrep' berarti `grep -E'. `fgrep' berarti `grep -F'.
Pemanggilan langsung baik sebagai `egrep' atau `fgrep' sudah ditinggalkan.
 (c) (standar masukan) Berkas binari %s cocok
 Contoh: %s -i 'hello world' menu.h main.c

Seleksi dan interpretasi regexp:
 Bantuan umum menggunakan aplikasi GNU: <http://www.gnu.org/gethelp/>
 Referensi balik tidak valid Nama kelas karakter tidak valid Karakter kolasi tidak valid Isi dari \{\} tidak valid Ekspresi umum yang mengawali tidak valid Akhir jangkauan tidak valid Ekspresi umum tidak valid Kehabisan memori Mike Haertel Tidak cocok Tidak ada ekspresi umum sebelumnya POLA adalah, secara baku, sebuah ekspresi regular dasar (BRE).
 Packaged (tersimpan) oleh %s 
 Packaged (tersimpan) oleh %s (%s)
 Akhir dari ekspresi umum tidak sempurna Ekspresi umum terlalu besar Laporkan kesalahan %s ke: %s
 Cari untuk POLA dalam setiap berkas atau standar masukan.
 Sukses Kelebihan backslash Coba '%s --help' untuk informasi lebih lanjut.
 Kesalahan sistem tidak dikenal Tidak cocok ( atau \( Tidak cocok ) atau \) Tidak cocok [ atau [^ Tidak cocok \{ Penggunaan: %s [OPSI]... POLA [BERKAS]...
 Valid (sesuai) argumen adalah: Jika tidak ada BERKAS, atau ketika BERKAS adalah -, baca standar masukan. Jika lebih kecil dari dua BERKAS
yang diberikan, asumsikan -h. Status keluar adalah 0 jika baris apapun telah dipilih, 1 jika tidak;
jika ada error apapun yang terjadi dan opsi -q tidak diberikan, status keluar adalah 2.
 Written (tulis) oleh %s dan %s.
 Written (tulis) oleh %s, %s, %s,
%s, %s, %s, %s,
%s, %s, dan lain.
 Written (tulis) oleh %s, %s, %s,
%s, %s, %s, %s,
%s, dan %s.
 Written (tulis) oleh %s, %s, %s,
 %s, %s, %s, %s,
 dan %s.
 Written (tulis) oleh %s, %s, %s,
%s, %s, %s, dan %s.
 Written (tulis) %s, %s, %s,
%s, %s, dan %s.
 Written (tulis) oleh %s, %s, %s,
%s, dan %s.
 Written (tulis) oleh %s, %s, %s,
dan %s.
 Written (tulis) oleh %s, %s, and %s.
 Written (tulis) oleh %s.
 ` ambiguous (tidak sesuai) argumen %s untuk %s character (karakter) tingkat sintaks adalah [[:space:]], tidak [:space:] konflik pencocokan dispesifikasikan exceeded PCRE's backtracking limit exceeded PCRE's line length limit failed to allocate memory for the PCRE JIT stack failed (gagal) kembali ke direktori kerja sekarang input (masuk) berkas %s juga keluar masukan terlalu besar untuk dihitung penulisan error PCRE: %d penulisan error internal error (should never happen) invalid (tidak sesuai) %s%s argumen '%s' invalid (tidak sesuai) argumen %s untuk %s Nama kelas karakter tidak valid Isi dari \{\} tidak valid konteks panjang argumen tidak valid matcher tidak valid %s jumlah maksimal tidak valid invalid (tidak sesuai) akhiran dalam %s%s argumen '%s' gagal lseek kehabisan memori Tidak ada sintaks yang dispesifikasikan lain, lihat <http://git.sv.gnu.org/sgit/grep.git/tree/AUTHORS> perulangan direktori rekursif Ekspresi umum terlalu besar Dukungan untuk opsi -P tidak dikompile kedalam ini --disable-perl-regexp binari Opsi -P hanya mendukung sebuah pola tunggal unable (gagal) menrekam direktori kerja sekarang ( tidak seimbang ) tidak seimbang [ tidak seimbang escape \\ tidak selesai tipe berkas binari tidak dikenal metode device tidak dikenal peringatan: %s: %s penulisan error 
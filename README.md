# kuyruk_yapisi
Bu proje kuyruğun(queue) bağlı liste yapısını ve bu yapıda yapabileceğimiz işlemleri içeren bir C kodudur.

Bağlı listeyi oluşuturan "dugum" yapısı içindeki "veri" değişkeni, o değişkene atanan tamsayıyı ifade eder. "sonraki"
işaretçisi ise kendinden sonra gelen düğümün adresini tutar. Kuyruğu oluşturacak olan "ilk" ve "son" düğüm tanımlanır ve
içine boş değerler atanır. Kullanıcının "Ekleme" işlemini seçmesi durumunda, kullanıcıdan kuyruğa eklemek istediği değer
istenir ve bu değer ekle() fonksiyonuna gönderilir. Bu fonksiyonda öncelikle ilk düğümün boş olup olmadığı kontrol edilir
eğer boşsa yeni bir düğüm oluşturulur ve kullanıcıdan alınan değer yeni düğüme atanır. "ilk" ve "son" düğüm de bu yeni düğüme
eşitlenir. Boş olmadığı durumda ise tekrar yeni bir düğüm oluşturulur fakat bu yeni düğüm kuyruğun son düğümünden sonraya
yerleştirilir. Kullanıcı "Silme" işlemini seçtiği taktirde tekrardan kuyruğun boş olup olmadığı kontrol edilir, boşsa uyarı
mesajı yazdırılır eğer boş değilse kuyruğun ilk düğümü geçici bir işaretçiye atanır, ilk düğümden sonra gelen düğüm ilk düğüme
eşitlenir. free() fonksiyonuyla geçici düğüm yani güncellemeden önceki ilk düğüm silinmiş olur. Kullanıcı "Goruntule" seçeneğini
seçtiğinde tekrar geçici düğüm kullanılarak döngü yardımıyla kuyruk yazdırılır. Son olarak kullanıcı "Cikis" işlemi ile programdan
çıkabilir.

Kodu herhangi bir C derleyicisinde derleyip çalıştırabilirsiniz.

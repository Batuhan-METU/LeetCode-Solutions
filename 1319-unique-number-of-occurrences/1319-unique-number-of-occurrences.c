bool uniqueOccurrences(int* arr, int arrSize) {
    int freq[2001] = {0}; // -1000 ile 1000 arasındaki sayıları kaydırarak saklayacağız
    bool seen[2001] = {false}; // Frekansların tekrar edip etmediğini kontrol için

    // Adım 1: Sayıların frekansını hesapla
    for (int i = 0; i < arrSize; i++) {
        int index = arr[i] + 1000; // Negatifleri önlemek için 1000 ekliyoruz
        freq[index]++;
    }

    // Adım 2: Frekansların benzersiz olup olmadığını kontrol et
    for (int i = 0; i < 2001; i++) {
        if (freq[i] > 0) { // Sadece kullanılan frekanslara bak
            if (seen[freq[i]]) { // Eğer bu frekans daha önce görüldüyse false döndür
                return false;
            }
            seen[freq[i]] = true; // Bu frekansı işaretle
        }
    }
    return true; // Eğer tüm frekanslar benzersizse true döndür
}
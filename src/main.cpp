#include "XboxFix.hpp"
#include <cstdio>

// iOS Dylib Yüklendiğinde Otomatik Çalışan Yapıcı Fonksiyon (Constructor)
__attribute__((constructor))
static void client_entry_point() {
    printf("\n===========================================\n");
    printf("     MY PVP CLIENT - iOS DYLIB INITIALIZED   \n");
    printf("===========================================\n\n");

    // Client GUI & Mod Yüklemelerin Buraya
    // ...

    // Xbox Login Fix Entegrasyonu
    XboxFix::Initialize();
}

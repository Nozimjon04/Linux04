#include <stdio.h>

int main() {
    printf("HD{bu to'g'ri bajarildi!}\n");
    return 0;
}

// mkdir -p flag_package/usr/local/bin
// mkdir -p flag_package/DEBIAN

// cp flag_app flag_package/usr/local/bin/

// nano flag_package/DEBIAN/control => 
    // Package: flagapp
    // Version: 1.0
    // Section: base
    // Priority: optional
    // Architecture: amd64
    // Essential: no
    // Maintainer: YourName <your-email@example.com>
    // Description: HD{bu to'g'ri bajarildi!}.

// dpkg-deb --build flag_package


// sudo mv flag_package.deb /var/cache/apt/archives/


// apt search flag



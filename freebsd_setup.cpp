//////////////////////////////////////////////
/*			Standart Server Kurulum			*/
//////////////////////////////////////////////

// 1. Adım
portsnap fetch extract update
// 2. Adım
pkg install python
// 3. Adım
cd /usr/bin && ln -s /usr/local/bin/python2.7 python
// 4. Adım Compat
pkg install compat7x-amd64
pkg install compat9x-amd64
pkg install compat11x-amd64
// 5. Adım OpenSSL
pkg install openssl
// 10.adım Mysql
// MySQL 5.6
pkg install mysql56-server
// MySQL 5.5
pkg install mysql55-server
//6. adım
sysrc mysql_enable=YES
sysrc fsck_y_enable=YES
sysrc background_fsck=NO

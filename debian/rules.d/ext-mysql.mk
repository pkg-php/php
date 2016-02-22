ext_PACKAGES      += mysql
mysql_DESCRIPTION := MySQL
mysql_EXTENSIONS  := mysqli pdo_mysql
mysqli_config     := \
	--enable-mysqlnd \
	  --enable-mysqlnd-compression-support \
	  --with-zlib-dir=/usr \
	--with-mysqli=shared,mysqlnd
pdo_mysql_config  := --with-pdo-mysql=shared,mysqlnd
mysqlnd_PRIORITY  := 10
export mysqlnd_PRIORITY
export mysql_EXTENSIONS
export mysql_DESCRIPTION

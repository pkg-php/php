ext_PACKAGES += mysql
mysql_DESCRIPTION := MySQL
mysql_EXTENSIONS := mysqli pdo_mysql
mysqli_config := --with-mysqli=mysqlnd
pdo_mysql_config := --with-pdo-mysql=mysqlnd
export mysql_EXTENSIONS

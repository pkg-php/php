ext_PACKAGES += sybase
sybase_DESCRIPTION := Sybase
sybase_EXTENSIONS := pdo_dblib
sybase_config := --with-pdo-dblib=shared,/usr
export sybase_EXTENSIONS

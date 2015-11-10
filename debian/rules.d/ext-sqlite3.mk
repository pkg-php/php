ext_PACKAGES += sqlite3
sqlite3_DESCRIPTION := SQLite3
sqlite3_EXTENSIONS := sqlite3 pdo_sqlite
sqlite3_config := --with-sqlite3=shared,/usr \
	          --with-pdo-sqlite=shared,/usr

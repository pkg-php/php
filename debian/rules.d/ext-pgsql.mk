ext_PACKAGES      += pgsql
pgsql_DESCRIPTION := PostgreSQL
pgsql_EXTENSIONS  := pgsql pdo_pgsql
pgsql_config      := --with-pgsql=shared,/usr
pdo_pgsq_config   := --with-pdo-pgsql=shared,/usr
export pgsql_EXTENSIONS
export pgsql_DESCRIPTION

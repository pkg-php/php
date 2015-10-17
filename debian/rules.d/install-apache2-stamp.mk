install-apache2-stamp: build-apache2-stamp
	install -d -m 755 debian/tmp/etc/apache2/mods-available
	dh_auto_install --builddirectory apache2-build -- install-headers install-build install-sapi install-programs INSTALL_ROOT=$(CURDIR)/debian/tmp
	touch install-apache2-stamp


Debian
====================
This directory contains files used to package wikid/wiki-qt
for Debian-based Linux systems. If you compile wikid/wiki-qt yourself, there are some useful files here.

## wiki: URI support ##


wiki-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install wiki-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your wiki-qt binary to `/usr/bin`
and the `../../share/pixmaps/wiki128.png` to `/usr/share/pixmaps`

wiki-qt.protocol (KDE)



Debian
====================
This directory contains files used to package gexd/gex-qt
for Debian-based Linux systems. If you compile gexd/gex-qt yourself, there are some useful files here.

## gex: URI support ##


gex-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install gex-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your gexqt binary to `/usr/bin`
and the `../../share/pixmaps/gex128.png` to `/usr/share/pixmaps`

gex-qt.protocol (KDE)


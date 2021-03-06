
/*
Message file for ARACHNE WWW browser

Notes for translators:

1) Please translate only quoted messages (text between " .... ")
2) Please keep symbols like %s, %d, etc. They will be replaced by program.
3) Symbol \n means line break

*/

//Messages with (almost) unlimited size (one line of text):

#define MSG_START  "\nTeleMED OnlineCOM V%s%s wird gestartet...\n%s\n"
#define MSG_END    "\nTeleMED OnlineCOM V%s%s wurde beendet...\n%s\n\n"
#define MSG_MEM    "Zu wenig konventioneller (unterer) Speicher verf�gbar"
#define MSG_BYTES  ": (%lu Bytes fehlen)\n"
#define MSG_XSWAP  "Ung�ltige xSwap-Operation"
#define MSG_XDEL   "Fehler beim L�schen aus xSwap"
#define MSG_DELAY1 "Bitte warten ..."
#define MSG_DELAY2 "Einen Moment ..."
#define MSG_BREAK  "<Strg>+<Pause> um abzubrechen..."
#define MSG_ESC    "<Esc> um abzubrechen..."
#define MSG_ANYKEY " dr�cken Sie eine Taste "
#define MSG_ALLOC  "Speicherallokationsfehler - %s !\n"
#define MSG_DNSERR "Konnte Computer %s nicht finden - Bitte �berpr�fen Sie Ihre Konfiguration !"
#define MSG_BADEXE "Fehler in der EXE-Datei."
#define MSG_TCPIP  "Initialisiere TCP/IP..."
#define MSG_FONT   "Aktualisiere Zeichensatz-Informationen..."
#define MSG_RETURN ""
#define MSG_THIS   ""
#define MSG_HANGUP "Beende Verbindung..."
#define MSG_ERRIMG "Konnte Bild nicht laden..."
#define MSG_CONV   "Konvertiere '%s' zu %s. %s %s"
#define MSG_PLUGIN "Spiele '%s'. %s"
#define MSG_ERROR  "Fehler!"
#define MSG_NOTMEM "Dokument ist zu lang !"
#define MSG_ABORT  "Transfer unterbrochen!"
#define MSG_ASKDNS "Frage Domain-Name-Server nach %s ..."
#define MSG_ERRCON "Konnte nicht mit %s verbinden - Bitte �berpr�fen Sie Ihre Konfiguration !"
#define MSG_CON    "Verbinde mit %s, Port %d ..."
#define MSG_REQ    "Verbunden mit %s - Fordere Dokument '%s' an ..."
#define MSG_POST   "Sende Daten..."
#define MSG_READ   "%d Bytes gelesen.\n"
#define MSG_HTTP   "HTTP Header von"
#define MSG_REDIR  "Umleitung..."
#define MSG_CLOSE  "Beende Verbindung..."
#define MSG_CLOSED "Vebindung beendet."
#define MSG_DOWNLD "Herunterladen ("
#define MSG_X_OF_Y "%s%ld von %ld Bytes ) ..."
#define MSG_BYTESR "%s%ld Bytes gelesen) ..."
#define MSG_MISOBJ "%d Objekte fehlen, "
#define MSG_DISK   "Lade Dokument von der Festplatte"
#define MSG_ADJUST "Anpassen von Frames, Bildern und Tabellen"
#define MSG_DLPERC "Herunterladen des Dokuments (%ld von %ld Bytes) ..."
#define MSG_DLBYTE "Herunterladen des Dokuments (%ld Bytes gelesen) ..."
#define MSG_REDRAW "Zeichnen des Bildschirms..."
#define MSG_RENDER "Generiere virtuellen Bildschirm..."
#define MSG_FORM   "Verarbeite Formular..."
#define MSG_FRAMES "Dies ist ein mehrteiliges Dokument:"
#define MSG_DELAY0 "Bitte warten..."
#define MSG_VERIFY "Pr�fe Bilder..."
#define MSG_CFGERR "Lesefehler bei %s - l�nger als %d Zeilen oder kein Speicher verf�gbar\n"
#define MSG_KILL   "L�sche lokalen Cache..."
#define MSG_DEAD   "Cache ist leer."
#define MSG_URL    "Geben Sie die gew�nschte URL ein und dr�cken Sie <Enter> ..."
#define MSG_TCPERR "FEHLER: %s\n"
#define MSG_TCPILL "Ung�ltiger TCP/IP Status: %d\n"
#define MSG_NOIP   "Undefinierte IP-Addresse !"
#define MSG_CONFIG "Aktualisiere Konfigurationsdatei..."
#define MSG_WRITE  "Schreibe Datei..."
#define MSG_COPY   "Kopiere..."
#define MSG_HOTLST "Adresse zu Favoriten hinzugef�gt."
#define MSG_ERRHOT "Konnte nicht zu Favoriten hinzuf�gen !"
#define MSG_FNTERR "Ladefehler bei Zeichensatzdatei: "
#define MSG_MEMLFT "(Freier Speicher = %lu)\n"
#define MSG_F5ZOOM "\n\nIn diesem Modus k�nnen Sie mit <F5> oder <*> auf Full-Screen schalten.\n\nBitte%s..."
#define MSG_VERR1  "\nKonnte Video-Modus nicht initialisieren !"
#define MSG_VERR2  "Wenn Ihre SVGA Karte unten nicht aufgef�hrt ist, versuchen Sie es mit dem VESA-Treiber."
#define MSG_VERR3  "Wenn Sie eine 256 kB VGA Karte benutzen, verwenden Sie bitte die 16-bit Version."
#define MSG_GIF    "Originalpalette=%d, GIF Palette=%d, Gesamtzahl der Farben=%d."
#define MSG_LDPAL  "Lade %d Farbpaletten ..."
#define MSG_MIXPAL "Mische Paletten mit %d Farben ..."
#define MSG_BMP    "Originalpalette=%d, BMP=Truecolor, Gesamtzahl der Farben=%d."
#define MSG_ASKING "Verbunden. Suche nach '%s'..."
#define MSG_WTRPL  "Verbunden. Warte auf Antwort..."
#define MSG_RDRPL  "Empfange Antwort... (%ld Bytes gelesen)"
#define MSG_CONVI  "Konvertiere %d Bilder. %s %s"
#define MSG_LOGIN  "Anmeldung..."
#define MSG_DETECT "%lu Nachrichten (%lu Bytes im Postfach)\n"
#define MSG_GET1   "Empfange %lu. Nachricht von %lu (%lu%s"
#define MSG_GET2   "Empfange %lu. Nachricht (%lu Bytes) von %lu (%lu%s"
#define MSG_GET3   " Bytes im Postfach)\n"
#define MSG_DELE   "L�sche %lu. Nachricht von %lu"
#define MSG_SKIP   "�berspringe %lu. Nachricht, da kein Platz auf der Festplatte\n"
#define MSG_ERROPN "Konnte Datei nicht �ffen!"
#define MSG_MEMSEL "\nZum Auslagern verf�gbare Speichertypen:\n"
#define MSG_SMTP   "Vebinde mit SMTP Server..."
#define MSG_ICON1  "Das zuletzt besuchte Dokument"
#define MSG_ICON2  "Das n�chste besuchte Dokument"
#define MSG_ICON3  "Home-Seite"
#define MSG_ICON4  "Neu laden"
#define MSG_ICON5  "Zu den Favoriten hinzuf�gen"
#define MSG_ICON6  "Favoriten"
#define MSG_ICON7  "Abbrechen"
#define MSG_ICON8  "Suchen"
#define MSG_ICON9  "Hilfe"
#define MSG_ICONH  "Verlauf"
#define MSG_ZOOM   "Gr��e �ndern"
#define MSG_EXIT   "TeleMED OnlineCOM beenden"
#define MSG_INFO2  "Zus�tzliche Informationen"
#define MSG_DIAL2  "Verbindungsaufbau konfigurieren"
#define MSG_SEND   "Sende Nachricht, %ld Bytes von %ld..."
#define MSG_UPLOAD "Sende Datei, %ld Bytes von %ld..."
#define MSG_SENT   "%d Bytes gesendet, warte auf Antwort..."
#define MSG_MAILUP "SMTP upload"
#define MSG_MAILDL "POP3 download"
#define MSG_REMOVE "%s gel�scht"
#define MSG_DIAL   "Einen Moment, w�hle! %s"
#define MSG_USEMAP "Verarbeite Client-side Imagemaps..."
#define MSG_PRN    "Konvertiere zu Text..."
#define MSG_SRCH1  "Suche nach '%s'..."
#define MSG_SRCH2  "Nicht gefunden !"
#define MSG_IMAGE  "%s Bild %dx%d"
#define MSG_COLORS ", %d Farben"
#define MSG_LINECOL"Zeile:%04d Spalte:%03d"
#define MSG_SRCH4  "Suche im Dokument nach:"
#define MSG_ENTER  "Geben Sie die zu suchende Zeichenkette ein und dr�cken Sie <Enter>"

//Messages with unlimited, but same size (use spaces to indent):

#define MSG_SELVGA   "W�hlen Sie Ihre Video-Karte : "
#define MSG_RESOL    "W�hlen Sie eine Aufl�sung   : "
#define MSG_MEMORY "\nW�hlen Sie den Speichertyp  : "

//Messages with limited size:

//                 >------------<
#define MSG_UNREG  "Unregistriert"

//                 >-------|----|-----<
#define MSG_INFMSG " Ger�t  frei  ben."

//(aproximately)   >-------------<
#define MSG_SAVE   "Speichern/Senden"
#define MSG_OPEN   "�ffnen/Laden"
#define MSG_PRINT  "Druck/Export"
#define MSG_SEARCH "In Seite suchen"
#define MSG_EDIT   "Bearbeiten"
#define MSG_SOURCE "HTML-Quelltext"
#define MSG_INFO   "Information"
#define MSG_IMAGES "Lade Bilder"
#define MSG_MAIL   "Postfach"
#define MSG_HOME   "Lokal Men�"

//(aproximately)   >------<
#define MSG_TITLE  "Titel:"

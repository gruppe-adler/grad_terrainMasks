#define MAINPREFIX x
#define PREFIX grad_modTemplate

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL-BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 1.80
#define REQUIRED_CBA_VERSION { 3, 5, 0 }
#define REQUIRED_ACE_VERSION { 3, 11, 0 }

#define QMAIN_ADDON QUOTE(MAIN_ADDON)
#define QCOMPONENT QUOTE(COMPONENT)
#define QADDON QUOTE(ADDON)

#define EADDON(PVAR) DOUBLES(PREFIX,PVAR)
#define QEADDON(PVAR) QUOTE(EADDON(PVAR))

#define AUTHOR { "Salbei" }
#define QAUTHOR QUOTE(AUTHOR)

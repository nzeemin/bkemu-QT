#pragma once

#define IDB_BITMAP_SOFT 0
#define IDB_BITMAP_PLEN 1

#include <QMap>
#include <QObject>

enum: int {
    IDS_ALTPRO_CODE = 0,
    IDS_ALTPRO_MODE,
    IDS_BK_ERROR_BLKBASEMEM11,
    IDS_BK_ERROR_BLKBASEMEM,
    IDS_BK_ERROR_BLKCONFIG,
    IDS_BK_ERROR_BLKCPUREGS,
    IDS_BK_ERROR_BLKEXT16MEM,
    IDS_BK_ERROR_BLKEXT32MEM,
    IDS_BK_ERROR_BLKFRAMEDATA,
    IDS_BK_ERROR_BLKMEMMAPMGR,
    IDS_BK_ERROR_BLKNOTFOUND,
    IDS_BK_ERROR_BLKPREVIEW,
    IDS_BK_ERROR_BLKSMK512MEM,
    IDS_BK_ERROR_BLKSYSREGS,
    IDS_BK_ERROR_BLKTAPE,
    IDS_BK_ERROR_DTABLKRDERR,
    IDS_BK_ERROR_DTABLKWRERR,
    IDS_BK_ERROR_HDRBLKRDERR,
    IDS_BK_ERROR_HDRBLKWRERR,
    IDS_BK_ERROR_MFBKBOARDERROR,
    IDS_BK_ERROR_MFDBGTOOLBARERROR,
    IDS_BK_ERROR_MFDOCKDEBUGVIEWERROR,
    IDS_BK_ERROR_MFDOCKINGBARERROR,
    IDS_BK_ERROR_MFDOCKMEMDUMPVIEWERROR,
    IDS_BK_ERROR_MFDOCKOSCVIEWERROR,
    IDS_BK_ERROR_MFDOCKREGDUMPVIEWERROR,
    IDS_BK_ERROR_MFDOCKTAPECTRLVIEWERROR,
    IDS_BK_ERROR_MFDOCKVKBDVIEWERROR,
    IDS_BK_ERROR_MFMENUBARERROR,
    IDS_BK_ERROR_MFPARSECMDLNERROR,
    IDS_BK_ERROR_MFSNDTOOLBARERROR,
    IDS_BK_ERROR_MFSTATUSBARERROR,
    IDS_BK_ERROR_MFSTDTOOLBARERROR,
    IDS_BK_ERROR_MFVCAPTOOLBARERROR,
    IDS_BK_ERROR_MSFCORRUPTMSF,
    IDS_BK_ERROR_MSFNOMSFFILE,
    IDS_BK_ERROR_MSFOPENFILEERROR,
    IDS_BK_ERROR_MSFPREVIEWBLK_DIB,
    IDS_BK_ERROR_MSFPREVIEWBLK_OBJ,
    IDS_BK_ERROR_MSFREADHEADERRROR,
    IDS_BK_ERROR_MSFSEEKERROR,
    IDS_BK_ERROR_MSFWRITEHEADERRROR,
    IDS_BK_ERROR_NOCBKOSCSCRCREATE,
    IDS_BK_ERROR_NOCBKOSCSCRINIT,
    IDS_BK_ERROR_NOCDISASMDLGINIT,
    IDS_BK_ERROR_NOCMEMDUMPDLGINIT,
    IDS_BK_ERROR_NOCREATEVKBD,
    IDS_BK_ERROR_NOCREGDUMPDLGINIT,
    IDS_BK_ERROR_NOCSCREENCREATE,
    IDS_BK_ERROR_NOCSCREENINIT,
    IDS_BK_ERROR_NOCTAPECTRLDLGINIT,
    IDS_BK_ERROR_NOERRORS,
    IDS_BK_ERROR_NOTENMEMR,
    IDS_BK_ERROR_SCRCOLORTABLEERR,
    IDS_BK_ERROR_SCRDLLFUNCERR,
    IDS_BK_ERROR_SCRDLLFUNCPTRERR,
    IDS_BK_ERROR_SCRDLLINITERR,
    IDS_BK_ERROR_SCRLLNOTLOAD,
    IDS_BK_ERROR_WRONGFILE,
    IDS_BUTTON_ADAPTIVEBWMODE_STR,
    IDS_BUTTON_COLORMODE_STR,
    IDS_BUTTON_LOAD_STR,
    IDS_BUTTON_SAVE_STR,
    IDS_BUTTON_SPRITE_STR,
    IDS_CANT_OPEN_FILE_S,
    IDS_COMMAND_PROMPT_INFO,
    IDS_CONFAY_AY38910,
    IDS_CONFAY_YM2149F,
    IDS_CONFNAME_BK_0010_01_A16M,
    IDS_CONFNAME_BK_0010_01_EXT32RAM,
    IDS_CONFNAME_BK_0010_01_FDD,
    IDS_CONFNAME_BK_0010_01_MSTD,
    IDS_CONFNAME_BK_0010_01_SAMARA,
    IDS_CONFNAME_BK_0010_01_SMK512,
    IDS_CONFNAME_BK_0010_01,
    IDS_CONFNAME_BK_0011_A16M,
    IDS_CONFNAME_BK_0011_FDD,
    IDS_CONFNAME_BK_0011M_A16M,
    IDS_CONFNAME_BK_0011M_FDD,
    IDS_CONFNAME_BK_0011M_SAMARA,
    IDS_CONFNAME_BK_0011M_SMK512,
    IDS_CONFNAME_BK_0011M,
    IDS_CONFNAME_BK_0011_SAMARA,
    IDS_CONFNAME_BK_0011_SMK512,
    IDS_CONFNAME_BK_0011,
    IDS_DDRAW_NEEDED,
    IDS_DEBUG_ADDRESS,
    IDS_DEBUG_ARGUMENTS,
    IDS_DEBUG_COMMAND,
    IDS_DEBUG_COMMENTS,
    IDS_DEBUG_MARK,
    IDS_DEBUG_WND,
    IDS_DISK_FORMAT_ALTPRO,
    IDS_DISK_FORMAT_ANDOS,
    IDS_DISK_FORMAT_AODOS,
    IDS_DISK_FORMAT_CSIDOS,
    IDS_DISK_FORMAT_DIR,
    IDS_DISK_FORMAT_DXDOS,
    IDS_DISK_FORMAT_ERROR,
    IDS_DISK_FORMAT_MICRODOS,
    IDS_DISK_FORMAT_MKDOS,
    IDS_DISK_FORMAT_MSDOS,
    IDS_DISK_FORMAT_NCDOS,
    IDS_DISK_FORMAT_NORD,
    IDS_DISK_FORMAT_RT11,
    IDS_DISK_FORMAT_SAMARA,
    IDS_DISK_FORMAT_UNKNOWN,
    IDS_DISK_NOACCESS,
    IDS_DISK_SYSTEM,
    IDS_EDIT_MENU,
    IDS_EMUL_TITLE,
    IDS_ERRMSF_OLD,
    IDS_ERRMSF_WRONG,
    IDS_ERRMSG_INTERNAL,
    IDS_ERRMSG_NOTROM,
    IDS_ERRMSG_ROM_NOT_DEFINED,
    IDS_ERRMSG_ROM,
    IDS_ERROR_CANTOPENFILE,
    IDS_EXPLORER,
    IDS_FILEEXT_BINARY,
    IDS_FILEEXT_MEMORYSTATE,
    IDS_FILEEXT_ROM,
    IDS_FILEEXT_SCRIPT,
    IDS_FILEEXT_TAPE,
    IDS_FILEEXT_WAVE,
    IDS_FILEFILTER_BIN,
    IDS_FILEFILTER_BKHDDIMG,
    IDS_FILEFILTER_BKIMG,
    IDS_FILEFILTER_IMGLOAD,
    IDS_FILEFILTER_MSF,
    IDS_FILEFILTER_TAPE_LOAD,
    IDS_FILEFILTER_TAPE_SAVE,
    IDS_FILEFILTER_TAP_ONLY,
    IDS_FILEFILTER_WAV,
    IDS_INI_ADDR_DISASM,
    IDS_INI_ADDR_DUMP,
    IDS_INI_ASK_FOR_BREAK,
    IDS_INI_AUTO_BEG_TAPE,
    IDS_INI_AUTO_END_TAPE,
    IDS_INI_AY1PANAL,
    IDS_INI_AY1PANBL,
    IDS_INI_AY1PANCL,
    IDS_INI_AY1VOLA,
    IDS_INI_AY1VOLB,
    IDS_INI_AY1VOLC,
    IDS_INI_AY8910,
    IDS_INI_AY8910_DCOFFSET,
    IDS_INI_AY8910_FILTER,
    IDS_INI_BIGBUTTONS,
    IDS_INI_BK10_OPT_MSTD,
    IDS_INI_BK10_RE2_017_MONITOR,
    IDS_INI_BK10_RE2_018_FOCAL,
    IDS_INI_BK10_RE2_019_MSTD,
    IDS_INI_BK10_RE2_106_BASIC1,
    IDS_INI_BK10_RE2_107_BASIC2,
    IDS_INI_BK10_RE2_108_BASIC3,
    IDS_INI_BK11M_RE2_324_BOS,
    IDS_INI_BK11M_RE2_325_EXT,
    IDS_INI_BK11M_RE2_327_BASIC1,
    IDS_INI_BK11M_RE2_328_BASIC2,
    IDS_INI_BK11M_RE2_329_BASIC3,
    IDS_INI_BK11M_RE2_330_MSTD,
    IDS_INI_BK11_RE2_198_BASIC1,
    IDS_INI_BK11_RE2_199_BASIC2,
    IDS_INI_BK11_RE2_200_BASIC3,
    IDS_INI_BK11_RE2_201_BOS,
    IDS_INI_BK11_RE2_202_EXT,
    IDS_INI_BK11_RE2_203_MSTD,
    IDS_INI_BK11_RE_OPT_PG12_1,
    IDS_INI_BK11_RE_OPT_PG12_2,
    IDS_INI_BK11_RE_OPT_PG13_1,
    IDS_INI_BK11_RE_OPT_PG13_2,
    IDS_INI_BKJOY_A,
    IDS_INI_BKJOY_ALTFIRE,
    IDS_INI_BKJOY_B,
    IDS_INI_BKJOY_DOWN,
    IDS_INI_BKJOY_FIRE,
    IDS_INI_BKJOY_LEFT,
    IDS_INI_BKJOY_RIGHT,
    IDS_INI_BKJOY_UP,
    IDS_INI_BKKEYBOARD,
    IDS_INI_BKMODEL,
    IDS_INI_BLACK_WHITE,
    IDS_INI_COLOR_MODE,
    IDS_INI_COVOX,
    IDS_INI_COVOX_DCOFFSET,
    IDS_INI_COVOX_FILTER,
    IDS_INI_COVOX_STEREO,
    IDS_INI_CPU_FREQUENCY,
    IDS_INI_CPU_RUN_ADDR,
    IDS_INI_DRIVEA,
    IDS_INI_DRIVEB,
    IDS_INI_DRIVEC,
    IDS_INI_DRIVED,
    IDS_INI_EMULATE_FDDIO,
    IDS_INI_EMUL_LOAD_TAPE,
    IDS_INI_EMUL_SAVE_TAPE,
    IDS_INI_EXCLUSIVEOPENIMAGES,
    IDS_INI_FDR253,
    IDS_INI_FDR_A16M,
    IDS_INI_FDR,
    IDS_INI_FDR_SAMARA,
    IDS_INI_FDR_SMK512,
    IDS_INI_FFMPEGCMDLINE,
    IDS_INI_FILENAME,
    IDS_INI_FULL_SCREEN,
    IDS_INI_HDD0,
    IDS_INI_HDD1,
    IDS_INI_ICLBLOCK,
    IDS_INI_IMG_DIRECTORY,
    IDS_INI_JOYSTICK,
    IDS_INI_LONGBIN,
    IDS_INI_LUMINOFOREMODE,
    IDS_INI_MEM_DIRECTORY,
    IDS_INI_MENESTREL_DCOFFSET,
    IDS_INI_MENESTREL_FILTER,
    IDS_INI_MENESTREL,
    IDS_INI_MOUSEM,
    IDS_INI_ORIG_SCRNSHOT_SIZE,
    IDS_INI_OSCRENDER_TYPE,
    IDS_INI_PALADAPTBW,
    IDS_INI_PALBW,
    IDS_INI_PALCOL00,
    IDS_INI_PALCOL01,
    IDS_INI_PALCOL02,
    IDS_INI_PALCOL03,
    IDS_INI_PALCOL04,
    IDS_INI_PALCOL05,
    IDS_INI_PALCOL06,
    IDS_INI_PALCOL07,
    IDS_INI_PALCOL08,
    IDS_INI_PALCOL09,
    IDS_INI_PALCOL10,
    IDS_INI_PALCOL11,
    IDS_INI_PALCOL12,
    IDS_INI_PALCOL13,
    IDS_INI_PALCOL14,
    IDS_INI_PALCOL15,
    IDS_INI_PAUSE_CPU,
    IDS_INI_PROGRAM_DIRECTORY,
    IDS_INI_REGSDUMP_INTERVAL,
    IDS_INI_ROM_DIRECTORY,
    IDS_INI_SAVES_DEFAULT,
    IDS_INI_SAVES_DIRECTORY,
    IDS_INI_SCRIPTS_DIRECTORY,
    IDS_INI_SCRRENDER_TYPE,
    IDS_INI_SECTIONNAME_DIRECTORIES,
    IDS_INI_SECTIONNAME_DRIVES,
    IDS_INI_SECTIONNAME_JOYSTICK,
    IDS_INI_SECTIONNAME_MAIN,
    IDS_INI_SECTIONNAME_OPTIONS,
    IDS_INI_SECTIONNAME_PALETTES,
    IDS_INI_SECTIONNAME_PARAMETERS,
    IDS_INI_SECTIONNAME_ROMMODULES,
    IDS_INI_SHOW_PERFORMANCE_STRING,
    IDS_INI_SMOOTHING,
    IDS_INI_SOUNDCHIPFREQ,
    IDS_INI_SOUNDCHIPMODEL,
    IDS_INI_SOUND_SAMPLE_RATE,
    IDS_INI_SOUNDVOLUME,
    IDS_INI_SPEAKER_DCOFFSET,
    IDS_INI_SPEAKER_FILTER,
    IDS_INI_SPEAKER,
    IDS_INI_SSHOT_DIRECTORY,
    IDS_INI_SSHOT_NUM,
    IDS_INI_TAPES_DIRECTORY,
    IDS_INI_TOOLS_DIRECTORY,
    IDS_INI_VKBD_TYPE,
    IDS_JOYEDIT_PRESSKEY,
    IDS_JOYEDIT_UNKNOWN,
    IDS_LOADTAPE_ERRORVALUE,
    IDS_LOADTAPE_TYPE_BIN,
    IDS_LOADTAPE_TYPE_MSF,
    IDS_LOADTAPE_TYPE_UNKNOWN,
    IDS_LOADTAPE_TYPE_WAVE,
    IDS_MEMDUMP_BYTE,
    IDS_MEMDUMP_WND,
    IDS_MEMDUMP_WORD,
    IDS_MEMORY_177130IN,
    IDS_MEMORY_177130OUT,
    IDS_MEMORY_177132IN,
    IDS_MEMORY_177132OUT,
    IDS_MEMORY_177660,
    IDS_MEMORY_177662IN,
    IDS_MEMORY_177662OUT,
    IDS_MEMORY_177664,
    IDS_MEMORY_177700,
    IDS_MEMORY_177702,
    IDS_MEMORY_177704,
    IDS_MEMORY_177706,
    IDS_MEMORY_177710,
    IDS_MEMORY_177712,
    IDS_MEMORY_177714IN,
    IDS_MEMORY_177714OUT,
    IDS_MEMORY_177716IN,
    IDS_MEMORY_177716OUT_MEM,
    IDS_MEMORY_177716OUT_TAP,
    IDS_MEMORY_PC,
    IDS_MEMORY_PSW,
    IDS_MEMORY_R0,
    IDS_MEMORY_R1,
    IDS_MEMORY_R2,
    IDS_MEMORY_R3,
    IDS_MEMORY_R4,
    IDS_MEMORY_R5,
    IDS_MEMORY_SP,
    IDS_MENU_DEBUG_BREAK,
    IDS_MENU_DEBUG_CONTINUE,
    IDS_MSGBOX_CAPTION,
    IDS_MSGBOX_ERRMSG,
    IDS_OSCILLATOR_WND,
    IDS_OUTPUT_WND,
    IDS_PALETTE_BWPRESET0,
    IDS_PALETTE_BWPRESET1,
    IDS_PALETTE_BWPRESET2,
    IDS_PALETTE_BWPRESET3,
    IDS_PALETTE_MORE,
    IDS_PRINT_PAGES,
    IDS_PRINT_TITLE,
    IDS_REGDUMPCPU_DEC,
    IDS_REGDUMPCPU_HEX,
    IDS_REGDUMP_CPU_WND,
    IDS_REGDUMP_FDD_WND,
    IDS_RENDER_D2D,
    IDS_RENDER_D3D,
    IDS_RENDER_DIB,
    IDS_RENDER_GDI,
    IDS_RENDER_OGL,
    IDS_SCREENVIEW_WND,
    IDS_SETT_KBDVIEW0,
    IDS_SETT_KBDVIEW1,
    IDS_SETT_TABTITLE0,
    IDS_SETT_TABTITLE1,
    IDS_SETT_TABTITLE2,
    IDS_SNDCHPFRQ_1500000,
    IDS_SNDCHPFRQ_1714286,
    IDS_SNDCHPFRQ_1774400,
    IDS_SNDCHPFRQ_1789772,
    IDS_STATUS_PANE1,
    IDS_STATUS_PANE2,
    IDS_TAPECTRL_WND,
    IDS_TAPEMANAGER_BROWSESELECT,
    IDS_TAPEMNGR_ADDR,
    IDS_TAPEMNGR_BADCRC_SAVE,
    IDS_TAPEMNGR_CAPTURE_ERROR,
    IDS_TAPEMNGR_CRC,
    IDS_TAPEMNGR_CRC_ERROR,
    IDS_TAPEMNGR_CRC_FAIL,
    IDS_TAPEMNGR_CRC_OK,
    IDS_TAPEMNGR_END_OF_FILE,
    IDS_TAPEMNGR_INPUT_DEVS,
    IDS_TAPEMNGR_LENGTH,
    IDS_TAPEMNGR_NAME_FORMAT,
    IDS_TAPEMNGR_NAME,
    IDS_TAPEMNGR_NO_INPUTDEVS,
    IDS_TAPEMNGR_PATH,
    IDS_TAPEMNGR_SAVE_AS,
    IDS_TAPEMNGR_SAVE_ERROR,
    IDS_TAPEMNGR_SAVE_MESSAGE,
    IDS_TAPEMNGR_SAVE_SUCCEED,
    IDS_TAPEMNGR_TIME,
    IDS_TAPEMNGR_TYPE,
    IDS_TAPEMNGR_UNKNOWN,
    IDS_TAPEMNGR_WAVELENGTH,
    IDS_TOOLBAR_CUSTOMIZE,
    IDS_TOOLBAR_DEBUG,
    IDS_TOOLBAR_SOUND,
    IDS_TOOLBAR_STANDARD,
    IDS_TOOLBAR_VCAPT,
    IDS_VKBD_WND,
        IDS_INI_SYSBREAK_MASK,
        IDS_INI_USE_NATIVE_DIALOGS,
        IDS_INI_LANGUAGE,
};

class CResourceStrings {
    QMap <int, QString>m_Resources;

public:
    CResourceStrings();

    void InitResourceStrings();

    char * operator[](int i) { return m_Resources.value(i, "").toLocal8Bit().data(); }
    QString GetString(int i) { return m_Resources.value(i, ""); }
    const char * GetStdString(int i) { return m_Resources.value(i, "").toLocal8Bit().data(); }

};

extern CResourceStrings g_ResourceStrings;

inline char * MAKEINTRESOURCE(int id)
{
    return g_ResourceStrings[id];
}

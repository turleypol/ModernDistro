////////////////////////////////////////////////////////////////////////////
// server.inc - Constants used on the server side
// Thanks to Turley for this include.
// Some references to packages may not be valid for the Distro.
// Some referenced CProps may not be valid for the Distro.
////////////////////////////////////////////////////////////////////////////

// Workarounds
// ignore constants for .setfacing (frozen or not)
const FACING_NORMAL := 0x0;
const FACING_FORCE := 0x1;
// workarounds end

// age limits of accounts / characters {{{
// Where is the limit to the ancient character / account?
const ANCIENT_TIME := 3600 * 24 * 360; // (12 months)
// Where is the boundary between 'active' and 'inactive' character / account?
const ACTIVE_TIME := 3600 * 24 * 60; // (2 months)
// How long does an account count as new?
const ACCT_NEW_TIME := 3600 * 24 * 31; // 1 month
// When is a name allowed automatically?
const AUTO_CHECK_TIME := 3600 * 24 * 14; // 14 days
//}}}
// Properties to Accounts {{{
// e-mail address for communication (string)
const PLAYEREMAIL := "eMail";

// Charanlegung
// create next char with this cmdlevel
const ACCT_NEWCHAR_CMDLVL := "CharKennCMDLevel";
// Chars in the account are blocked (old dock)
const ACCT_NEWCHAR_BLOCK := "NoCharKenn";

// times (ReadGameClock ())
// when was Account last used?
const ACCT_LAST_USE := "lastused";
// When was the account created?
const ACCT_CREATED := "created";

// Counter for failed login attempts
const LOG_LOGINFAIL := "FailedLogins";

// should tips be displayed?
const ACCT_TIP_DISABLED := "TipNo";

// which tip was last displayed
const ACCT_TIP_LAST := "TipLast";

// Web password (password for your web interface)
const ACCT_WEBPASS := "WebPass";
// }}}

// Properties on players {{{
// which motd was last created for the player
const PROP_MOTD := "MsgOfDayID";
// has the name been approved?
const PROP_NAME_UNCHECKED := "name_unchecked";

// special rights (switchable via .iddqd) (Boolean)
const I_AM_GOD := "IamGod";
// Show Defiled Stafflers in Online Lists? (Boolean)
const PROP_HIDE_STAFF_ONLINE := "#Unconcealed";
// List of last visited positions
const PROP_LOC_LIST := "goback";

// do not display weapon rule hints
const PROP_NO_WEAPON_RULE_NOTICE := "Weapons RulesMute";

// experience points
const EXPERIENCE := "Experience";
const EXPERIENCE_RANK := "ExperienceRank";
const EXPERIENCE_NO_DISPLAY := "NoExpRank";

// hide tooltip of the character (guild, title, cmdlevel) for others
const HIDE_CHAR_TOOLTIP := "notooltip";

// Do not use any AoS tooltips in the sales / purchasing menu (Boolean)
const NO_AOS_TOOLTIP := "No_AoS_Tooltip";

// Mayor will not highlight in .online (Boolean)
const HIDE_BM_ONLINE := "Hide_BM_Online";

// Player is not a newbie, but is in the region (Boolean)
const PLACE_INNEWBIEAREA := "InNewbieArea";
// player is on the Goetterinsel (Boolean)
const PLACE_ATGODPALACE := "AtGodPalace";
// Player is in a fight (Array)
const ARENABATTLE := "ArenaBattle";
// was the player criminal before the fight?
const PROP_ARENACRIME := "#ArenaCrimeBefore";
// was donated to the gods (access Getterinsel)?
const PROP_GODDONATION := "donation_ok";

// player is new on Pergon, on Jhe'lom (Boolean)
const TYPNEWBIE := "jhelomnewbie";
// player may use the escape ferry
const TYPFLIGHT := "permissive";
// Player is PK
const TYPKILLER := "permared";

// player is a librarian (Boolean)
const TYPIBILIBRARY := "Librarian";
// Player is a QuestCharacter (Boolean)
const TYPQUESTCHAR := "QuestChar";
// Player is a treasurer / Kaemmerer etc. (Boolean)
const TYPKASSENWART := "treasurer";

// Player does not want PvP
const PROP_WANTS_PVP := "pvpwanted";
// Player prefers RP
const PROP_WANTS_RP := "rpwanted";
// Character does not want to be attacked
const PROP_NOATTACK := "Peacemaker";
// Characters want to use magic light
const PROP_MAGILITE := "magilite";
// Character wants automatic warmode
const PROP_AUTOWAR := "autowar";
// Player wants job in the online survey
const PROP_SHOW_PROF := "showprof_online";

// sound effects on .msg, .letterbox and .page
const PROP_NOTIFY_MESSAGE := "notify_msg";
const PROP_NOTIFY_LETTER := "notify_letter";
const PROP_NOTIFY_PAGE := "notify_page";

// hunger status
const PROP_HUNGER := "hungrylevel";

// Who was last on the victim? (Array)
const LOG_LASTHIT := "LastHit";
// Who last hurt the victim? (Array)
const LOG_LASTDAMAGE := "LastDamage";
// Who did how much damage? (Dictionary)
const LOG_DAMAGER := "#TotalDamager";
// death count
const LOG_DEATHCOUNT := "DeathCounter";
const LOG_DEATHCOUNTM := "DeathCounterMonth";

// penalty system
// jail time to be served / pillory / hell time
const PROP_PUNISH_JAILTIME := "jailtime";
// Type of punishment (jail, quarry, pillory, death)
const PROP_PUNISH_TYPE := "PunishType";
// Position before denouncing / quarry for dismissal
const PROP_PUNISH_OLDPOS := "PunishPositionBefore";
// Number of stones to be knocked in the quarry
const PROP_PUNISH_STONES := "PunishStones";

// time until skill use is possible again (Prop> ReadGameClock ())
const PROP_NEXTSKILLUSE := "#UsesSkill";

// Followmode active
const PROP_FOLLOWMODE := "#follows";
// .controlnpc
const PROP_CONTROLNPC := "remotecontrol";
// uses magic compass?
const PROP_COMPASS := "#magiccompass";
// }}}

// Properties on NPCs {{{
// it was summoned
// (values ??see pkg / magic / newmagic / spells / magicpergon.inc)
const PROP_SUMMONED := "summoned";

// Animal remains forever loyal and can not be transferred
// from value 99 it does not starve anymore (scripts / include / animal.inc)
// FIXME: several levels, further bonuses
const PROP_COMPANION := "companion";
// }}}

// Properties on players and items {{{
// Data warehouse for secondcharge support
const SELF_SUPPORT1 := "SupportCheck1";
const SELF_SUPPORT2 := "SupportCheck2";
// }}}

// Properties on Items {{{
// Cprop struct with material / manufacturer for tooltip
const TOOLINFO := "ToolInfo";

// which message entry belongs to the motd item?
const PROP_MOTD_ID := "MsgID";

// evidence
// Who Poisoned It (Name / Serial)
const EV_POISONER := "p";

// who sold it (name / serial)
const EV_VENDOR := "v";

// Who cut it (name / serial)
const EV_CHOPPER := "c";
// }}}

// global property constants {{{
// Pergon or BauServer?
const Pergon := "Pergon";
const BAUSERVER := "BauServer";
// display name (eg for web interface)
const GPROP_SERVERNAME := "ServerName";

// display name (eg for web interface)
const GPROP_DEBUG_ACCOUNT := "DebugAccount";

// deactivate Skillcheck for ferry / escape gate?
const PROP_DISABLE_SKILLCHECK := "newbiegatenoskillcheck";

// active shutdown?
const PROP_SHUTDOWN_RUNNING := "#ShutDown";

// weapons rules active (value 111)
const PROP_WEAPON_RULES_ACTIVE := "Weapon Rules Enabled";

// Check if people are fighting passively (for IsFighting)
const PROP_DEFENSE_IS_FIGHT := "SelfDefenseIsFight";

// list of pages
const GM_PAGE_LIST := "gmpages";
// Flag if Pages are currently being edited
const GM_PAGE_ACTIVITY := "#gmpages";

// Account and Char Management
// Count the server starts
// (nice for statistics, but also as a slow logical clock)
const SERVER_STARTUPS := "StartUps";
// Chars / accounts for statistics already used on the day
const STAT_DAILY_ACCS := "DailyAccs";
const STAT_DAILY_CHARS := "DailyChars";
// List of new accounts for account / name team
// struct {accounts: array of account names, lastupdate: int}
// Const NEW_ACCOUNTS := "#NewAccounts";

// activate unlimited character creation (for test server)
const CREATE_ALLOW_FREE := "CharCreateFree";
// allows you to create two characters yourself (new concept)
const CREATE_ALLOW_SELF := "CharCreateSelf";
// }}}

// command level {{{
// Changes to CmdLevel involve (at least): cmds.cfg,
// setcmdlevel.src, onlinesearch.inc
const CMDLEVEL_PLAYER := 0;
const CMDLEVEL_COUNSELOR := 1;
const CMDLEVEL_QUESTCHAR := 2;
const CMDLEVEL_SEER := 3;
const CMDLEVEL_GM := 4;
const CMDLEVEL_HIGHGM := 5;
const CMDLEVEL_GL := 6;
const CMDLEVEL_SCRIPTER := 7;
const CMDLEVEL_DEVELOPER := 8;
// }}}

// NPC alignment {{{
const ALIGNMENT_GOOD := 2;
const ALIGNMENT_NEUTRAL := 0;
const ALIGNMENT_EVIL := 1;
// }}}

// Housing {{{
// common constants for static and multihouses
const PROP_HS_C_ACCOUNT := "owneracct";
const PROP_HS_C_OWNER := "ownerserial";
const PROP_HS_C_OWNERNAME := "lastownername";
const PROP_HS_C_FRIENDS := "friendlist";
// moored
const PROP_HS_C_FIXED := "lockeddown";
const PROP_HS_C_FIX_NUM := "RemainingLockdowns";
// SC = secure container
const PROP_HS_C_SC_NUM := "RemainingSecures";
const PROP_HS_C_SC_BOX := "boxserial";
const PROP_HS_C_SC_HOUSE := "houseserial";
// Props for rental ad
const PROP_HS_C_RENT_TOPAY := "rent_topay_count";
const PROP_HS_C_RENT_TOOLTIP := "rent_tooltip";

// Props for static houses
const PROP_HS_S_CTRL_PID := "#PID";
const PROP_HS_S_DIMENSIONS := "houseinfo";

// Props for multihouses
// reference to house to multicomponent
const PROP_HS_M_HOUSE := "house_serial";

// Globalprop, if set, container inventory will be run
const GPROP_HS_C_CONTINV := "container_inv";
// }}}

// music {{{
const PROP_MUSIC_BARDING := "#barding";
const PROP_MUSIC_DANCE := "DanceToBard";
const PROP_MUSIC_LISTEN := "#listentobarding";
const PROP_MUSIC_STEALTH := "#listenstealth";
const PROP_MUSIC_SCR_SONGNAME := "musicname";
const PROP_MUSIC_SCR_NOTES := "noteslist";
const PROP_MUSIC_SCR_IS_COPY := "copied";
// }}}

const REALM_DEATH := "deaths_domain";

const GLOBAL_POL_CFG_STRUCT := "#PolCfgStruct";
const GLOBAL_SSOPT_CFG_STRUCT := "#ServSpecOptCfgStruct";

function ReadPolCFG()
  var lines := ReadFile( "pol.cfg" );
  if ( lines.errortext )
    Broadcast( "Server.inc --> Unable to read pol.txt. Error is " + lines.errortext,
               1, 33 );
    return;
  endif
  var pol := struct;
  ParseCfg( lines, pol );
  SetGlobalProperty( GLOBAL_POL_CFG_STRUCT, pol );
  return pol;
endfunction

function ReadSSOptCFG()
  var lines := ReadFile( "config/servspecopt.cfg" );
  if ( lines.errortext )
    Broadcast( "Server.inc --> Unable to read pol.txt. Error is " + lines.errortext,
               1, 33 );
    return;
  endif
  var ssopt := struct;
  ParseCfg( lines, ssopt );
  SetGlobalProperty( GLOBAL_SSOPT_CFG_STRUCT, ssopt );
endfunction

function ParseCfg( lines, byref cfgstruct )
  foreach line in lines
    line := Trim( line );
    if ( line[1] in { "#", "/" } )
      continue;
    endif
    var pos := Find( line, "=", 1 );
    if ( !Pos )
      pos := Find( line, cchr( 32 ), 1 ); // blank
      if ( !Pos )
        pos := Find( line, cchr( 9 ), 1 ); // tab
        if ( !Pos )
          continue;
        endif
      endif
    endif
    var value := Trim( line[pos + 1, len( line ) - pos] );
    var tvalue := Lower( CStr( value ) ); // Numeric check
    if ( ( tvalue == Lower( CStr( CInt( tvalue ) ) ) ) ||
         ( tvalue == Lower( CStr( Hex( CInt( tvalue ) ) ) ) ) )
      value := CInt( value );
    endif
    cfgstruct.insert( Trim( line[1, pos - 1] ), value );
  endforeach
endfunction
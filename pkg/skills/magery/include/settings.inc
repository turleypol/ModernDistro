//$Id: settings.inc 373 2006-06-17 18:27:33Z austinheilman $

use uo;
use os;
use cfgfile;

/*
 * MS_GetSettingsCfgFile(engine_name)
 *
 * Purpose
 * Reads in :magery:config/settings.cfg
 *
 * Parameters
 *
 * Return value
 * A config file reference.
 *
 */
function MS_GetSettingsCfgFile()
	var cfg := ReadConfigFile(":magery:settings");

	if ( cfg.errortext )
		SysLog("Error::MS_GetSettingsCfgFile() - Unable to open [:spells:settings.cfg] ->"+cfg.errortext);
	endif

	return cfg;
endfunction

/*
 * MS_GetSettingsCfgElem(elem_name, cfg_file)
 *
 * Purpose
 * Retrieves an elem from a config file. 
 *
 * Parameters
 * elem_name:	A string matching the elem name to be retrieved.
 * cfg_file:	Optional parameter - reference to a config already read in by MS_GetSettingsCfgFile()
 *
 * Return value
 * A config file elem reference.
 *
 */
function MS_GetSettingsCfgElem(elem_name, byref cfg_file:=0)
	if ( !cfg_file )
		cfg_file := MS_GetSettingsCfgFile();
	endif
	
	var elem := cfg_file[elem_name];

	if ( elem.errortext )
		SysLog("Error::MS_GetSettingsCfgElem() - Unable to find elem ["+elem_name+"] ->"+elem.errortext);
	endif

	return elem;
endfunction


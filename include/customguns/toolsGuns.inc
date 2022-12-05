

enum struct CustomWeapon
{
    char gunClassNames[32];
	char gunNames[32];
	char gunModels[PLATFORM_MAX_PATH];
	int gunSkin;
	int gunType;
	int gunDmg;
	int gunAnimPrefix[32];
	int gunSpread;
	int gunRof;
	int gunDelay;
	int gunDelaySequence;
	int gunDelayFireCooldown;
	int gunViewKickScale;
	int gunViewKickAngle;
	int gunViewKickTime;
	int gunModelIndexes;
	int gunAdminLevel;
	int gunPersistent;
	int gunGive;
	int gunGiveMasterWeapon[32]
	int gunBind[32]
	int gunFireLoopFix;
	int gunFireLoopLength;
	int gunFireVisible;
	int gunReloadsSingly;
	int gunFireType;
	int gunCustomKeepAmmo;
	int gunScopeFov;
	char gunScopeOverlay[PLATFORM_MAX_PATH];
	char gunScopeSoundOn[PLATFORM_MAX_PATH];
	char gunScopeSoundOff[PLATFORM_MAX_PATH];
	ArrayList gunDownloads;
    void ResetVars(/*void*/)
	{
        this.gunClassNames = "";
	    this.gunNames = "";
	    this.gunModels = "";
	    this.gunSkin = -1;
	    this.gunType = -1;
	    this.gunDmg = -1;
	    this.gunAnimPrefix = "";
	    this.gunSpread = -1;
	    this.gunRof = -1;
	    this.gunDelay = -1;
	    this.gunDelaySequence = -1;
	    this.gunDelayFireCooldown = -1;
	    this.gunViewKickScale = -1;
	    this.gunViewKickAngle = -1;
	    this.gunViewKickTime = -1;
	    this.gunModelIndexes = -1;
	    this.gunAdminLevel = -1;
	    this.gunPersistent -1;
	    this.gunGive -1;
	    this.gunGiveMasterWeapon = "";
	    this.gunBind = "";
	    this.gunFireLoopFix -1;
	    this.gunFireLoopLength -1;
	    this.gunFireVisible -1;
	    this.gunReloadsSingly -1;
	    this.gunFireType -1;
	    this.gunCustomKeepAmmo -1;
	    this.gunScopeFov -1;
	    this.gunScopeOverlay = "";
	    this.gunScopeSoundOn = "";
	    this.gunScopeSoundOff = "";
		delete this.gunDownloads;
    }
}


//int cantFiles = getCountFiles();
/*int getCountFiles()
{
    int files = 0;
    DirectoryListing dir = OpenDirectory("scripts/", true);
	if (dir) {
		char buffer[PLATFORM_MAX_PATH];
		char filename[PLATFORM_MAX_PATH];
		FileType type;
		while (dir.GetNext(filename, sizeof(filename), type)) {
			if (type == FileType_File) {
				if (StrContains(filename, "weapon_", false) == 0 && StrEqual(filename[strlen(filename) - 3], "txt", false)) {
					files++;
                }
            }
        }
    }
    return files;
}
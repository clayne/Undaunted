#include <skse64_common/Utilities.h>
#include "skse64/PapyrusForm.h"
#include "skse64/PapyrusNativeFunctions.h"

#include "skse64/GameAPI.h"
#include "skse64/GameFormComponents.h"
#include "skse64/GameForms.h"
#include "skse64/GameRTTI.h"
#include "skse64/GameObjects.h"
#include "skse64/GameExtraData.h"
#include "skse64/PluginAPI.h"
#include "skse64/GameData.h"
#include "skse64/GameReferences.h"
#include "skse64/PluginAPI.h"

#include "skse64/PapyrusDefaultObjectManager.h"
#include <skse64\PapyrusCell.h>
#include <stdlib.h>
#include <skse64\PapyrusGame.h>
#include <skse64\PapyrusObjectReference.h>
#include <skse64\PapyrusObjects.h>
#include <skse64\PapyrusQuest.h>

#include "IntList.h"
#include "ListLibary.h"
#include "UnStringList.h"

namespace Undaunted
{
	//Regions/Worldspaces
	void AddBadRegionToConfig(UInt32 region);
	IntList GetBadRegions();
	void GetWorldWhitelist(UnString region);
	UnStringList AddWorldToWhitelist(UnString region);

	//Groups
	int AddGroup();
	void AddMembertoGroup(int id, GroupMember member);
	GroupList GetRandomGroup();
}

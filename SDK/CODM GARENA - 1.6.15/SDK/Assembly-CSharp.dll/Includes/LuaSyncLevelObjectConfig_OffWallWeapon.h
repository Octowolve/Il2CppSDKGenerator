#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaSyncLevelObjectConfigOffWallWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaSyncLevelObjectConfig_OffWallWeapon"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Localizations() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllExportList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExportClassName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetAllExportList() {
		return ((T (*)(LuaSyncLevelObjectConfigOffWallWeapon*))(Il2CppBase() + 0x43540E8))(this);
	}
	template <typename T = Il2CppString*> T GetExportClassName() {
		return ((T (*)(LuaSyncLevelObjectConfigOffWallWeapon*))(Il2CppBase() + 0x43541B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAllExportList() {
		return ((T (*)(LuaSyncLevelObjectConfigOffWallWeapon*))(Il2CppBase() + 0x435426C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetExportClassName() {
		return ((T (*)(LuaSyncLevelObjectConfigOffWallWeapon*))(Il2CppBase() + 0x4354270))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaSyncLevelObjectConfigPerkMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaSyncLevelObjectConfig_PerkMachine"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& PerkIds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PerkConfigDetails() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllExportList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParamList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExportClassName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetAllExportList() {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*))(Il2CppBase() + 0x4354314))(this);
	}
	template <typename T = void> T SetParamList() {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*))(Il2CppBase() + 0x43543E0))(this);
	}
	template <typename T = Il2CppString*> T GetExportClassName() {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*))(Il2CppBase() + 0x4354524))(this);
	}
	template <typename T = uintptr_t> T FindItem(Il2CppString* PrimaryKey) {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*, Il2CppString*))(Il2CppBase() + 0x43545DC))(this, PrimaryKey);
	}
	template <typename T = void> T xLuaBaseProxy_SetAllExportList() {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*))(Il2CppBase() + 0x43547AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetParamList() {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*))(Il2CppBase() + 0x43547B0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetExportClassName() {
		return ((T (*)(LuaSyncLevelObjectConfigPerkMachine*))(Il2CppBase() + 0x43547B4))(this);
	}

};

}

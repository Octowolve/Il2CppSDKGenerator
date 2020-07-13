#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideRepairWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_RepairWindow"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowEffect() {
		return ((T (*)(PVENewGuideRepairWindow*))(Il2CppBase() + 0x31740AC))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(PVENewGuideRepairWindow*))(Il2CppBase() + 0x31745AC))(this);
	}
	template <typename T = uintptr_t> T GetPointInterface() {
		return ((T (*)(PVENewGuideRepairWindow*))(Il2CppBase() + 0x317444C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(PVENewGuideRepairWindow*))(Il2CppBase() + 0x3174858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(PVENewGuideRepairWindow*))(Il2CppBase() + 0x317485C))(this);
	}

};

}

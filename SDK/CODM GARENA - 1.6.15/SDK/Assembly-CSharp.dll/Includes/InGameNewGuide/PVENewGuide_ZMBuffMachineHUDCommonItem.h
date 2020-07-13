#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideZMBuffMachineHUDCommonItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_ZMBuffMachineHUDCommonItem"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_NotifyAndSelfCheck() {
		return ((T (*)(PVENewGuideZMBuffMachineHUDCommonItem*))(Il2CppBase() + 0x3175814))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideZMBuffMachineHUDCommonItem*))(Il2CppBase() + 0x317581C))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(PVENewGuideZMBuffMachineHUDCommonItem*, uintptr_t))(Il2CppBase() + 0x3175998))(this, ID);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideZMBuffMachineHUDCommonItem*))(Il2CppBase() + 0x3175B38))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(PVENewGuideZMBuffMachineHUDCommonItem*, uintptr_t))(Il2CppBase() + 0x3175B3C))(this, P0);
	}

};

}

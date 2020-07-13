#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalMapControllerBRTDM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalMapController_BRTDM"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGameStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalMapControllerBRTDM*))(Il2CppBase() + 0x3F42630))(this);
	}
	template <typename T = void> T NotifyGameStart() {
		return ((T (*)(TacticalMapControllerBRTDM*))(Il2CppBase() + 0x3F426D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalMapControllerBRTDM*))(Il2CppBase() + 0x3F42884))(this);
	}

};

}

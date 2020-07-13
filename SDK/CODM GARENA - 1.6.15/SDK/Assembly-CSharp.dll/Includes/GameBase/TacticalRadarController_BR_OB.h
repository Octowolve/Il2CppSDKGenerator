#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarControllerBROB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarController_BR_OB"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalRadarControllerBROB*))(Il2CppBase() + 0x279A984))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalRadarControllerBROB*))(Il2CppBase() + 0x279AA28))(this);
	}

};

}

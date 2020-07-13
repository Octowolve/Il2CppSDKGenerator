#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideWaittingForCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_WaittingForCoin"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_NeedReport() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x31752B4))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x31752BC))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x317535C))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x3175614))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x3175808))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x317580C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(PVENewGuideWaittingForCoin*))(Il2CppBase() + 0x3175810))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DroppedPickUpInfoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DroppedPickUpInfoController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DroppedPickUpInfoController*))(Il2CppBase() + 0x41790F0))(this);
	}
	template <typename T = void> T SetUIActive(bool isActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(DroppedPickUpInfoController*, bool, bool, bool))(Il2CppBase() + 0x4179194))(this, isActive, recursively, RemoveDelegate);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DroppedPickUpInfoController*))(Il2CppBase() + 0x4179454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(DroppedPickUpInfoController*, bool, bool, bool))(Il2CppBase() + 0x417945C))(this, P0, P1, P2);
	}

};

}

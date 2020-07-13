#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelAimController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelAimController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyHideCancelAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CancelAimController*))(Il2CppBase() + 0x531B960))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CancelAimController*))(Il2CppBase() + 0x531BA04))(this);
	}
	template <typename T = void> T NotifyHideCancelAim(uintptr_t msg) {
		return ((T (*)(CancelAimController*, uintptr_t))(Il2CppBase() + 0x531BB94))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CancelAimController*))(Il2CppBase() + 0x531BD40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CancelAimController*))(Il2CppBase() + 0x531BD48))(this);
	}

};

}

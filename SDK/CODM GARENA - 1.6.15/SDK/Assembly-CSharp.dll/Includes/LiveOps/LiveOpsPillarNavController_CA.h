#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPillarNavControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPillarNavController_CA"));
	}

	template <typename T = uintptr_t> T& m_PillarCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351BCB0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351BD58))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LiveOpsPillarNavControllerCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x351BDF8))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LiveOpsPillarNavControllerCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x351BFE4))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351C0C8))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351C180))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351C220))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351C228))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351C230))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LiveOpsPillarNavControllerCA*))(Il2CppBase() + 0x351C238))(this);
	}

};

}

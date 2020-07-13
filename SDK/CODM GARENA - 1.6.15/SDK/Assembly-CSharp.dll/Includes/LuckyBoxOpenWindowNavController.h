#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyBoxOpenWindowNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyBoxOpenWindowNavController"));
	}

	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LuckyBoxOpenWindowNavController*))(Il2CppBase() + 0x4357320))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LuckyBoxOpenWindowNavController*))(Il2CppBase() + 0x43573D8))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LuckyBoxOpenWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4357478))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LuckyBoxOpenWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4357784))(this, data, nextData);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LuckyBoxOpenWindowNavController*))(Il2CppBase() + 0x4357C08))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LuckyBoxOpenWindowNavController*))(Il2CppBase() + 0x4357CC4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LuckyBoxOpenWindowNavController*))(Il2CppBase() + 0x4357CCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LuckyBoxOpenWindowNavController*))(Il2CppBase() + 0x4357CD4))(this);
	}

};

}

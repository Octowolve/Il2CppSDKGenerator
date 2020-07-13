#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideUseCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_UseCoin"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_NeedReport() {
		return ((T (*)(PVENewGuideUseCoin*))(Il2CppBase() + 0x3174B44))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(PVENewGuideUseCoin*))(Il2CppBase() + 0x3174B4C))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(PVENewGuideUseCoin*, uintptr_t))(Il2CppBase() + 0x3174DF0))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideUseCoin*))(Il2CppBase() + 0x3174EA0))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(PVENewGuideUseCoin*, uintptr_t))(Il2CppBase() + 0x317501C))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(PVENewGuideUseCoin*))(Il2CppBase() + 0x31751BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(PVENewGuideUseCoin*, uintptr_t))(Il2CppBase() + 0x31751C0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideUseCoin*))(Il2CppBase() + 0x31751C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(PVENewGuideUseCoin*, uintptr_t))(Il2CppBase() + 0x31751C8))(this, P0);
	}

};

}

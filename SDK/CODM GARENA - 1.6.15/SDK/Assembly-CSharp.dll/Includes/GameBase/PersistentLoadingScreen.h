#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PersistentLoadingScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PersistentLoadingScreen"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& script() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& curLoadMapID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiateLoadingScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T ShowLoading(int32_t mapID) {
		return ((T (*)(PersistentLoadingScreen*, int32_t))(Il2CppBase() + 0x16DAC08))(this, mapID);
	}
	template <typename T = void> T HideLoading() {
		return ((T (*)(PersistentLoadingScreen*))(Il2CppBase() + 0x16DB5FC))(this);
	}
	template <typename T = uintptr_t> T InstantiateLoadingScreen() {
		return ((T (*)(PersistentLoadingScreen*))(Il2CppBase() + 0x16DB0F8))(this);
	}

};

}

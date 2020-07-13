#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameLogoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameLogoController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppVector3>*> static T& gameLogoPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_GameLogoViewInstance() {
		return ((T (*)(GameLogoController*))(Il2CppBase() + 0x2548020))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GameLogoController*))(Il2CppBase() + 0x2548028))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameLogoController*))(Il2CppBase() + 0x25480FC))(this);
	}
	template <typename T = void> T SetDepth(int32_t depth) {
		return ((T (*)(GameLogoController*, int32_t))(Il2CppBase() + 0x2548238))(this, depth);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GameLogoController*))(Il2CppBase() + 0x2548614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameLogoController*))(Il2CppBase() + 0x254861C))(this);
	}

};

}

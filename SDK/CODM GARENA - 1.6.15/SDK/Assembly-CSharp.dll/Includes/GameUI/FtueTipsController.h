#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FtueTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FtueTipsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FtueTipsController*))(Il2CppBase() + 0x470FA24))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FtueTipsController*))(Il2CppBase() + 0x470FAC8))(this);
	}
	template <typename T = void> T Show(bool show, Il2CppString* content, float duration) {
		return ((T (*)(FtueTipsController*, bool, Il2CppString*, float))(Il2CppBase() + 0x470FBC8))(this, show, content, duration);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FtueTipsController*))(Il2CppBase() + 0x470FEF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FtueTipsController*))(Il2CppBase() + 0x470FEFC))(this);
	}

};

}

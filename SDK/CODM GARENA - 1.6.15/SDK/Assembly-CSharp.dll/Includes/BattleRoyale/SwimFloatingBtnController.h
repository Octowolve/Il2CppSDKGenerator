#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimFloatingBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimFloatingBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SwimFloatingBtnController*))(Il2CppBase() + 0x35A62C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SwimFloatingBtnController*))(Il2CppBase() + 0x35A6368))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SwimFloatingBtnController*))(Il2CppBase() + 0x35A6474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SwimFloatingBtnController*))(Il2CppBase() + 0x35A647C))(this);
	}

};

}

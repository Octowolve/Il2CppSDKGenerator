#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceInteractionBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceInteractionBtnController"));
	}

	template <typename T = uintptr_t> T& m_InteractionBtn() {
		return *(T*)((uintptr_t)this + 0x3C);
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

	template <typename T = void> T Init() {
		return ((T (*)(DanceInteractionBtnController*))(Il2CppBase() + 0x3D47078))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DanceInteractionBtnController*))(Il2CppBase() + 0x3D47184))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DanceInteractionBtnController*))(Il2CppBase() + 0x3D47228))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DanceInteractionBtnController*))(Il2CppBase() + 0x3D47230))(this);
	}

};

}

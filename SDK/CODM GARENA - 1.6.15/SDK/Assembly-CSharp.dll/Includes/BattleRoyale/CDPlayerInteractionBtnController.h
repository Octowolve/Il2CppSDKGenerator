#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class CDPlayerInteractionBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "CDPlayerInteractionBtnController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CDPlayerInteractionBtnController*))(Il2CppBase() + 0x3D3F7EC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CDPlayerInteractionBtnController*))(Il2CppBase() + 0x3D3F8F8))(this);
	}
	template <typename T = void> T SetPlayStatus(bool bIsPlaying) {
		return ((T (*)(CDPlayerInteractionBtnController*, bool))(Il2CppBase() + 0x3D3F99C))(this, bIsPlaying);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CDPlayerInteractionBtnController*))(Il2CppBase() + 0x3D3FAB0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CDPlayerInteractionBtnController*))(Il2CppBase() + 0x3D3FAB8))(this);
	}

};

}

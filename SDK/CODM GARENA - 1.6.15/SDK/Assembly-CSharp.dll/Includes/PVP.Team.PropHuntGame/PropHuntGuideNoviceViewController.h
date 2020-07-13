#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGuideNoviceViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGuideNoviceViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
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
		return ((T (*)(PropHuntGuideNoviceViewController*))(Il2CppBase() + 0x34A8660))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntGuideNoviceViewController*))(Il2CppBase() + 0x34A8704))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(PropHuntGuideNoviceViewController*))(Il2CppBase() + 0x34A88E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntGuideNoviceViewController*))(Il2CppBase() + 0x34A8A04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntGuideNoviceViewController*))(Il2CppBase() + 0x34A8A0C))(this);
	}

};

}

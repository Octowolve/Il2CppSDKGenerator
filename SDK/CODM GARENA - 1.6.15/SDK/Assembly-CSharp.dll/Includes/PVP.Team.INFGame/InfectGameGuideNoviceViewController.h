#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameGuideNoviceViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameGuideNoviceViewController"));
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
		return ((T (*)(InfectGameGuideNoviceViewController*))(Il2CppBase() + 0x4032994))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InfectGameGuideNoviceViewController*))(Il2CppBase() + 0x4032A38))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(InfectGameGuideNoviceViewController*))(Il2CppBase() + 0x4032C18))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InfectGameGuideNoviceViewController*))(Il2CppBase() + 0x4032D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InfectGameGuideNoviceViewController*))(Il2CppBase() + 0x4032D40))(this);
	}

};

}

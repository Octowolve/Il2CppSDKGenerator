#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntScorePanelController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CampDataRed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CampDataBlue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_RankListRed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_RankListBlue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_CampScoreRed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_CampScoreBlue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sorter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B3244))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B3350))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B33F4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B35FC))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B3804))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B38D0))(this);
	}
	template <typename T = void> T LogDebug(uintptr_t gameInfo) {
		return ((T (*)(PropHuntScorePanelController*, uintptr_t))(Il2CppBase() + 0x34B449C))(this, gameInfo);
	}
	template <typename T = int32_t> static T Sorter(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x34B5380))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B55E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B55E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B55F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntScorePanelController*))(Il2CppBase() + 0x34B55F8))(this);
	}

};

}

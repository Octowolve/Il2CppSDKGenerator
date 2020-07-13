#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPScorePanelController"));
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
	template <typename T = uint32_t> T& m_CampScoreRed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_CampScoreBlue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortCampData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sorter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0C8A8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0C9B4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0CA58))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0CC60))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0CE68))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0CF34))(this);
	}
	template <typename T = void> T LogDebug(uintptr_t gameInfo) {
		return ((T (*)(PVPScorePanelController*, uintptr_t))(Il2CppBase() + 0x2B0DFE8))(this, gameInfo);
	}
	template <typename T = void> T SortCampData(uintptr_t CampDataList) {
		return ((T (*)(PVPScorePanelController*, uintptr_t))(Il2CppBase() + 0x2B0EECC))(this, CampDataList);
	}
	template <typename T = int32_t> static T Sorter(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B0F024))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0F314))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0F31C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0F324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPScorePanelController*))(Il2CppBase() + 0x2B0F32C))(this);
	}

};

}

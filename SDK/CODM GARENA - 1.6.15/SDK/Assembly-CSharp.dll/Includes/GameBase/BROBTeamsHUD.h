#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BROBTeamsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BROBTeamsHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PageButtonList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TeamItemTemplateList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GroundButton() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& OverallButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TemplateTeamNode() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TableComponent() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ScrollViewPanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeamNodes() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TotalTeamDataList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NearTeamDataList() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_IsOverallSelected() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_CurPageIndex() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_DataDirty() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EndNums() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EndHeights() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEndNums() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNearTeams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPageBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SrcollViewToIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroundBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverallBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37433B0))(this);
	}
	template <typename T = void> T GetEndNums() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37433B8))(this);
	}
	template <typename T = void> T OnPlayerLoginOrLogout(uint32_t pId, bool isLogin) {
		return ((T (*)(BROBTeamsHUD*, uint32_t, bool))(Il2CppBase() + 0x37436F0))(this, pId, isLogin);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37437B4))(this);
	}
	template <typename T = void> T RefreshTeamData() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3743C30))(this);
	}
	template <typename T = void> T UpdateNearTeams() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3744A08))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BROBTeamsHUD*, float))(Il2CppBase() + 0x3744C14))(this, dt);
	}
	template <typename T = void> T UpdateTeamView(bool restPosition) {
		return ((T (*)(BROBTeamsHUD*, bool))(Il2CppBase() + 0x3744330))(this, restPosition);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3744D20))(this);
	}
	template <typename T = void> T DragFinished() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37450D4))(this);
	}
	template <typename T = void> T OnPageBtnClick(uintptr_t clickedObj) {
		return ((T (*)(BROBTeamsHUD*, uintptr_t))(Il2CppBase() + 0x3745304))(this, clickedObj);
	}
	template <typename T = void> T SrcollViewToIndex(int32_t idx) {
		return ((T (*)(BROBTeamsHUD*, int32_t))(Il2CppBase() + 0x3745464))(this, idx);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37455EC))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37458FC))(this);
	}
	template <typename T = void> T OnGroundBtnClick() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x37459B4))(this);
	}
	template <typename T = void> T OnOverallBtnClick() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3745B00))(this);
	}
	template <typename T = int32_t> static T RefreshTeamDatam__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3745C4C))(0, a, b);
	}
	template <typename T = bool> static T UpdateNearTeamsm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3745C80))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3745CB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BROBTeamsHUD*, float))(Il2CppBase() + 0x3745CC0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3745CC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BROBTeamsHUD*))(Il2CppBase() + 0x3745CD0))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsChainTaskViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsChainTaskView_CA"));
	}

	template <typename T = Il2CppVector3> T& IconScale_From() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> static T& IconPosY_DescPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& IconPosY_TaskPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& RemainTimeRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TaskStateScrollView() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& FlowTable() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ScrollViewRoot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LeftBtnContainer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LeftBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& RightBtnContainer() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RightBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& DescPageRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ActivityName() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ActivityDesc() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& FinalReawadLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& TaskPageRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& TaskDesc() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& GoBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ClaimBtn() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& ClaimBtnLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ClaimedObj() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& StatusLabel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ItemTemplate_1() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& ItemTemplate_2() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& TaskItemIconRoot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& m_bAdaptation() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& m_ViewConentWidth() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& m_ViewParentWidget() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_Task() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& m_AwardItemId() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& m_AwardItemId_1() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& m_TaskItemIconRootScaleRate() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_YellowColor() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrowBtnColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDescPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskAwardIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoDetails_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = int32_t> T get_ViewConentWidth() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DB3C8))(this);
	}
	template <typename T = uintptr_t> T get_ViewParentWidget() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DB58C))(this);
	}
	template <typename T = uintptr_t> T get_Task() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DD6A8))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DE100))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DE1B0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DE328))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DE428))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34DE4D8))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t))(Il2CppBase() + 0x34DF710))(this, activity);
	}
	template <typename T = void> T UpdateArrowBtnColor(bool bLeftYellow, bool bRightYellow) {
		return ((T (*)(LiveOpsChainTaskViewCA*, bool, bool))(Il2CppBase() + 0x34DCB44))(this, bLeftYellow, bRightYellow);
	}
	template <typename T = void> T ShowDescPage(uintptr_t opsActivity) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t))(Il2CppBase() + 0x34DB8B0))(this, opsActivity);
	}
	template <typename T = void> T ShowTaskPage(uintptr_t task, uintptr_t taskType, bool bInit) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x34DBDB4))(this, task, taskType, bInit);
	}
	template <typename T = void> T ShowTaskAwardIcon(Il2CppList<uintptr_t>* awardlist) {
		return ((T (*)(LiveOpsChainTaskViewCA*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x34DF7C4))(this, awardlist);
	}
	template <typename T = void> T UpdateItemTemplate(uintptr_t awardData, uintptr_t itemTemplate) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34DFB34))(this, awardData, itemTemplate);
	}
	template <typename T = void> T GoDetails(uintptr_t Obj) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t))(Il2CppBase() + 0x34DFD60))(this, Obj);
	}
	template <typename T = void> T GoDetails_1(uintptr_t Obj) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t))(Il2CppBase() + 0x34DFEB8))(this, Obj);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34E0010))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34E0018))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsChainTaskViewCA*))(Il2CppBase() + 0x34E0020))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsChainTaskViewCA*, uintptr_t))(Il2CppBase() + 0x34E0028))(this, P0);
	}

};

}

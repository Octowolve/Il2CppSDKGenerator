#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMonthSignCellViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMonthSignCellView_CA"));
	}

	template <typename T = uintptr_t> T& CellRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalBG() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DayName_Normal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& FinishBG() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DayName_Finish() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LockBG() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DayName_Lock() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SelectedSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_AwardItemId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& CellItemClickCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& bNeedCheckShowFix() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_bShowFix() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemTemplateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetSize(int32_t width, int32_t height) {
		return ((T (*)(LiveOpsMonthSignCellViewCA*, int32_t, int32_t))(Il2CppBase() + 0x3504A08))(this, width, height);
	}
	template <typename T = void> T SetData(uintptr_t task, uintptr_t sv, bool bSpecialAward, void* clickcallback) {
		return ((T (*)(LiveOpsMonthSignCellViewCA*, uintptr_t, uintptr_t, bool, void*))(Il2CppBase() + 0x3504ABC))(this, task, sv, bSpecialAward, clickcallback);
	}
	template <typename T = void> T SetItemTemplateState(uintptr_t task, bool bSpecialAward) {
		return ((T (*)(LiveOpsMonthSignCellViewCA*, uintptr_t, bool))(Il2CppBase() + 0x3504FD8))(this, task, bSpecialAward);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LiveOpsMonthSignCellViewCA*))(Il2CppBase() + 0x35053B8))(this);
	}
	template <typename T = void> T ItemClick(uintptr_t obj) {
		return ((T (*)(LiveOpsMonthSignCellViewCA*, uintptr_t))(Il2CppBase() + 0x350553C))(this, obj);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LiveOpsMonthSignCellViewCA*))(Il2CppBase() + 0x3505710))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMonthSignCellViewCA*))(Il2CppBase() + 0x3505828))(this);
	}

};

}

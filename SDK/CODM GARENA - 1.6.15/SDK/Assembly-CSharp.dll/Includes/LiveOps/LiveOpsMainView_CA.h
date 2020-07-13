#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMainViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMainView_CA"));
	}

	template <typename T = uintptr_t> T& TopMenuRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TopMenus() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TopBoder() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BottomBoder() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& FlowTable() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& scrollViewContainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& contentRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& contentBG() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ContentBG() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LeftMenuBG() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTopMenuView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRedPointShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBGShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(LiveOpsMainViewCA*))(Il2CppBase() + 0x34FDC84))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMainViewCA*))(Il2CppBase() + 0x34FDC8C))(this);
	}
	template <typename T = void> T InitTopMenuView(uintptr_t inTableList, int32_t inSelectedTopIndex) {
		return ((T (*)(LiveOpsMainViewCA*, uintptr_t, int32_t))(Il2CppBase() + 0x34F2F68))(this, inTableList, inSelectedTopIndex);
	}
	template <typename T = void> T UpdateRedPointShow(uintptr_t inTableList) {
		return ((T (*)(LiveOpsMainViewCA*, uintptr_t))(Il2CppBase() + 0x34F367C))(this, inTableList);
	}
	template <typename T = void> T SetBGShow(bool bShow) {
		return ((T (*)(LiveOpsMainViewCA*, bool))(Il2CppBase() + 0x34F7734))(this, bShow);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMainViewCA*))(Il2CppBase() + 0x34FDF90))(this);
	}

};

}

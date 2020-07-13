#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMonthSignViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMonthSignView_CA"));
	}

	template <typename T = uintptr_t> T& RemainTimeRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SignRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FlowGrid() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BtnRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ClaimBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ClaimBtnLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& DisabledSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& bottomWidget() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& topLeftWidget() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& rightAnchor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& m_bAdaptation() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDrawBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_bAdaptation() {
		return ((T (*)(LiveOpsMonthSignViewCA*))(Il2CppBase() + 0x3506220))(this);
	}
	template <typename T = Il2CppString*> T GetDefaultSpriteName() {
		return ((T (*)(LiveOpsMonthSignViewCA*))(Il2CppBase() + 0x3509908))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsMonthSignViewCA*, uintptr_t))(Il2CppBase() + 0x35099C0))(this, activity);
	}
	template <typename T = void> T UpdateDrawBtnShow(int32_t awardCount) {
		return ((T (*)(LiveOpsMonthSignViewCA*, int32_t))(Il2CppBase() + 0x350715C))(this, awardCount);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsMonthSignViewCA*))(Il2CppBase() + 0x3508CB8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetDefaultSpriteName() {
		return ((T (*)(LiveOpsMonthSignViewCA*))(Il2CppBase() + 0x3509A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsMonthSignViewCA*, uintptr_t))(Il2CppBase() + 0x3509A84))(this, P0);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMatchJumpViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMatchJumpView_CA"));
	}

	template <typename T = int32_t> static T& LeftDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& RightContainer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MatchItemList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ShowExchangeBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShowItemTemplateList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ShowItemBG() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ShowItemRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ShowContainer() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ShowItemTitle() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_MatchItemHeight() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& m_ShowItemHeight() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_bAdaptation() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMatchJumpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView_Height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_bAdaptation() {
		return ((T (*)(LiveOpsMatchJumpViewCA*))(Il2CppBase() + 0x34FF18C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsMatchJumpViewCA*, uintptr_t))(Il2CppBase() + 0x350379C))(this, activity);
	}
	template <typename T = void> T UpdateMatchJumpData(Il2CppList<uintptr_t>* matchJumps) {
		return ((T (*)(LiveOpsMatchJumpViewCA*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x34FF530))(this, matchJumps);
	}
	template <typename T = void> T AdaptationView_Height(int32_t matchItemCount) {
		return ((T (*)(LiveOpsMatchJumpViewCA*, int32_t))(Il2CppBase() + 0x3503858))(this, matchItemCount);
	}
	template <typename T = void> T GotoDetail(uintptr_t obj) {
		return ((T (*)(LiveOpsMatchJumpViewCA*, uintptr_t))(Il2CppBase() + 0x3503EF0))(this, obj);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsMatchJumpViewCA*))(Il2CppBase() + 0x350007C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsMatchJumpViewCA*, uintptr_t))(Il2CppBase() + 0x350407C))(this, P0);
	}

};

}

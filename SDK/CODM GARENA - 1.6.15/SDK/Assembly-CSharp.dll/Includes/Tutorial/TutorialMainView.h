#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialMainView"));
	}

	template <typename T = int32_t> static T& TabIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SubIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& TabContainer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Holders() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MainSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MainSpriteNames() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MainContents() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LeftBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RightBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ProcessPointList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TweenAnimation() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitHolders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnionIndexExchanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnionIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T InitHolders() {
		return ((T (*)(TutorialMainView*))(Il2CppBase() + 0x423E610))(this);
	}
	template <typename T = void> T OnToggleChanged(int32_t index) {
		return ((T (*)(TutorialMainView*, int32_t))(Il2CppBase() + 0x423F3E4))(this, index);
	}
	template <typename T = void> T OnUnionIndexExchanged(int32_t tabIndex, int32_t subIndex) {
		return ((T (*)(TutorialMainView*, int32_t, int32_t))(Il2CppBase() + 0x423F67C))(this, tabIndex, subIndex);
	}
	template <typename T = int32_t> T GetUnionIndex(int32_t tabIndex, int32_t subIndex) {
		return ((T (*)(TutorialMainView*, int32_t, int32_t))(Il2CppBase() + 0x423FCBC))(this, tabIndex, subIndex);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(TutorialMainView*))(Il2CppBase() + 0x423E9C8))(this);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(TutorialMainView*))(Il2CppBase() + 0x423EBF4))(this);
	}

};

}

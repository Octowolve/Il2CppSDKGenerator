#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsRewardPreviewView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsRewardPreviewView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Dot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Dots() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SpriteSmallIcon() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LabelUnLockState() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& SpriteLock() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SpriteGet() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BtnLeft() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BtnRight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& m_CurSelectIndex() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& REWARD_ICON_HEIGHT() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChesetReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(CodLiveOpsRewardPreviewView*, uintptr_t))(Il2CppBase() + 0x354D718))(this, activity);
	}
	template <typename T = void> T UpdateChesetReward() {
		return ((T (*)(CodLiveOpsRewardPreviewView*))(Il2CppBase() + 0x354DF10))(this);
	}
	template <typename T = void> T OnBtnLeftClick() {
		return ((T (*)(CodLiveOpsRewardPreviewView*))(Il2CppBase() + 0x354DA5C))(this);
	}
	template <typename T = void> T OnBtnRightClick() {
		return ((T (*)(CodLiveOpsRewardPreviewView*))(Il2CppBase() + 0x354DBC4))(this);
	}

};

}

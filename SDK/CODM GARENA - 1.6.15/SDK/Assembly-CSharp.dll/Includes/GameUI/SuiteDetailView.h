#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SuiteDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SuiteDetailView"));
	}

	template <typename T = uintptr_t> T& ContentObj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SuiteNameLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SuiteActiveSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SuiteActiveLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SuiteBuffItems() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SuiteItemList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& RewardItem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RewardReceivedObj() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ProgressLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TabNode() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& FrameWidget() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SuiteDetailView*))(Il2CppBase() + 0x29A30D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SuiteDetailView*))(Il2CppBase() + 0x29A31C0))(this);
	}

};

}

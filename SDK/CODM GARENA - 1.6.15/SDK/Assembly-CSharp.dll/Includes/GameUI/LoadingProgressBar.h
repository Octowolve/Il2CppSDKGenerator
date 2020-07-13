#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadingProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadingProgressBar"));
	}

	template <typename T = uintptr_t> T& LabelTips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelProgressValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteForeCommon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteBackCommon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ProgressBarZombie() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteForeZombie() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteBackZombie() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_LastProgress() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_bPlayingFake() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_IsZombie() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = float> T& fakeProgress() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeShowProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeUpdateProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T AdaptSize() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x233F2F8))(this);
	}
	template <typename T = void> T InitProgress() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x233F964))(this);
	}
	template <typename T = void> T SetLoadingTips(Il2CppString* tips, float progress) {
		return ((T (*)(LoadingProgressBar*, Il2CppString*, float))(Il2CppBase() + 0x233FCFC))(this, tips, progress);
	}
	template <typename T = void> T FakeShowProgress() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x23401A4))(this);
	}
	template <typename T = void> T FakeUpdateProgress() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x2340290))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x2340520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x23405F0))(this);
	}

};

}

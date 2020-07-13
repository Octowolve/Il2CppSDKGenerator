#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadPropertyLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadPropertyLine"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OldLine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NewLineAdd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NewLineSub() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ProgressBarSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PropertyValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_MaxValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_CurrentValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mCacheLineWidth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mCacheNormalColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mCacheAddColor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mCacheSubColor() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& oldLineTween() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& newLineAddTween() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& newLineSubTween() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& isNeedAnimationNextTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOldLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNewLineAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNewLineSub() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T InitAnimation(float delay, float duration) {
		return ((T (*)(SquadPropertyLine*, float, float))(Il2CppBase() + 0x3946220))(this, delay, duration);
	}
	template <typename T = void> T ResetAnimation() {
		return ((T (*)(SquadPropertyLine*))(Il2CppBase() + 0x394673C))(this);
	}
	template <typename T = void> T PlayOldLine(float toValue) {
		return ((T (*)(SquadPropertyLine*, float))(Il2CppBase() + 0x39467E0))(this, toValue);
	}
	template <typename T = void> T PlayNewLineAdd(float toValue) {
		return ((T (*)(SquadPropertyLine*, float))(Il2CppBase() + 0x3946950))(this, toValue);
	}
	template <typename T = void> T PlayNewLineSub(float toValue) {
		return ((T (*)(SquadPropertyLine*, float))(Il2CppBase() + 0x3946AC0))(this, toValue);
	}
	template <typename T = void> T SetValue(Il2CppString* name, float oldValue, float newValue, float maxValue) {
		return ((T (*)(SquadPropertyLine*, Il2CppString*, float, float, float))(Il2CppBase() + 0x3946C30))(this, name, oldValue, newValue, maxValue);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SquadPropertyLine*))(Il2CppBase() + 0x3947208))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SquadPropertyLine*))(Il2CppBase() + 0x394731C))(this);
	}

};

}

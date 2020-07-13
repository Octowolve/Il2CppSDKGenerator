#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UIPlaySoundFMOD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UIPlaySoundFMOD"));
	}

	template <typename T = Il2CppString*> T& AudioPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsOver() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& volume() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& pitch() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_canPlay() {
		return ((T (*)(UIPlaySoundFMOD*))(Il2CppBase() + 0x2E75E40))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPlaySoundFMOD*))(Il2CppBase() + 0x2E75F5C))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIPlaySoundFMOD*, bool))(Il2CppBase() + 0x2E76080))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIPlaySoundFMOD*, bool))(Il2CppBase() + 0x2E761F4))(this, isPressed);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPlaySoundFMOD*))(Il2CppBase() + 0x2E76368))(this);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIPlaySoundFMOD*, bool))(Il2CppBase() + 0x2E76498))(this, isSelected);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UIPlaySoundFMOD*))(Il2CppBase() + 0x2E765B0))(this);
	}

};

}

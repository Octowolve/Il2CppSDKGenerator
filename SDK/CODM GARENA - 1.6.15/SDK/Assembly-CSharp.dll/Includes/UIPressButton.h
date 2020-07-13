#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPressButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPressButton"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& onPress() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onRelease() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onPressing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& invokeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Pressed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastTriggerTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnPress(bool isDown) {
		return ((T (*)(UIPressButton*, bool))(Il2CppBase() + 0x2F87BBC))(this, isDown);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIPressButton*))(Il2CppBase() + 0x2F87D0C))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamepadButtonNameTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamepadButtonNameTest"));
	}

	template <typename T = Il2CppString*> T& currentControllerName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& currentButton() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& currentAxis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GamepadButtonNameTest*))(Il2CppBase() + 0x2550B48))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GamepadButtonNameTest*))(Il2CppBase() + 0x2550C28))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GamepadButtonNameTest*))(Il2CppBase() + 0x255144C))(this);
	}

};

}

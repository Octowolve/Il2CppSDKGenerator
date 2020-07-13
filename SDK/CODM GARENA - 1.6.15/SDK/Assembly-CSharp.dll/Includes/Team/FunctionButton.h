#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Team {

class FunctionButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Team", "FunctionButton"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetLabelColor(uintptr_t color) {
		return ((T (*)(FunctionButton*, uintptr_t))(Il2CppBase() + 0x4655FBC))(this, color);
	}
	template <typename T = void> T SetLabelText(Il2CppString* str) {
		return ((T (*)(FunctionButton*, Il2CppString*))(Il2CppBase() + 0x46560B4))(this, str);
	}
	template <typename T = void> T SetSpriteActive(bool active) {
		return ((T (*)(FunctionButton*, bool))(Il2CppBase() + 0x465617C))(this, active);
	}

};

}

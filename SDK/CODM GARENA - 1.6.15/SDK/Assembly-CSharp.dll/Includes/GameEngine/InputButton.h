#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InputButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InputButton"));
	}

	template <typename T = Il2CppVector2> T& OriginPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& Size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ButtonType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsFixed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Enable() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& ClickHandler() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InButtonRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitPosition(Il2CppVector2 position) {
		return ((T (*)(InputButton*, Il2CppVector2))(Il2CppBase() + 0x3710F10))(this, position);
	}
	template <typename T = bool> T InButtonRange(Il2CppVector2 point) {
		return ((T (*)(InputButton*, Il2CppVector2))(Il2CppBase() + 0x36CA7EC))(this, point);
	}

};

}

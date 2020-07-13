#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RotateGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RotateGUI"));
	}

	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& pivotX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& pivotY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& normalized() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& applyGlobally() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& applied() {
		return *(T*)((uintptr_t)this + 0x36);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RotateGUI*))(Il2CppBase() + 0x4FAB9A0))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(RotateGUI*))(Il2CppBase() + 0x4FAB9F4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RotateGUI*))(Il2CppBase() + 0x4FABCB8))(this);
	}

};

}

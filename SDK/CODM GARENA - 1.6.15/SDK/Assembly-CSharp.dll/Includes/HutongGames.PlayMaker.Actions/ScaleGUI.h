#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ScaleGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ScaleGUI"));
	}

	template <typename T = uintptr_t> T& scaleX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& scaleY() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& pivotX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& pivotY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& normalized() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& applyGlobally() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& applied() {
		return *(T*)((uintptr_t)this + 0x3A);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ScaleGUI*))(Il2CppBase() + 0x4FACB04))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(ScaleGUI*))(Il2CppBase() + 0x4FACB6C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ScaleGUI*))(Il2CppBase() + 0x4FACF4C))(this);
	}

};

}

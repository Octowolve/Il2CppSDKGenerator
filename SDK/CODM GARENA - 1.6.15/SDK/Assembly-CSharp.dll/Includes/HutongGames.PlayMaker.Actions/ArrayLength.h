#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayLength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayLength"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& length() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayLength*))(Il2CppBase() + 0x4F30FCC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayLength*))(Il2CppBase() + 0x4F30FE0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ArrayLength*))(Il2CppBase() + 0x4F31044))(this);
	}

};

}

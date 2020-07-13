#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayAdd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayAdd"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayAdd*))(Il2CppBase() + 0x4F2FCCC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayAdd*))(Il2CppBase() + 0x4F2FCD8))(this);
	}
	template <typename T = void> T DoAddValue() {
		return ((T (*)(ArrayAdd*))(Il2CppBase() + 0x4F2FCF8))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayDeleteAt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayDeleteAt"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& index() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& indexOutOfRangeEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayDeleteAt*))(Il2CppBase() + 0x4F30438))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayDeleteAt*))(Il2CppBase() + 0x4F3044C))(this);
	}
	template <typename T = void> T DoDeleteAt() {
		return ((T (*)(ArrayDeleteAt*))(Il2CppBase() + 0x4F3046C))(this);
	}

};

}

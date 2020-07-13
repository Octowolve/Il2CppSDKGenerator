#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayGet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayGet"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& index() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& indexOutOfRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayGet*))(Il2CppBase() + 0x4F30B58))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayGet*))(Il2CppBase() + 0x4F30B74))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ArrayGet*))(Il2CppBase() + 0x4F30CB8))(this);
	}
	template <typename T = void> T DoGetValue() {
		return ((T (*)(ArrayGet*))(Il2CppBase() + 0x4F30BA0))(this);
	}

};

}

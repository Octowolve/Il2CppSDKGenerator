#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IntOperator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IntOperator"));
	}

	template <typename T = uintptr_t> T& integer1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& integer2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& operation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(IntOperator*))(Il2CppBase() + 0x4F09B28))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IntOperator*))(Il2CppBase() + 0x4F09B40))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IntOperator*))(Il2CppBase() + 0x4F09D50))(this);
	}
	template <typename T = void> T DoIntOperator() {
		return ((T (*)(IntOperator*))(Il2CppBase() + 0x4F09B6C))(this);
	}

};

}

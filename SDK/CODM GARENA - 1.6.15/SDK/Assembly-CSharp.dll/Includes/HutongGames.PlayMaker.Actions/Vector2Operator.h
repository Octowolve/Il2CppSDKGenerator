#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2Operator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2Operator"));
	}

	template <typename T = uintptr_t> T& vector1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& operation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeVector2Result() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeFloatResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2Operator*))(Il2CppBase() + 0x4F1C970))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2Operator*))(Il2CppBase() + 0x4F1C994))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2Operator*))(Il2CppBase() + 0x4F1CC64))(this);
	}
	template <typename T = void> T DoVector2Operator() {
		return ((T (*)(Vector2Operator*))(Il2CppBase() + 0x4F1C9C0))(this);
	}

};

}

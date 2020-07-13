#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatCompare"));
	}

	template <typename T = uintptr_t> T& float1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& float2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& tolerance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& equal() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& lessThan() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& greaterThan() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatCompare*))(Il2CppBase() + 0x5050590))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatCompare*))(Il2CppBase() + 0x50505F0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatCompare*))(Il2CppBase() + 0x5050808))(this);
	}
	template <typename T = void> T DoCompare() {
		return ((T (*)(FloatCompare*))(Il2CppBase() + 0x505061C))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(FloatCompare*))(Il2CppBase() + 0x505080C))(this);
	}

};

}

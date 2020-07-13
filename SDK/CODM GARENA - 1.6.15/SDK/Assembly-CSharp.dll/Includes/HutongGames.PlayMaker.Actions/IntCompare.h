#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IntCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IntCompare"));
	}

	template <typename T = uintptr_t> T& integer1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& integer2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& equal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lessThan() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& greaterThan() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(IntCompare*))(Il2CppBase() + 0x4F097D8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IntCompare*))(Il2CppBase() + 0x4F09824))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IntCompare*))(Il2CppBase() + 0x4F09960))(this);
	}
	template <typename T = void> T DoIntCompare() {
		return ((T (*)(IntCompare*))(Il2CppBase() + 0x4F09850))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(IntCompare*))(Il2CppBase() + 0x4F09964))(this);
	}

};

}

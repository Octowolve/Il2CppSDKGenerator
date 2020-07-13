#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DebugFsmVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DebugFsmVariable"));
	}

	template <typename T = uintptr_t> T& logLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& variable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DebugFsmVariable*))(Il2CppBase() + 0x4FC4E60))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DebugFsmVariable*))(Il2CppBase() + 0x4FC4E70))(this);
	}

};

}

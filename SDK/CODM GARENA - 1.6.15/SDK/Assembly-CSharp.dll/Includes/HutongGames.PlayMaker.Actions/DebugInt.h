#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DebugInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DebugInt"));
	}

	template <typename T = uintptr_t> T& logLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DebugInt*))(Il2CppBase() + 0x4FC5074))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DebugInt*))(Il2CppBase() + 0x4FC5080))(this);
	}

};

}

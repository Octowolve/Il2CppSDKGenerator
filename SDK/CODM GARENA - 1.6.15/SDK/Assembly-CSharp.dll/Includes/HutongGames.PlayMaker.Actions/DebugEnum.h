#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DebugEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DebugEnum"));
	}

	template <typename T = uintptr_t> T& logLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& enumVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DebugEnum*))(Il2CppBase() + 0x4FC4B0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DebugEnum*))(Il2CppBase() + 0x4FC4B1C))(this);
	}

};

}

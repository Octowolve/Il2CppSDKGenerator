#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IntChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IntChanged"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& changedEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& previousValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(IntChanged*))(Il2CppBase() + 0x4F09544))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IntChanged*))(Il2CppBase() + 0x4F09558))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IntChanged*))(Il2CppBase() + 0x4F095B8))(this);
	}

};

}

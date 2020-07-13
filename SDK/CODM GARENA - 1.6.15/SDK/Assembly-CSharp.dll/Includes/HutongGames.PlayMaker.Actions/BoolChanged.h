#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BoolChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BoolChanged"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& changedEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& previousValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BoolChanged*))(Il2CppBase() + 0x4F34554))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BoolChanged*))(Il2CppBase() + 0x4F34568))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BoolChanged*))(Il2CppBase() + 0x4F345C8))(this);
	}

};

}

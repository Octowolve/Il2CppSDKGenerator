#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StringChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StringChanged"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& changedEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& previousValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StringChanged*))(Il2CppBase() + 0x4F15E30))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StringChanged*))(Il2CppBase() + 0x4F15E44))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StringChanged*))(Il2CppBase() + 0x4F15EA4))(this);
	}

};

}

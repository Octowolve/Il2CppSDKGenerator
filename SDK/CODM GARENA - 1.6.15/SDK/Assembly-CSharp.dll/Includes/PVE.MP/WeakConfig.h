#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class WeakConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "WeakConfig"));
	}

	template <typename T = uintptr_t> T& enterWeakAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& weakAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& weakAnimDuration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& endWeakAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = float> T get_enterWeakTime() {
		return ((T (*)(WeakConfig*))(Il2CppBase() + 0x435DCFC))(this);
	}
	template <typename T = float> T get_endWeakTime() {
		return ((T (*)(WeakConfig*))(Il2CppBase() + 0x435DD0C))(this);
	}

};

}

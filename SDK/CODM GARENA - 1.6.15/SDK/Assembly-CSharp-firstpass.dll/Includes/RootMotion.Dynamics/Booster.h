#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class Booster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "Booster"));
	}

	template <typename T = bool> T& fullBody() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& muscles() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& groups() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& immunity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& impulseMlp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& boostParents() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& boostChildren() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Boost(uintptr_t puppet) {
		return ((T (*)(Booster*, uintptr_t))(Il2CppBase() + 0x38AFAF0))(this, puppet);
	}

};

}

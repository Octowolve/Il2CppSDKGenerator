#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TraverseTreecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TraverseTree>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t node, uintptr_t parent) {
		return ((T (*)(TraverseTreecAnonStorey0*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DB8AB8))(this, node, parent);
	}

};

}

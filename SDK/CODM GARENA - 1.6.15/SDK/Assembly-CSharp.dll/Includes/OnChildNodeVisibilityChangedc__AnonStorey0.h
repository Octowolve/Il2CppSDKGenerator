#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnChildNodeVisibilityChangedcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnChildNodeVisibilityChanged>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& visibleCountLOD0() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t node) {
		return ((T (*)(OnChildNodeVisibilityChangedcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3DB7338))(this, node);
	}

};

}

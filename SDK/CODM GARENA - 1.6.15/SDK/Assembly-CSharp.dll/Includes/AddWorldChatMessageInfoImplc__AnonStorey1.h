#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddWorldChatMessageInfoImplcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddWorldChatMessageInfoImpl>c__AnonStorey1"));
	}

	template <typename T = uint64_t> T& roomID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddWorldChatMessageInfoImplcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1D3D548))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(AddWorldChatMessageInfoImplcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1D3D58C))(this, it);
	}

};

}

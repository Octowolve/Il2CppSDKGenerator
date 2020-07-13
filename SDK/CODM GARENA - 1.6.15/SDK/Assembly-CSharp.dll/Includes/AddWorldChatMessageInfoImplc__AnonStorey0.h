#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddWorldChatMessageInfoImplcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddWorldChatMessageInfoImpl>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddWorldChatMessageInfoImplcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D3D504))(this, it);
	}

};

}

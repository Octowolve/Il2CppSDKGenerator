#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddGuildChatMessageImplcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddGuildChatMessageImpl>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& chatInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddGuildChatMessageImplcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1D3D420))(this, it);
	}

};

}

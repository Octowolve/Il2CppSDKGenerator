#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddInGameFriendMessageImplcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddInGameFriendMessageImpl>c__AnonStorey7"));
	}

	template <typename T = uintptr_t> T& friendInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t c) {
		return ((T (*)(AddInGameFriendMessageImplcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x1D3D46C))(this, c);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddRoomChatMessageImplcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddRoomChatMessageImpl>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& chatInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddRoomChatMessageImplcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x1D3D4B8))(this, it);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDeleteFriendBtnClickcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDeleteFriendBtnClick>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t result, int32_t context) {
		return ((T (*)(OnDeleteFriendBtnClickcAnonStorey0*, uintptr_t, int32_t))(Il2CppBase() + 0x32A7768))(this, result, context);
	}

};

}

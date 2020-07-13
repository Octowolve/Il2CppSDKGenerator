#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CameraShakerForAvatarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CameraShakerForAvatarView"));
	}

	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Play() {
		return ((T (*)(CameraShakerForAvatarView*))(Il2CppBase() + 0x28FA564))(this);
	}

};

}

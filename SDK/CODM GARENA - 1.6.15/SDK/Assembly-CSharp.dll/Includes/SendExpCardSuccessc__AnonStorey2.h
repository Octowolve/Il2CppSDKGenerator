#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendExpCardSuccesscAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendExpCardSuccess>c__AnonStorey2"));
	}

	template <typename T = Il2CppString*> T& OpenID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SendExpCardSuccesscAnonStorey2*))(Il2CppBase() + 0x3852F14))(this);
	}

};

}

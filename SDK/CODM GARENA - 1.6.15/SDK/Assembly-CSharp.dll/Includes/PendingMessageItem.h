#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PendingMessageItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PendingMessageItem"));
	}

	template <typename T = bool> T& bSameTeam() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

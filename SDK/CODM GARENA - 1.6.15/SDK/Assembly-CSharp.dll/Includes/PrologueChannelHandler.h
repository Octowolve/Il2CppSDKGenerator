#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrologueChannelHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrologueChannelHandler"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& WestList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CNList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(PrologueChannelHandler*))(Il2CppBase() + 0x4CD9C78))(this);
	}

};

}

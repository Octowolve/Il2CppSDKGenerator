#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatPlayerSeparator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatPlayerSeparator"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Configure(uintptr_t info) {
		return ((T (*)(ChatPlayerSeparator*, uintptr_t))(Il2CppBase() + 0x3A03780))(this, info);
	}

};

}

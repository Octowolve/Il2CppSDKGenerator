#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ESERIALIZETYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ESERIALIZETYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TYPE_INIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TYPE_SETUSERINFO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TYPE_SETGAMESTATUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

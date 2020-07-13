#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TOKENTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOKEN_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& GETTOKENTYPE_SERVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GETTOKENTYPE_SDK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GETTOKENTYPE_CLIENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

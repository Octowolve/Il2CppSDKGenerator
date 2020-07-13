#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Overwrite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "Overwrite"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Prompt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Never() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Always() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

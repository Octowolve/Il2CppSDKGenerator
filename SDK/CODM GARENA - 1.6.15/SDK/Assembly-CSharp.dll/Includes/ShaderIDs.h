#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderIDs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShaderIDs"));
	}

	template <typename T = int32_t> static T& MainTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SecTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& _TempRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& _TempRT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& BloomTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}


};

}

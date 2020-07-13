#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CosDefaultValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CosDefaultValue"));
	}

	template <typename T = Il2CppString*> static T& USER_AGENT_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ACCEPT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

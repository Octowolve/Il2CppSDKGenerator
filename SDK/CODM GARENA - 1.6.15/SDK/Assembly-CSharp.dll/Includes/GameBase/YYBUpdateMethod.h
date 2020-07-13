#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class YYBUpdateMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "YYBUpdateMethod"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& UpdateMethod_NoUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UpdateMethod_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UpdateMethod_ByPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

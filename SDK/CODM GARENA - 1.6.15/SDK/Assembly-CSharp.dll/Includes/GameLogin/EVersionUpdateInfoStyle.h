#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class EVersionUpdateInfoStyle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "EVersionUpdateInfoStyle"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& OK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& OKCancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

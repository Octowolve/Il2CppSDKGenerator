#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EFrontEndState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EFrontEndState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& NOT_IN_FRONTEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& FRONTEND_LOADING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& FRONTEND_LOADED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

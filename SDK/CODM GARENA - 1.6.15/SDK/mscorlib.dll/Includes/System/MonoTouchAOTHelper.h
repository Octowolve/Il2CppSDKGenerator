#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoTouchAOTHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MonoTouchAOTHelper"));
	}

	template <typename T = bool> static T& FalseFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

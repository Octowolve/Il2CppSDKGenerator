#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class SYNCBULLETMODE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "SYNCBULLET_MODE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eSYNCBULLET_MODE_ALL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eSYNCBULLET_MODE_ADD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SANYSYNCPROTOCOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_ANYSYNC_PROTOCOL"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eC2S_SPAWN_PROJECTILE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eC2S_PROJECTILE_EXPLOSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

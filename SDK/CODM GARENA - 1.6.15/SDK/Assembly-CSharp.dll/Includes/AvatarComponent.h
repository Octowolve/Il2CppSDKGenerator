#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvatarComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarComponent"));
	}

	template <typename T = uint64_t> T& ComponentId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ComponentAssets() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& SocketName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& AvatarId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}

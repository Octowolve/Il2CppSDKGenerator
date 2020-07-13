#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class LargeHeader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "LargeHeader"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& color() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}

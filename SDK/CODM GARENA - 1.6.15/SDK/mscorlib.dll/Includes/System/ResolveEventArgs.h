#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ResolveEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ResolveEventArgs"));
	}

	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class NeutralResourcesLanguageAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "NeutralResourcesLanguageAttribute"));
	}

	template <typename T = Il2CppString*> T& culture() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}

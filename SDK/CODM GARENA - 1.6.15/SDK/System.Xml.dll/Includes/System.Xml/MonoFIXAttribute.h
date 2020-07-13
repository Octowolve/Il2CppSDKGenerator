#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class MonoFIXAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "MonoFIXAttribute"));
	}

	template <typename T = Il2CppString*> T& comment() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}

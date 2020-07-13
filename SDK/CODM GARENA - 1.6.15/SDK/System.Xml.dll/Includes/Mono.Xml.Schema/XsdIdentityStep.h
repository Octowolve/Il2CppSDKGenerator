#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIdentityStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIdentityStep"));
	}

	template <typename T = bool> T& IsCurrent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsAttribute() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& IsAnyName() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = Il2CppString*> T& NsName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Namespace() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}

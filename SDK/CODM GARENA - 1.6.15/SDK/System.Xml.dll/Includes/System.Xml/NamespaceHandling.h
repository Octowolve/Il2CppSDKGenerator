#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class NamespaceHandling
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "NamespaceHandling"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& OmitDuplicates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

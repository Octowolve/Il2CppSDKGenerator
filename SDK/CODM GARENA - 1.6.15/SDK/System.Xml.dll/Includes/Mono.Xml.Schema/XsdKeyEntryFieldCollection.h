#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdKeyEntryFieldCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdKeyEntryFieldCollection"));
	}


	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(XsdKeyEntryFieldCollection*, int32_t))(Il2CppBase() + 0x4E2648C))(this, i);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(XsdKeyEntryFieldCollection*, uintptr_t))(Il2CppBase() + 0x4E265EC))(this, value);
	}

};

}

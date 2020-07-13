#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdKeyEntryCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdKeyEntryCollection"));
	}


	template <typename T = void> T Add(uintptr_t entry) {
		return ((T (*)(XsdKeyEntryCollection*, uintptr_t))(Il2CppBase() + 0x4E278E0))(this, entry);
	}
	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(XsdKeyEntryCollection*, int32_t))(Il2CppBase() + 0x4E279E8))(this, i);
	}

};

}

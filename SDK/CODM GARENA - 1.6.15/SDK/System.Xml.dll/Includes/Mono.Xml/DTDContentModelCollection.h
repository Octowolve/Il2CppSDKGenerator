#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDContentModelCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDContentModelCollection"));
	}

	template <typename T = uintptr_t> T& contentModel() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(DTDContentModelCollection*, int32_t))(Il2CppBase() + 0x4E121DC))(this, i);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(DTDContentModelCollection*))(Il2CppBase() + 0x4E121A8))(this);
	}
	template <typename T = void> T Add(uintptr_t model) {
		return ((T (*)(DTDContentModelCollection*, uintptr_t))(Il2CppBase() + 0x4E122F4))(this, model);
	}

};

}

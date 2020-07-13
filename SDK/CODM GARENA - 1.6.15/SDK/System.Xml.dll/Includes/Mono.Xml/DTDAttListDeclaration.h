#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDAttListDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDAttListDeclaration"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& attributeOrders() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDAttListDeclaration*))(Il2CppBase() + 0x4E0FA20))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DTDAttListDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E0FA28))(this, value);
	}
	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(DTDAttListDeclaration*, int32_t))(Il2CppBase() + 0x4E0FA30))(this, i);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* name) {
		return ((T (*)(DTDAttListDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E0FB1C))(this, name);
	}
	template <typename T = uintptr_t> T Get(int32_t i) {
		return ((T (*)(DTDAttListDeclaration*, int32_t))(Il2CppBase() + 0x4E0FA34))(this, i);
	}
	template <typename T = uintptr_t> T Get_1(Il2CppString* name) {
		return ((T (*)(DTDAttListDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E0FB20))(this, name);
	}
	template <typename T = uintptr_t> T get_Definitions() {
		return ((T (*)(DTDAttListDeclaration*))(Il2CppBase() + 0x4E0FC48))(this);
	}
	template <typename T = void> T Add(uintptr_t def) {
		return ((T (*)(DTDAttListDeclaration*, uintptr_t))(Il2CppBase() + 0x4E0FC50))(this, def);
	}

};

}

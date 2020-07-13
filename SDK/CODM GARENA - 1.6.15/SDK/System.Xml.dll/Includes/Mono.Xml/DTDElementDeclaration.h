#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDElementDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDElementDeclaration"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& contentModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isEmpty() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isAny() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& isMixedContent() {
		return *(T*)((uintptr_t)this + 0x2A);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDElementDeclaration*))(Il2CppBase() + 0x4E12434))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(DTDElementDeclaration*, Il2CppString*))(Il2CppBase() + 0x4E1243C))(this, value);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(DTDElementDeclaration*))(Il2CppBase() + 0x4E11DA0))(this);
	}
	template <typename T = void> T set_IsEmpty(bool value) {
		return ((T (*)(DTDElementDeclaration*, bool))(Il2CppBase() + 0x4E12444))(this, value);
	}
	template <typename T = bool> T get_IsAny() {
		return ((T (*)(DTDElementDeclaration*))(Il2CppBase() + 0x4E11D98))(this);
	}
	template <typename T = void> T set_IsAny(bool value) {
		return ((T (*)(DTDElementDeclaration*, bool))(Il2CppBase() + 0x4E1244C))(this, value);
	}
	template <typename T = bool> T get_IsMixedContent() {
		return ((T (*)(DTDElementDeclaration*))(Il2CppBase() + 0x4E12454))(this);
	}
	template <typename T = void> T set_IsMixedContent(bool value) {
		return ((T (*)(DTDElementDeclaration*, bool))(Il2CppBase() + 0x4E1245C))(this, value);
	}
	template <typename T = uintptr_t> T get_ContentModel() {
		return ((T (*)(DTDElementDeclaration*))(Il2CppBase() + 0x4E12464))(this);
	}

};

}

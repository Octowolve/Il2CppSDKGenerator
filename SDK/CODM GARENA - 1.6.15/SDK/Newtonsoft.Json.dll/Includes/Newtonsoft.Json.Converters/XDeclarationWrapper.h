#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XDeclarationWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XDeclarationWrapper"));
	}

	template <typename T = uintptr_t> T& Declaration() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Declaration() {
		return ((T (*)(XDeclarationWrapper*))(Il2CppBase() + 0x4095DBC))(this);
	}
	template <typename T = void> T set_Declaration(uintptr_t value) {
		return ((T (*)(XDeclarationWrapper*, uintptr_t))(Il2CppBase() + 0x4095DC4))(this, value);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XDeclarationWrapper*))(Il2CppBase() + 0x4095E80))(this);
	}
	template <typename T = Il2CppString*> T get_Version() {
		return ((T (*)(XDeclarationWrapper*))(Il2CppBase() + 0x4095E88))(this);
	}
	template <typename T = Il2CppString*> T get_Encoding() {
		return ((T (*)(XDeclarationWrapper*))(Il2CppBase() + 0x4095EB4))(this);
	}
	template <typename T = Il2CppString*> T get_Standalone() {
		return ((T (*)(XDeclarationWrapper*))(Il2CppBase() + 0x4095EE0))(this);
	}

};

}

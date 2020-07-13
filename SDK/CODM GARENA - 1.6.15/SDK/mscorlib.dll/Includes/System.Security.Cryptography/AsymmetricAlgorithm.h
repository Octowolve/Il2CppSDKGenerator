#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AsymmetricAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "AsymmetricAlgorithm"));
	}

	template <typename T = int32_t> T& KeySizeValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LegalKeySizesValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AsymmetricAlgorithm*))(Il2CppBase() + 0x3035358))(this);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(AsymmetricAlgorithm*))(Il2CppBase() + 0x3035390))(this);
	}
	template <typename T = void> T set_KeySize(int32_t value) {
		return ((T (*)(AsymmetricAlgorithm*, int32_t))(Il2CppBase() + 0x3035398))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AsymmetricAlgorithm*))(Il2CppBase() + 0x3035574))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(AsymmetricAlgorithm*, bool))(Il2CppBase() + 0x0))(this, disposing);
	}
	template <typename T = void> T FromXmlString(Il2CppString* xmlString) {
		return ((T (*)(AsymmetricAlgorithm*, Il2CppString*))(Il2CppBase() + 0x0))(this, xmlString);
	}
	template <typename T = Il2CppString*> T ToXmlString(bool includePrivateParameters) {
		return ((T (*)(AsymmetricAlgorithm*, bool))(Il2CppBase() + 0x0))(this, includePrivateParameters);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetNamedParam(Il2CppString* xml, Il2CppString* param) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3035588))(0, xml, param);
	}

};

}

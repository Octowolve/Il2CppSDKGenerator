#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class PkzipClassicCryptoBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicCryptoBase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = unsigned char> T TransformByte() {
		return ((T (*)(PkzipClassicCryptoBase*))(Il2CppBase() + 0x4A6D10C))(this);
	}
	template <typename T = void> T SetKeys(Il2CppArray<uintptr_t>* keyData) {
		return ((T (*)(PkzipClassicCryptoBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6D160))(this, keyData);
	}
	template <typename T = void> T UpdateKeys(unsigned char ch) {
		return ((T (*)(PkzipClassicCryptoBase*, unsigned char))(Il2CppBase() + 0x4A6D4C8))(this, ch);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PkzipClassicCryptoBase*))(Il2CppBase() + 0x4A6D6F8))(this);
	}

};

}

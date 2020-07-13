#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class PkzipClassicManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicManaged"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& key_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_BlockSize() {
		return ((T (*)(PkzipClassicManaged*))(Il2CppBase() + 0x4A6DB70))(this);
	}
	template <typename T = void> T set_BlockSize(int32_t value) {
		return ((T (*)(PkzipClassicManaged*, int32_t))(Il2CppBase() + 0x4A6DB78))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LegalKeySizes() {
		return ((T (*)(PkzipClassicManaged*))(Il2CppBase() + 0x4A6DC2C))(this);
	}
	template <typename T = void> T GenerateIV() {
		return ((T (*)(PkzipClassicManaged*))(Il2CppBase() + 0x4A6DD50))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(PkzipClassicManaged*))(Il2CppBase() + 0x4A6DD54))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PkzipClassicManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6DF24))(this, value);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(PkzipClassicManaged*))(Il2CppBase() + 0x4A6E16C))(this);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(PkzipClassicManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6E24C))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(PkzipClassicManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6E308))(this, rgbKey, rgbIV);
	}

};

}

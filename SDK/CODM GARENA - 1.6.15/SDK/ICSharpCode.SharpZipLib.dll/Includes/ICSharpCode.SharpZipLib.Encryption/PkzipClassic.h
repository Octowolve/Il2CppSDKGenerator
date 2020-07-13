#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Encryption {

class PkzipClassic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Encryption", "PkzipClassic"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GenerateKeys(Il2CppArray<uintptr_t>* seed) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6CB2C))(0, seed);
	}

};

}

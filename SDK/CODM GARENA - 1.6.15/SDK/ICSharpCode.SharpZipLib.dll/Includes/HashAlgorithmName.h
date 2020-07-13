#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HashAlgorithmName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "HashAlgorithmName"));
	}

	template <typename T = Il2CppString*> static T& SHA1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

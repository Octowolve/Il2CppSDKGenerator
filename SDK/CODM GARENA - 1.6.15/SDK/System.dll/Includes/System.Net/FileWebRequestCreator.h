#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FileWebRequestCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FileWebRequestCreator"));
	}


	template <typename T = uintptr_t> T Create(uintptr_t uri) {
		return ((T (*)(FileWebRequestCreator*, uintptr_t))(Il2CppBase() + 0x42CA1F4))(this, uri);
	}

};

}

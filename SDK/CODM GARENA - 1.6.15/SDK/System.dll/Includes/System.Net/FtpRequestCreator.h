#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FtpRequestCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FtpRequestCreator"));
	}


	template <typename T = uintptr_t> T Create(uintptr_t uri) {
		return ((T (*)(FtpRequestCreator*, uintptr_t))(Il2CppBase() + 0x42CC984))(this, uri);
	}

};

}

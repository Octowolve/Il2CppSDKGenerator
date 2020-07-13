#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JRaw
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JRaw"));
	}


	template <typename T = uintptr_t> static T Create(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3960FA8))(0, reader);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JRaw*))(Il2CppBase() + 0x39612E4))(this);
	}

};

}

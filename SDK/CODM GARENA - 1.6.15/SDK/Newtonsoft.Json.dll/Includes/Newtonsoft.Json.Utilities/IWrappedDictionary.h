#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class IWrappedDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "IWrappedDictionary"));
	}


	template <typename T = uintptr_t> T get_UnderlyingDictionary() {
		return ((T (*)(IWrappedDictionary*))(Il2CppBase() + 0x0))(this);
	}

};

}

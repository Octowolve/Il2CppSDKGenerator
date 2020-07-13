#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class DateTimeConverterBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "DateTimeConverterBase"));
	}


	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(DateTimeConverterBase*, uintptr_t))(Il2CppBase() + 0x408EEB8))(this, objectType);
	}

};

}

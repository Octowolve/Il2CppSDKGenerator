#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class CamelCasePropertyNamesContractResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "CamelCasePropertyNamesContractResolver"));
	}


	template <typename T = Il2CppString*> T ResolvePropertyName(Il2CppString* propertyName) {
		return ((T (*)(CamelCasePropertyNamesContractResolver*, Il2CppString*))(Il2CppBase() + 0x397A214))(this, propertyName);
	}

};

}
